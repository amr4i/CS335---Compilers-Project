#include "mipsCode.cpp"

using namespace std;

int main(int argc, char** argv){

    FILE *file;
    if (argc==2 &&(file=fopen(argv[1],"r")))
        yyin = file;
    else if (argc!=2){
        cerr<< "Exactly one file has to be passed as argument!\n";
        exit(1);
    }
    else{
        cerr<< "Please specify correct file name\n";
        exit(1);
    }

    yydebug = 0;
    yyparse();
    
    fclose(file);

    int siz, blockSiz, blockNum;
    map <string, Symbol*> ::iterator itt;

    // Reading the text file and storing it in "ir" data structure
    // readFile(argv[1]);

    // Populating blocks
    getBlocks();

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
    for(itt = ST.symbols.begin() ; itt != ST.symbols.end() ; itt++)
    {
        if( (*itt).se->type == "int" )
        {
            code->addLine((*itt).fi + ":\t.word 0");
        }
    }

    string reg_out, reg_in1, reg_in2;

    

    code->addLine(".text");
    code->addLine("main:");

    /* 
    -> Arrays are to be implemented
    -> String printing is to be allowed
    */
    blockNum = 0;
    siz = IR.size();
    fori(0,siz){
        TAC* ir = IR[i];
        if (ir->op == "exit")
        {
            code->addLine("li $v0, 10");
            code->addLine("syscall");
        }   
        else if (ir->op == "=")
        {
            /* code */
            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("li "+reg_out+", "+ir->l1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("move "+reg_out+", "+reg_in1);
            }
            
        }
        else if (ir->op == "+=")
        {
            /* code */

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("addi "+reg_out+", "+reg_out+", "+ir->l1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("add "+reg_out+", "+reg_out+", "+reg_in1);
            }
            
        }
        else if (ir->op == "-=")
        {
            /* code */
            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("addi "+reg_out+", "+reg_out+", -"+ir->l1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("sub "+reg_out+", "+reg_out+", "+reg_in1);
            }
            
        }
        else if (ir->op == "*=")
        {
            /* code */
            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l1);
                code->addLine("mult $t0, "+reg_out);
                code->addLine("mflo "+reg_out);
            }
            else{
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
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
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l1);
                code->addLine("div "+reg_out+", $t0");
                code->addLine("mflo "+reg_out);
            }
            else{
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
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
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l1);
                code->addLine("div "+reg_out+", $t0");
                code->addLine("mfhi "+reg_out);
            }
            else{
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
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
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("sll "+reg_out+", "+reg_out+", "+ir->l1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("sllv "+reg_out+", "+reg_out+", "+reg_in1);
            }
            
        }
        else if (ir->op == ">>=")
        {
            /* code */

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("srl "+reg_out+", "+reg_out+", "+ir->l1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("srlv "+reg_out+", "+reg_out+", "+reg_in1);
            }
            
        }
        else if (ir->op == "&=")
        {
            /* code */

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("andi "+reg_out+", "+reg_out+", "+ir->l1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("and "+reg_out+", "+reg_out+", "+reg_in1);
            }
            
        }
        else if (ir->op == "|=")
        {
            /* code */

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("ori "+reg_out+", "+reg_out+", "+ir->l1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("or "+reg_out+", "+reg_out+", "+reg_in1);
            }
            
        }
        else if (ir->op == "^=")
        {
            /* code */

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("xori "+reg_out+", "+reg_out+", "+ir->l1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("xor "+reg_out+", "+reg_out+", "+reg_in1);
            }
            
        }
        else if (ir->op == "+")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("addi "+reg_out+", "+reg_out+", "+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("addi "+reg_out+", "+reg_in2+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("addi "+reg_out+", "+reg_in1+", "+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("add "+reg_out+", "+reg_in1+", "+reg_in2);
            }
        }
        else if (ir->op == "-")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("addi "+reg_out+", "+reg_out+", -"+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("sub "+reg_out+", $zero, "+reg_in2);
                code->addLine("addi "+reg_out+", "+reg_out+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("addi "+reg_out+", "+reg_in1+", -"+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("sub "+reg_out+", "+reg_in1+", "+reg_in2);
            }
        }
        else if (ir->op == "*")
        {
            /* code */
            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l1);
                code->addLine("li "+reg_out+", "+ir->l2);
                code->addLine("mult $t0, "+reg_out);
                code->addLine("mflo "+reg_out);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l1);
                code->addLine("mult $t0, "+reg_in2);
                code->addLine("mflo "+reg_out);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l2);
                code->addLine("mult "+reg_in1+", $t0");
                code->addLine("mflo "+reg_out);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("mult "+reg_in1+", "+reg_in2);
                code->addLine("mflo "+reg_out);
            }
        }
        else if (ir->op == "/")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l1);
                code->addLine("li "+reg_out+", "+ir->l2);
                code->addLine("div $t0, "+reg_out);
                code->addLine("mflo "+reg_out);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l1);
                code->addLine("div $t0, "+reg_in2);
                code->addLine("mflo "+reg_out);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l2);
                code->addLine("div "+reg_in1+", $t0");
                code->addLine("mflo "+reg_out);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("div "+reg_in1+", "+reg_in2);
                code->addLine("mflo "+reg_out);
            }
        }
        else if (ir->op == "%")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l1);
                code->addLine("li "+reg_out+", "+ir->l2);
                code->addLine("div $t0, "+reg_out);
                code->addLine("mfhi "+reg_out);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l1);
                code->addLine("div $t0, "+reg_in2);
                code->addLine("mfhi "+reg_out);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l2);
                code->addLine("div "+reg_in1+", $t0");
                code->addLine("mfhi "+reg_out);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("div "+reg_in1+", "+reg_in2);
                code->addLine("mfhi "+reg_out);
            }
        }
        else if (ir->op == "&")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("andi "+reg_out+", "+reg_out+", "+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("andi "+reg_out+", "+reg_in2+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("andi "+reg_out+", "+reg_in1+", "+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("and "+reg_out+", "+reg_in1+", "+reg_in2);
            }
        }
        else if (ir->op == "|")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("ori "+reg_out+", "+reg_out+", "+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("ori "+reg_out+", "+reg_in2+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("ori "+reg_out+", "+reg_in1+", "+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("or "+reg_out+", "+reg_in1+", "+reg_in2);
            }
        }
        else if (ir->op == "^")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("xori "+reg_out+", "+reg_out+", "+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("xori "+reg_out+", "+reg_in2+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("xori "+reg_out+", "+reg_in1+", "+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("xor "+reg_out+", "+reg_in1+", "+reg_in2);
            }
        }
        else if (ir->op == "<<")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("sll "+reg_out+", "+reg_out+", "+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("sll "+reg_out+", "+reg_in2+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("sll "+reg_out+", "+reg_in1+", "+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("sllv "+reg_out+", "+reg_in1+", "+reg_in2);
            }
        }
        else if (ir->op == ">>")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("srl "+reg_out+", "+reg_out+", "+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("srl "+reg_out+", "+reg_in2+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("srl "+reg_out+", "+reg_in1+", "+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("srlv "+reg_out+", "+reg_in1+", "+reg_in2);
            }
        }
        else if (ir->op == "<")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("slti "+reg_out+", "+reg_out+", "+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("slti "+reg_out+", "+reg_in2+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("slti "+reg_out+", "+reg_in1+", "+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("slt "+reg_out+", "+reg_in1+", "+reg_in2);
            }
        }
        else if (ir->op == ">")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l2);
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("sgt "+reg_out+", "+reg_out+", $t0");
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                code->addLine("li $t0, "+ir->l1);
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("sgt "+reg_out+", "+reg_in2+", $t0");
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                code->addLine("li $t0, "+ir->l2);
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("sgt "+reg_out+", "+reg_in1+", $t0");
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("sgt "+reg_out+", "+reg_in1+", "+reg_in2);
            }
        }
        else if (ir->op == "<=")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l2);
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("sle "+reg_out+", "+reg_out+", $t0");
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                code->addLine("li $t0, "+ir->l1);
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("sle "+reg_out+", "+reg_in2+", $t0");
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                code->addLine("li $t0, "+ir->l2);
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("sle "+reg_out+", "+reg_in1+", $t0");
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("sle "+reg_out+", "+reg_in1+", "+reg_in2);
            }
        }
        else if (ir->op == ">=")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l2);
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("sge "+reg_out+", "+reg_out+", $t0");
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                code->addLine("li $t0, "+ir->l1);
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("sge "+reg_out+", "+reg_in2+", $t0");
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                code->addLine("li $t0, "+ir->l2);
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("sge "+reg_out+", "+reg_in1+", $t0");
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("sge "+reg_out+", "+reg_in1+", "+reg_in2);
            }
        }
        else if (ir->op == "!=")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l2);
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("sne "+reg_out+", "+reg_out+", $t0");
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                code->addLine("li $t0, "+ir->l1);
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("sne "+reg_out+", "+reg_in2+", $t0");
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                code->addLine("li $t0, "+ir->l2);
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("sne "+reg_out+", "+reg_in1+", $t0");
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("sne "+reg_out+", "+reg_in1+", "+reg_in2);
            }
        }
        else if (ir->op == "==")
        {
            /* code */

            if(ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l2);
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("seq "+reg_out+", "+reg_out+", $t0");
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                code->addLine("li $t0, "+ir->l1);
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("seq "+reg_out+", "+reg_in2+", $t0");
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                code->addLine("li $t0, "+ir->l2);
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("seq "+reg_out+", "+reg_in1+", $t0");
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("seq "+reg_out+", "+reg_in1+", "+reg_in2);
            }
        }
        else if (ir->op == "++")
        {
            /* code */
            reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
            code->addLine("addi "+reg_out+", "+reg_out+", 1");
            code->addLine("sw "+reg_out+", "+ir->dest->name);
        }
        else if (ir->op == "--")
        {
            /* code */
            reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
            code->addLine("addi "+reg_out+", "+reg_out+", -1");
            code->addLine("sw "+reg_out+", "+ir->dest->name);
        }
        else if (ir->op == "printint")
        {
            // printing integer
            reg_out = code->getReg(ir->dest->name, (ir->lineNum), 0);
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
            code->addLine("sw $v0, " + ir->dest->name);

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
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
                code->addLine("li $t0, "+ir->l2);
                code->addLine("sll $t0, $t0, 2");
                code->addLine("lw "+reg_out+", "+ir->array_name+"($t0)");
            }
            else{
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
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
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
                code->addLine("sw "+reg_in2+", "+ir->array_name+"($t0)");
            }
            else if(!ir->isInt1 && ir->isInt2){
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                code->addLine("sll $t0, "+reg_in1+", 2");
                code->addLine("li $t1, "+ir->l2);
                code->addLine("sw $t1, "+ir->array_name+"($t0)");
            }
            else{
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum), 0);
                code->addLine("sll $t0, "+reg_in1+", 2");
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum), 0);
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

        //Flush all variables to memory on block end, but before any jump
        if(ir->lineNum == blocks[blockNum]->endLine)
        {
            code->flushAll();
            blockNum++;
        }
        

        if (ir->op == "ifgoto")
        {
            reg_out = code->getReg(ir->dest->name, (ir->lineNum), 0);
            code->addLine("bne "+reg_out+", $zero, "+ir->target);
        }
        else if (ir->op == "goto")
        {
            code->addLine("j "+ir->target);
        }
        else if (ir->op == "callvoid")
        {
        	code->addLine("addi $sp, $sp, -4");
        	code->addLine("sw $ra, 4($sp)");
            code->addLine("jal "+ir->target);
        }
        else if (ir->op == "callint")
        {
        	code->addLine("addi $sp, $sp, -4");
        	code->addLine("sw $ra, 4($sp)");
            reg_out = code->getReg(ir->dest->name, (ir->lineNum), 1);
            code->addLine("jal "+ir->target);
            code->addLine("move "+reg_out+", $v0");
        }
        else if (ir->op == "retint")
        {
        	code->addLine("lw $ra, 4($sp)");
        	code->addLine("addi $sp, $sp, 4");
            reg_out = code->getReg(ir->dest->name, (ir->lineNum), 0);
            code->addLine("move $v0, "+reg_out);
            code->addLine("jr $ra");
        }
        else if (ir->op == "ret")
        {
        	code->addLine("lw $ra, 4($sp)");
        	code->addLine("addi $sp, $sp, 4");
            code->addLine("jr $ra");
        }

    }

    code->printCode();

    return 0;    
}
