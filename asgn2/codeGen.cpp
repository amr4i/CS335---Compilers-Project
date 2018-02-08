#include "Block.cpp"

using namespace std;

SymTable* ST = new SymTable();

int main(int argc, char** argv){

    // Reading the text file and storing it in "ir" data structure
    readFile(argv[1]);

    blocks = getBlocks();

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

// void computeNextUse(int l, int r)
// {
//     map < string, pair< string, int > > bs;
//     int ln;

//     forin(r-1, l-1)
//     {
//         string op = ir[i][1];
//         stringstream(ir[i][0]) >> ln;

//         if(itype3.find(op) != itype3.end())
//         {   
//             if(bs.find(ir[i][2]) == bs.end())
//             {
//                 bs[ir[i][2]] = pair <string, int> (string("Live"), -1);
//             }
//             else { bs[ir[i][2]].first = "Live"; }

//             bs[ir[i][3]] = pair <string, int> (string("Dead"), ln);
//             bs[ir[i][4]] = pair <string, int> (string("Dead"), ln);

//         } else if(itype2.find(op) != itype2.end())
//         {
//             if(op == "=")
//             {
//                 if(bs.find(ir[i][2]) == bs.end())
//                 {
//                     bs[ir[i][2]] = pair <string, int> (string("Live"), -1);
//                 }
//                 else { bs[ir[i][2]].first = "Live"; }                
//                 bs[ir[i][3]] = pair <string, int> (string("Dead"), ln);
//             }
//             else
//             {
//                 if(op == "callint" || op == "ifgoto")
//                 {
//                     // Something here
//                 }
//                 else
//                 {
//                     bs
//                 }
//             }

//         } else if(itype1.find(op) != itype1.end())
//         {

//         }
//     }
// }
