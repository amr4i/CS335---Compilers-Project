#include "Block.h"

void Block::computeNextUse()
{
	forin(endLine-1, startLine-1)
	{
		string op = IR[i]->op;
		int opType = IR[i]->opType;
		map <string, pair < string, int > > temp;

		// cout<<op<<"\n";

		if(opType == 0)	continue;
		else	if(opType == 1)
		{
			if(op == "++" || op == "--")
			{
				if(varStack.find(IR[i]->dest->name) != varStack.end())
				{
					temp.insert(mp(IR[i]->dest->name, mp(string ("Live"), varStack[IR[i]->dest->name].se) ) );
				}
				else
				{
					temp[IR[i]->dest->name] = mp(string ("Dead"), -1);
				}
				varStack[IR[i]->dest->name] = mp(string("Live"), IR[i]->lineNum);
			}
			// Else : Don't know what to do for print, scan and others
		}
		else	if(opType == 2)
		{
			if(op == "ifgoto")
			{
				if(varStack.find(IR[i]->dest->name) != varStack.end())
				{
					temp[IR[i]->dest->name] = mp(string("Live"), varStack[IR[i]->dest->name].se);
				}
				else{ 
					Symbol* tt = IR[i]->dest;
					temp[IR[i]->dest->name] = mp(string("Dead"), -1); 
				}

				varStack[IR[i]->dest->name] = mp(string("Live"), IR[i]->lineNum);
			}
			else 	if(op == "callint")
			{
				// TODO
			}
			else	if(op == "=")
			{
				if(varStack.find(IR[i]->dest->name) != varStack.end())
				{
					temp[IR[i]->dest->name] = mp(string("Live"), varStack[IR[i]->dest->name].se);
					varStack.erase(IR[i]->dest->name);
				}
				else{ temp[IR[i]->dest->name] = mp(string("Dead"), -1); }

				if(IR[i]->isInt1 == false)
				{
					if(varStack.find(IR[i]->opd1->name) != varStack.end() )
					{
						temp[IR[i]->opd1->name] = mp(string("Live"), varStack[IR[i]->opd1->name].se);
					}
					else { temp[IR[i]->opd1->name] = mp(string("Dead"), -1); }

					varStack[IR[i]->opd1->name] = mp(string("Live"), IR[i]->lineNum);
				}
				
			}
			else
			{
				if(varStack.find(IR[i]->dest->name) != varStack.end())
				{
					temp[IR[i]->dest->name] = mp(string("Live"), varStack[IR[i]->dest->name].se);
				}
				else { temp[IR[i]->dest->name] = mp(string("Dead"), -1); }

				varStack[IR[i]->dest->name] = mp(string("Live"), IR[i]->lineNum);

				if(IR[i]->isInt1 == false)
				{
					if(varStack.find(IR[i]->opd1->name) != varStack.end())
					{
						temp[IR[i]->opd1->name] = mp(string("Live"), varStack[IR[i]->opd1->name].se);
					}
					else { temp[IR[i]->opd1->name] = mp(string("Dead"), -1); }

					varStack[IR[i]->opd1->name] = mp(string("Live"), IR[i]->lineNum);

				}

			}
		}
		else
		{
			if(varStack.find(IR[i]->dest->name) != varStack.end())
			{
				temp[IR[i]->dest->name] = mp(string("Live"), varStack[IR[i]->dest->name].se);
				varStack.erase(IR[i]->dest->name);
			}
			else{ temp[IR[i]->dest->name] = mp(string("Dead"), -1); }

			if(IR[i]->isInt1 == false)
			{
				if(varStack.find(IR[i]->opd1->name) != varStack.end())
				{
					temp[IR[i]->opd1->name] = mp(string("Live"), varStack[IR[i]->opd1->name].se);
				}
				else { temp[IR[i]->opd1->name] = mp(string("Dead"), -1); }

				varStack[IR[i]->opd1->name] = mp(string("Live"), IR[i]->lineNum);

			}

			if(IR[i]->isInt2 == false)
			{
				if(varStack.find(IR[i]->opd2->name) != varStack.end())
				{
					temp[IR[i]->opd2->name] = mp(string("Live"), varStack[IR[i]->opd2->name].se);
				}
				else { temp[IR[i]->opd2->name] = mp(string("Dead"), -1); }

				varStack[IR[i]->opd2->name] = mp(string("Live"), IR[i]->lineNum);

			}
		}

		nextUseTable[i] = mp(IR[i], temp);

	}

}


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
