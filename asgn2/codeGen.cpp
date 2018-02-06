#include "SymTable.cpp"
#include "IR.cpp"
using namespace std;

int main(int argc, char** argv){
    readFile(argv[1]);
    int len = vvs.size();
    fori(0,len){
        int siz = vvs[i].size();
        forn(j,0,siz){
            cout<<vvs[i][j]<<" ";
        }    
            cout<<"\n";
    }
    return 0;    
}
