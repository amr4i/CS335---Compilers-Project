#include "getBlocks.cpp"

using namespace std;

SymTable* ST = new SymTable();

int main(int argc, char** argv){

    // Reading the text file and storing it in "ir" data structure
    readFile(argv[1]);

    getBlocks();

    vector < pair<int, int> >::iterator it;

    nextUseTable.resize(IR.size()+1);

    int siz = blocks.size();
    fori(0, siz)
    {
        // (*it)->computeNextUse();
        cout<<blocks[i]->startLine<<" "<<blocks[i]->endLine<<"\n";
    }



    // populateNextUse();

    return 0;    
}

// void populateNextUse()
// {
//     vector< pair<int, int> >::iterator it;

//     nextUseTable.resize(ir.size()+1);

//     for(it = blocks.begin(); it!=blocks.end(); it++)
//     {
//         cout << (*it).first << " " << (*it).second << "\n";
//         computeNextUse( it->first, it->second );
//     }
    
// }