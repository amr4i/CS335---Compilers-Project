#include "mipsCode.cpp"
#define wordType true
#define byteType false

using namespace std;

extern Env* curEnv;
extern string returnOffset(Env* env, Symbol* sym);
extern int tmpCnt;
extern map <string, string> tmpMap;

void addDataSection(mipsCode* code, Env* baseEnv, bool isWord){
    map <string, Symbol*> ::iterator itt;
    for(itt = baseEnv->addTable.begin() ; itt != baseEnv->addTable.end() ; itt++)
    {
        if( (*itt).se->baseType == "simple")
        {
            if( ((*itt).se->type == "int" || (*itt).se->type == "long") && isWord)
            {
                code->addLine((*itt).fi + ":\t.word 0");
            }
            else if( ((*itt).se->type == "char" || (*itt).se->type == "bool") && !isWord)
            {
                code->addLine((*itt).fi + ":\t.word 0");
            }
        }
        else if( (*itt).se->baseType == "array")
        {
            if( ((*itt).se->type == "int" || (*itt).se->type == "long") && isWord)
            {
                code->addLine((*itt).fi + ":\t.space " + convertNumToString( 4 * (*itt).se->width));
            }
            else if( ((*itt).se->type == "char" || (*itt).se->type == "bool") && !isWord)
            {
                code->addLine((*itt).fi + ":\t.space " + convertNumToString( 4 * (*itt).se->width));
            }   
        }

    }

    vector <Env*> ::iterator childEnv;
    for(childEnv = baseEnv->children.begin(); childEnv != baseEnv->children.end() ; childEnv++)
    {
        addDataSection(code, *(childEnv), isWord);
    }

}

// To create a map from symbol* to Env*
void initSymToEnv(Env* env){
    for(auto symEntry : env->addTable){
        symToEnv[symEntry.se] = env;
    }
    for(auto chld : env->children){
        initSymToEnv(chld);
    }
}

void codeGen(){

    int siz, blockSiz, blockNum;

    cerr << "\tDebug:2\n";
    Env *baseEnv = ST->baseEnv;
    curEnv = baseEnv;

    // Reading the text file and storing it in "ir" data structure
    // readFile(argv[1]);

    // Populating blocks
    getBlocks();

    cerr << "\tDebug:1\n";

    nextUseTable.resize(IR.size()+1);


    blockSiz = blocks.size();

    //computing next use in each of the blocks.
    fori(0, blockSiz)
    {
        blocks[i]->computeNextUse();
    }


    mipsCode* code = new mipsCode(ST);
    code->addLine(".data");

    // add all the data variables
    addDataSection(code, baseEnv, byteType);
    addDataSection(code, baseEnv, wordType);

    string reg_out, reg_in1, reg_in2;

    code->addLine(".text");
    code->addLine("main:");
    code->addLine("jal _Main");
    code->addLine("li $v0, 10");
    code->addLine("syscall");

    /* 
    -> Arrays are to be implemented
    -> String printing is to be allowed
    */

    bool raUpdation = false;

    blockNum = 0;
    siz = IR.size();
    fori(0,siz){
        TAC* ir = IR[i];
        cout<<ir->lineNum<<"\t" <<ir->op<<endl;
        if(ir->isInt1 == true){
            if(ir->l1== "true"){
                ir->l1 = "1";
            }
            else if(ir->l1 == "false")  ir->l1 = "0";
        } 

        if(ir->isInt2 == true){
            if(ir->l2== "true"){
                ir->l2 = "1";
            }
            else if(ir->l2 == "false")  ir->l2 = "0";
        } 

        if (ir->op == "exit")
        {
            code->addLine("li $v0, 10");
            code->addLine("syscall");
        }   

        if(ir->dest != NULL){
            Symbol* sym = ir->dest;
            string _name = sym->name;
            if(_name.substr(0, 6) == "_tVar_" && tmpMap.find(sym->name) == tmpMap.end()){
                sym->offset = tmpCnt;
                tmpMap[sym->name] = convertNumToString(tmpCnt);
                tmpCnt += 4;
                cerr << ir->lineNum << " dest: " << sym->name << "\n";
            }


        }

        if(ir->opd1 != NULL){
            Symbol* sym = ir->opd1;
            string _name = sym->name;
            if(_name.substr(0, 6) == "_tVar_" && tmpMap.find(sym->name) == tmpMap.end()){
                sym->offset = tmpCnt;
                tmpMap[sym->name] = convertNumToString(tmpCnt);
                tmpCnt += 4;
                cerr << ir->lineNum << " opd1: " << sym->name << "\n";
            }

        }

        if(ir->opd2 != NULL){
            Symbol* sym = ir->opd2;
            string _name = sym->name;
            if(_name.substr(0, 6) == "_tVar_" && tmpMap.find(sym->name) == tmpMap.end()){
                sym->offset = tmpCnt;
                tmpMap[sym->name] = convertNumToString(tmpCnt);
                tmpCnt += 4;
                cerr << ir->lineNum << " opd2: " << sym->name << "\n";
            }

        }

        // Check: I have incorporated bool functionanlity in here, && and ||. Please check if I have left it somewhere
        // Also please do the 'char' functionality
        else if (ir->op == "=")
        {
            /* code */
            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                if(ir->l1 == "true")
                    code->addLine("li "+reg_out+", 1");
                else if(ir->l1 == "false")
                    code->addLine("li "+reg_out+", 0");
                else 
                    code->addLine("li "+reg_out+", "+ir->l1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("move "+reg_out+", "+reg_in1);
            }
            
        }
        else if (ir->op == "+=")
        {
            /* code */

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("addi "+reg_out+", "+reg_out+", "+ir->l1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("add "+reg_out+", "+reg_out+", "+reg_in1);
            }
            
        }
        else if (ir->op == "-=")
        {
            /* code */
            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("addi "+reg_out+", "+reg_out+", -"+ir->l1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("sub "+reg_out+", "+reg_out+", "+reg_in1);
            }
            
        }
        else if (ir->op == "*=")
        {
            /* code */
            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l1);
                code->addLine("mult $t0, "+reg_out);
                code->addLine("mflo "+reg_out);
            }
            else{
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("mult "+reg_out+", "+reg_in1);
                code->addLine("mflo "+reg_out);
            }
            
        }
        else if (ir->op == "/=")
        {
            /* code */
            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l1);
                code->addLine("div "+reg_out+", $t0");
                code->addLine("mflo "+reg_out);
            }
            else{
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("div "+reg_out+", "+reg_in1);
                code->addLine("mflo "+reg_out);
            }
            
        }
        else if (ir->op == "%=")
        {
            /* code */
            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l1);
                code->addLine("div "+reg_out+", $t0");
                code->addLine("mfhi "+reg_out);
            }
            else{
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("div "+reg_out+", "+reg_in1);
                code->addLine("mfhi "+reg_out);
            }
            
        }
        else if (ir->op == "<<=")
        {
            /* code */

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("sll "+reg_out+", "+reg_out+", "+ir->l1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("sllv "+reg_out+", "+reg_out+", "+reg_in1);
            }
            
        }
        else if (ir->op == ">>=")
        {
            /* code */

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("srl "+reg_out+", "+reg_out+", "+ir->l1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("srlv "+reg_out+", "+reg_out+", "+reg_in1);
            }
            
        }
        else if (ir->op == "&=")
        {
            /* code */

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("andi "+reg_out+", "+reg_out+", "+ir->l1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("and "+reg_out+", "+reg_out+", "+reg_in1);
            }
            
        }
        else if (ir->op == "|=")
        {
            /* code */

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("ori "+reg_out+", "+reg_out+", "+ir->l1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("or "+reg_out+", "+reg_out+", "+reg_in1);
            }
            
        }
        else if (ir->op == "^=")
        {
            /* code */

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("xori "+reg_out+", "+reg_out+", "+ir->l1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("xor "+reg_out+", "+reg_out+", "+reg_in1);
            }
            
        }
        else if (ir->op == "+")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("addi "+reg_out+", "+reg_out+", "+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("addi "+reg_out+", "+reg_in2+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("addi "+reg_out+", "+reg_in1+", "+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("add "+reg_out+", "+reg_in1+", "+reg_in2);
            }
        }
        else if (ir->op == "-")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("addi "+reg_out+", "+reg_out+", -"+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("sub "+reg_out+", $zero, "+reg_in2);
                code->addLine("addi "+reg_out+", "+reg_out+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("addi "+reg_out+", "+reg_in1+", -"+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("sub "+reg_out+", "+reg_in1+", "+reg_in2);
            }
        }
        else if (ir->op == "*")
        {
            /* code */
            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l1);
                code->addLine("li "+reg_out+", "+ir->l2);
                code->addLine("mult $t0, "+reg_out);
                code->addLine("mflo "+reg_out);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l1);
                code->addLine("mult $t0, "+reg_in2);
                code->addLine("mflo "+reg_out);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l2);
                code->addLine("mult "+reg_in1+", $t0");
                code->addLine("mflo "+reg_out);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("mult "+reg_in1+", "+reg_in2);
                code->addLine("mflo "+reg_out);
            }
        }
        else if (ir->op == "/")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l1);
                code->addLine("li "+reg_out+", "+ir->l2);
                code->addLine("div $t0, "+reg_out);
                code->addLine("mflo "+reg_out);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l1);
                code->addLine("div $t0, "+reg_in2);
                code->addLine("mflo "+reg_out);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l2);
                code->addLine("div "+reg_in1+", $t0");
                code->addLine("mflo "+reg_out);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("div "+reg_in1+", "+reg_in2);
                code->addLine("mflo "+reg_out);
            }
        }
        else if (ir->op == "%")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l1);
                code->addLine("li "+reg_out+", "+ir->l2);
                code->addLine("div $t0, "+reg_out);
                code->addLine("mfhi "+reg_out);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l1);
                code->addLine("div $t0, "+reg_in2);
                code->addLine("mfhi "+reg_out);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l2);
                code->addLine("div "+reg_in1+", $t0");
                code->addLine("mfhi "+reg_out);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("div "+reg_in1+", "+reg_in2);
                code->addLine("mfhi "+reg_out);
            }
        }
        else if (ir->op == "&" || ir->op == "&&")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("andi "+reg_out+", "+reg_out+", "+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("andi "+reg_out+", "+reg_in2+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("andi "+reg_out+", "+reg_in1+", "+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("and "+reg_out+", "+reg_in1+", "+reg_in2);
            }
        }
        else if (ir->op == "|" || ir->op == "||")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("ori "+reg_out+", "+reg_out+", "+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("ori "+reg_out+", "+reg_in2+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("ori "+reg_out+", "+reg_in1+", "+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("or "+reg_out+", "+reg_in1+", "+reg_in2);
            }
        }
        else if (ir->op == "^")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("xori "+reg_out+", "+reg_out+", "+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("xori "+reg_out+", "+reg_in2+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("xori "+reg_out+", "+reg_in1+", "+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("xor "+reg_out+", "+reg_in1+", "+reg_in2);
            }
        }
        else if (ir->op == "<<")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("sll "+reg_out+", "+reg_out+", "+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("sll "+reg_out+", "+reg_in2+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("sll "+reg_out+", "+reg_in1+", "+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("sllv "+reg_out+", "+reg_in1+", "+reg_in2);
            }
        }
        else if (ir->op == ">>")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("srl "+reg_out+", "+reg_out+", "+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("srl "+reg_out+", "+reg_in2+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("srl "+reg_out+", "+reg_in1+", "+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("srlv "+reg_out+", "+reg_in1+", "+reg_in2);
            }
        }
        else if (ir->op == "<")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("slti "+reg_out+", "+reg_out+", "+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("slti "+reg_out+", "+reg_in2+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("slti "+reg_out+", "+reg_in1+", "+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("slt "+reg_out+", "+reg_in1+", "+reg_in2);
            }
        }
        else if (ir->op == ">")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l2);
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("sgt "+reg_out+", "+reg_out+", $t0");
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                code->addLine("li $t0, "+ir->l1);
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("sgt "+reg_out+", "+reg_in2+", $t0");
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                code->addLine("li $t0, "+ir->l2);
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("sgt "+reg_out+", "+reg_in1+", $t0");
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("sgt "+reg_out+", "+reg_in1+", "+reg_in2);
            }
        }
        else if (ir->op == "<=")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l2);
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("sle "+reg_out+", "+reg_out+", $t0");
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                code->addLine("li $t0, "+ir->l1);
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("sle "+reg_out+", "+reg_in2+", $t0");
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                code->addLine("li $t0, "+ir->l2);
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("sle "+reg_out+", "+reg_in1+", $t0");
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("sle "+reg_out+", "+reg_in1+", "+reg_in2);
            }
        }
        else if (ir->op == ">=")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l2);
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("sge "+reg_out+", "+reg_out+", $t0");
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                code->addLine("li $t0, "+ir->l1);
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("sge "+reg_out+", "+reg_in2+", $t0");
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                code->addLine("li $t0, "+ir->l2);
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("sge "+reg_out+", "+reg_in1+", $t0");
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("sge "+reg_out+", "+reg_in1+", "+reg_in2);
            }
        }
        else if (ir->op == "!=")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l2);
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("sne "+reg_out+", "+reg_out+", $t0");
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                code->addLine("li $t0, "+ir->l1);
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("sne "+reg_out+", "+reg_in2+", $t0");
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                code->addLine("li $t0, "+ir->l2);
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("sne "+reg_out+", "+reg_in1+", $t0");
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("sne "+reg_out+", "+reg_in1+", "+reg_in2);
            }
        }
        else if (ir->op == "==")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l2);
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("seq "+reg_out+", "+reg_out+", $t0");
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                code->addLine("li $t0, "+ir->l1);
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("seq "+reg_out+", "+reg_in2+", $t0");
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                code->addLine("li $t0, "+ir->l2);
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("seq "+reg_out+", "+reg_in1+", $t0");
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("seq "+reg_out+", "+reg_in1+", "+reg_in2);
            }
        }
        else if (ir->op == "++")
        {
            /* code */
            reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
            code->addLine("addi "+reg_out+", "+reg_out+", 1");
            code->addLine("sw " + reg_out + ", " + returnOffset(curEnv, ir->dest) + "($sp)");
        }
        else if (ir->op == "--")
        {
            /* code */
            reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
            code->addLine("addi "+reg_out+", "+reg_out+", -1");
            code->addLine("sw "+reg_out+", " + returnOffset(curEnv, ir->dest) + "($sp)");
        }
        else if (ir->op == "printint")
        {
            // printing integer
            reg_out = code->getReg(ir->dest, (ir->lineNum), 0);
            code->addLine("li $v0, 1");
            code->addLine("move $a0, "+reg_out);
            code->addLine("syscall");

        }
        else if (ir->op == "label")
        {
            /* code */
            code->addLine(ir->target+":");

        }
        else if (ir->op == "scan")
        {
            code->addLine("li $v0, 5");
            code->addLine("syscall");
            code->addLine("sw $v0, " + returnOffset(curEnv, ir->dest) + "($sp)");

        }
        else if (ir->op == "array")
        {
            vector<string>::iterator ittt;
            ittt = code->code.begin();
            ittt++;
            string line = ir->array_name+":\t.space "+to_string(4*ir->array_size);
            code->code.insert(ittt, line);
        }
        else if (ir->op == "getarr")
        {
            if(ir->isInt2){
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l2);
                code->addLine("sll $t0, $t0, 2");
                code->addLine("lw "+reg_out+", "+ir->array_name+"($t0)");
            }
            else{
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("sll $t0, "+reg_in2+", 2");
                code->addLine("lw "+reg_out+", "+ir->array_name+"($t0)");
            }
        }
        else if(ir->op == "setarr")
        {
            if(ir->isInt1 && ir->isInt2){
                code->addLine("li $t0, "+ir->l1);
                code->addLine("sll $t0, $t0, 2");
                code->addLine("li $t1, "+ir->l2);
                code->addLine("sw $t1, "+ir->array_name+"($t0)");
            }
            else if(ir->isInt1 && !ir->isInt2){
                code->addLine("li $t0, "+ir->l1);
                code->addLine("sll $t0, $t0, 2");
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                code->addLine("sw "+reg_in2+", "+ir->array_name+"($t0)");
            }
            else if(!ir->isInt1 && ir->isInt2){
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                code->addLine("sll $t0, "+reg_in1+", 2");
                code->addLine("li $t1, "+ir->l2);
                code->addLine("sw $t1, "+ir->array_name+"($t0)");
            }
            else{
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                code->addLine("sll $t0, "+reg_in1+", 2");
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                code->addLine("sw "+reg_in2+", "+ir->array_name+"($t0)");
            }
        }
        else if(ir->op == "printstr")
        {
            vector<string>::iterator ittt;
            ittt = find(code->code.begin(), code->code.end(), ".text");
            string line = "string_"+to_string(ir->lineNum)+":\t.asciiz "+ir->target;
            code->code.insert(ittt, line);
            code->addLine("li $v0, 4");
            code->addLine("la $a0, string_"+to_string(ir->lineNum));
            code->addLine("syscall"); 
        }

        else if (ir->op == "param")
        {
            if(raUpdation == false){
                code->addLine("addi $sp, $sp, -4");
                code->addLine("sw $ra, 0($sp)");       
                raUpdation = true;
            }

            code->addLine("addi $sp, $sp, -4");
            if(!ir->isInt1){
                reg_in1 = code->getReg(ir->dest, (ir->lineNum), 0);
                code->addLine("sw "+reg_in1+", 0($sp)");
            }
            else {
                code->addLine("li $t0, "+ir->l1);
                code->addLine("sw $t0, 0($sp)");
            }
        }

        else if (ir->op == "readParam")
        {
            reg_in1 = code->getReg(ir->dest, (ir->lineNum), 1);
            code->addLine("lw "+reg_in1+", " + returnOffset(curEnv, ir->dest) + "($sp)");
            // code->addLine("addi $sp, $sp, 4");
        }
        // else if (ir->op == "||")
        // {
        //         /* code */
        //     if(ir->isInt1 && ir->isInt2)
        //     {
        //         reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
        //         code->addLine("li "+reg_out+", "+ir->l1);
        //         code->addLine("ori "+reg_out+", "+reg_out+", "+ir->l2);
        //     }
        //     else if (ir->isInt1 && !ir->isInt2)
        //     {
        //         reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
        //         reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
        //         code->addLine("ori "+reg_out+", "+reg_in2+", "+ir->l1);
        //     }
        //     else if (!ir->isInt1 && ir->isInt2)
        //     {
        //         reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
        //         reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
        //         code->addLine("ori "+reg_out+", "+reg_in1+", "+ir->l2);
        //     }
        //     else
        //     {
        //         reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
        //         reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
        //         reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
        //         code->addLine("or "+reg_out+", "+reg_in1+", "+reg_in2);
        //     }
        // }  

        // else if (ir->op == "callvoid")
        // {
        //  code->addLine("addi $sp, $sp, -4");
        //  code->addLine("sw $ra, 0($sp)");
        //     code->addLine("jal "+ir->target);
        // }

        // I have not pushed #arguments (stored in ir->l1) into the stack because I found it redundant
        else if (ir->op == "call")
        {
            if(raUpdation == false){
                code->addLine("addi $sp, $sp, -4");
                code->addLine("sw $ra, 0($sp)");
            }

            cerr << "\tDebug: " << returnOffset(curEnv, ir->dest) << "\n";

            reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
            code->addLine("jal "+ir->target);
            code->addLine("lw $ra, 0($sp)");
            code->addLine("addi $sp, $sp, 4");
            code->addLine("move "+reg_out+", $v0");
            // code->

            raUpdation = false;

        }

        else if (ir->op == "retint")
        {
            if(ir->isInt1){
                code->addLine("li $v0, "+ir->l1);
            }
            else{
                reg_out = code->getReg(ir->dest, (ir->lineNum), 0);
                code->addLine("move $v0, "+reg_out);
            }

            while(1){
                code->addLine("addi $sp, $sp, " + convertNumToString(curEnv->width));
                cerr << "\tDebug: puppy " << curEnv->name << "\n";
                if(curEnv->type == "METHODTYPE"){
                    curEnv = curEnv->prevEnv;
                    break;
                }
                curEnv = curEnv->prevEnv;
            }

            code->addLine("jr $ra");
        }

        else if (ir->op == "ret")
        {
            code->addLine("jr $ra");
        }

        else if (ir->op == "ifgoto")
        {
            reg_out = code->getReg(ir->dest, (ir->lineNum), 0);
            code->addLine("bne "+reg_out+", $zero, "+ir->target);
        }
        else if (ir->op == "goto")
        {
            code->addLine("j "+ir->target);
        }
        else if (ir->op == "beginScope"){
            curEnv = ir->newScope;
            if(!(ir->isArgScope)) code->addLine("addi $sp, $sp, -" + convertNumToString(curEnv->width));
        }
        else if (ir->op == "endScope"){
            curEnv = ir->oldScope;
            code->addLine("addi $sp, $sp, " + convertNumToString(curEnv->width));
            curEnv = ir->newScope;
        }

        //Flush all variables to memory on block end, but before any jump
        if(ir->lineNum == blocks[blockNum]->endLine)
        {
            code->flushAll();
            blockNum++;
        }
        // else if (ir->op == "&&")
        // {
        //         /* code */
        //     if(ir->isInt1 && ir->isInt2)
        //     {
        //         reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
        //         code->addLine("li "+reg_out+", "+ir->l1);
        //         code->addLine("andi "+reg_out+", "+reg_out+", "+ir->l2);
        //     }
        //     else if (ir->isInt1 && !ir->isInt2)
        //     {
        //         reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
        //         reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
        //         code->addLine("andi "+reg_out+", "+reg_in2+", "+ir->l1);
        //     }
        //     else if (!ir->isInt1 && ir->isInt2)
        //     {
        //         reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
        //         reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
        //         code->addLine("andi "+reg_out+", "+reg_in1+", "+ir->l2);
        //     }
        //     else
        //     {
        //         reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
        //         reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
        //         reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
        //         code->addLine("and "+reg_out+", "+reg_in1+", "+reg_in2);
        //     }
        // }

    }

    code->printCode();

}
