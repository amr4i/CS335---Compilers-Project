#include "SymTable.cpp"
#include "IR.cpp"
using namespace std;

// 3 operand instructions
set<string> itype3= {"+", "-", "*", "/", "%", "&", "|", "^", "<<", ">>", "==", "<", ">", "!=", "<=", ">="};
// 2 operand instructions
set<string> itype2= {"=", "=!", "+=", "-=", "*=", "/=", "%=", "&=", "|=", "^=", "<<=", ">>=", "ifgoto", "callint"};
// 1 operand instructions
set<string> itype1= {"++", "--", "label", "print", "scan", "callvoid", "goto", "retint"};
// No operand instruction
set<string> itype0= {"ret"};

SymTable* ST = new SymTable();
vector< pair<int, int> > blocks;

int main(int argc, char** argv){
    // Reading the text file and storing it in "ir" data structure
    readFile(argv[1]);
    int len = ir.size();

    // Populating the Symbol Table "ST"
    fori(0,len){
        int siz = ir[i].size();
        /*forn(j,0,siz){
            cout<<ir[i][j]<<" ";
        }    
        cout<<"\n";*/
        
        string ins = ir[i][1];

        if(itype3.find(ins) != itype3.end()){
            if(ir[i].size()!= 5){
                cerr<<"[Error in line "<<ir[i][0]<<"] Number of tags should be 5!!\n";
                exit(1);
            }
            Symbol*s = new Symbol(ir[i][2],"int");
            ST->insert(s);
        }
        else if(itype2.find(ins) != itype2.end()){
            if(ir[i].size()!= 4){
                cerr<<"[Error in line "<<ir[i][0]<<"] Number of tags should be 4!!\n";
                exit(1);
            }
            if(ins!="ifgoto"){
                Symbol*s = new Symbol(ir[i][2],"int");
                ST->insert(s);
            }
        }
        else if(itype1.find(ins) != itype1.end()){
            if(ir[i].size()!= 3){
                cerr<<"[Error in line "<<ir[i][0]<<"] Number of tags should be 3!!\n";
                exit(1);
            }
            if(ins=="label"){    
                Symbol*s = new Symbol(ir[i][2],"void");
                ST->insert(s);
            }
        }
        else if(itype0.find(ins) != itype0.end()){
            if(ir[i].size()!= 2){
                cerr<<"[Error in line "<<ir[i][0]<<"] Number of tags should be 2!!\n";
                exit(1);
            }            
        }
        else{
                cerr<<"[Error in line "<<ir[i][0]<<"] Instruction "<<ins<<" undefined!!\n";
                exit(1);
        }
    }

    blocks = getBlocks();
    vector< pair<int, int> >::iterator it;
    for(it = blocks.begin(); it!=blocks.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
    
    return 0;    
}
