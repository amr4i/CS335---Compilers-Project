#include "getBlocks.cpp"

using namespace std;

SymTable* ST = new SymTable();

int main(int argc, char** argv){

    int siz;

    // Reading the text file and storing it in "ir" data structure
    readFile(argv[1]);

    // Populating blocks
    getBlocks();

    nextUseTable.resize(IR.size()+1);

    siz = blocks.size();

    fori(0, siz)
    {
        blocks[i]->computeNextUse();
    }

    siz = IR.size();
    fori(0, siz)
    {
        // cout<<IR[i]->opType<<" "<<IR[i]->op<<"\n";
        if(IR[i]->opType == 0 || IR[i]->op == "callvoid")  continue;
        // cout<<nextUseTable[i].fi->lineNum<<" :\n";
        for(map<string, pair<string, int> >::iterator it = nextUseTable[i].se.begin() ; it != nextUseTable[i].se.end() ; it++ )
        {
            cout<<"\t"<<((*it).fi)<<" -> "<<((*it).se.fi)<<" , "<<((*it).se.se)<<"\n";
        }
    }

    return 0;    
}