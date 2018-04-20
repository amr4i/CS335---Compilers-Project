#include "Block.h"

Block::Block(int s, int e)
{
	startLine = s;
	endLine = e;
}
		

// 3 operand instructions
// set<string> itype3= {"+", "-", "*", "/", "%", "&", "|", "^", "<<", ">>", "==", "<", ">", "!=", "<=", ">=", "setarr", "getarr", "call", "||", "&&"};

// // 2 operand instructions
// set<string> itype2= {"=", "+=", "-=", "*=", "/=", "%=", "&=", "|=", "^=", "<<=", ">>=", "ifgoto", "array"};

// // 1 operand instructions
// set<string> itype1= {"++", "--", "label", "printint", "scan", "goto", "retint", "printstr", "param", "readParam"};

// // No operand instruction
// set<string> itype0= {"ret","exit"};


// For computng the nextUse within the block for all of the symbols.	
void Block::computeNextUse()
{
	// cerr << "Debug:\n";
	forin(endLine-1, startLine-1)
	{


		string op = IR[i]->op;
		int opType = IR[i]->opType;
		map <string, pair < string, int > > temp;

		if(opType == -1)	{
			// cerr << "\t\tOperator: " << IR[i]->op << "\n";
			continue;
		}
		else if(opType == 1)
		{
			if(op == "++" || op == "--" || (op == "printint" && IR[i]->isInt1==false) || (op == "retint" && IR[i]->isInt1 == false) || (op == "param" && IR[i]->isInt1 == false))
			{
				if(varStack.find(IR[i]->dest->name) != varStack.end())
				{
					temp.insert(mp(IR[i]->dest->name, mp(string ("Live"), varStack[IR[i]->dest->name].se) ) );
				}
				else
				{
					temp[IR[i]->dest->name] = mp(string ("Dead"), INF);
				}
				varStack[IR[i]->dest->name] = mp(string("Live"), IR[i]->lineNum);
				visited[IR[i]->dest->name] = true;

			}
			else if(op == "scan" || op == "readParam")
			{
				if(varStack.find(IR[i]->dest->name) != varStack.end())
				{
					temp[IR[i]->dest->name] = mp(string("Live"), varStack[IR[i]->dest->name].se);
					varStack.erase(IR[i]->dest->name);
				}
				else
				{
					if(visited.find(IR[i]->dest->name) != visited.end()) { temp[IR[i]->dest->name] = mp(string("Dead"), INF); }
					else { temp[IR[i]->dest->name] = mp(string("Live"), INF); }
				}
				visited[IR[i]->dest->name] = true;
			}

		}
		else if(opType == 2)
		{
			if(op == "ifgoto")
			{
				if(varStack.find(IR[i]->dest->name) != varStack.end())
				{
					temp[IR[i]->dest->name] = mp(string("Live"), varStack[IR[i]->dest->name].se);
				}
				else{ 
					Symbol* tt = IR[i]->dest;
					if(visited.find(IR[i]->dest->name) != visited.end()) { temp[IR[i]->dest->name] = mp(string("Dead"), INF); }
					else { temp[IR[i]->dest->name] = mp(string("Live"), INF); }
				}

				varStack[IR[i]->dest->name] = mp(string("Live"), IR[i]->lineNum);
				visited[IR[i]->dest->name] = true;
			}
			// else if(op == "call")
			// {
			// 	if(varStack.find(IR[i]->dest->name) != varStack.end())
			// 	{
			// 		temp[IR[i]->dest->name] = mp(string("Live"), varStack[IR[i]->dest->name].se);
			// 		varStack.erase(IR[i]->dest->name);
			// 	}
			// 	else
			// 	{
			// 		if(visited.find(IR[i]->dest->name) != visited.end()) { temp[IR[i]->dest->name] = mp(string("Dead"), INF); }
			// 		else { temp[IR[i]->dest->name] = mp(string("Live"), INF); }
			// 	}
			// 	visited[IR[i]->dest->name] = true;

			// }
			else if(op == "=")
			{
				if(varStack.find(IR[i]->dest->name) != varStack.end())
				{
					temp[IR[i]->dest->name] = mp(string("Live"), varStack[IR[i]->dest->name].se);
					varStack.erase(IR[i]->dest->name);
				}
				else
				{ 
					if(visited.find(IR[i]->dest->name) != visited.end()) { temp[IR[i]->dest->name] = mp(string("Dead"), INF); }
					else { temp[IR[i]->dest->name] = mp(string("Live"), INF); } 
				}

				visited[IR[i]->dest->name] = true;

				if(IR[i]->isInt1 == false)
				{
					if(varStack.find(IR[i]->opd1->name) != varStack.end() )
					{
						temp[IR[i]->opd1->name] = mp(string("Live"), varStack[IR[i]->opd1->name].se);
					}
					else
					{ 
						if(visited.find(IR[i]->opd1->name) != visited.end()) { temp[IR[i]->opd1->name] = mp(string("Dead"), INF); }
						else { temp[IR[i]->opd1->name] = mp(string("Live"), INF); }
					}

					varStack[IR[i]->opd1->name] = mp(string("Live"), IR[i]->lineNum);
					visited[IR[i]->opd1->name] = true;
				}
				
			}
			else if(op != "array" && op != "call")
			{
				if(varStack.find(IR[i]->dest->name) != varStack.end())
				{
					temp[IR[i]->dest->name] = mp(string("Live"), varStack[IR[i]->dest->name].se);
				}
				else
				{ 
					if(visited.find(IR[i]->dest->name) != visited.end()) { temp[IR[i]->dest->name] = mp(string("Dead"), INF); }
					else { temp[IR[i]->dest->name] = mp(string("Live"), INF); }
				}

				varStack[IR[i]->dest->name] = mp(string("Live"), IR[i]->lineNum);
				visited[IR[i]->dest->name] = true;

				if(IR[i]->isInt1 == false)
				{
					if(varStack.find(IR[i]->opd1->name) != varStack.end())
					{
						temp[IR[i]->opd1->name] = mp(string("Live"), varStack[IR[i]->opd1->name].se);
					}
					else
					{ 
						if(visited.find(IR[i]->opd1->name) != visited.end()) { temp[IR[i]->opd1->name] = mp(string("Dead"), INF); }
						else { temp[IR[i]->opd1->name] = mp(string("Live"), INF); }
					}

					varStack[IR[i]->opd1->name] = mp(string("Live"), IR[i]->lineNum);
					visited[IR[i]->opd1->name] = true;
				}

			}
		}
		else
		{
			if(op!="setarr" && op != "call"){
				if(varStack.find(IR[i]->dest->name) != varStack.end())
				{
					temp[IR[i]->dest->name] = mp(string("Live"), varStack[IR[i]->dest->name].se);
					varStack.erase(IR[i]->dest->name);
				}
				else
				{ 
					if(visited.find(IR[i]->dest->name) != visited.end()) { temp[IR[i]->dest->name] = mp(string("Dead"), INF); }
					else { temp[IR[i]->dest->name] = mp(string("Live"), INF); }
				}
				visited[IR[i]->dest->name] = true;
			}

			if(IR[i]->isInt1 == false && op!="getarr" && op != "call")
			{
				if(varStack.find(IR[i]->opd1->name) != varStack.end())
				{
					temp[IR[i]->opd1->name] = mp(string("Live"), varStack[IR[i]->opd1->name].se);
				}
				else
				{ 
					if(visited.find(IR[i]->opd1->name) != visited.end()) { temp[IR[i]->opd1->name] = mp(string("Dead"), INF); }
					else { temp[IR[i]->opd1->name] = mp(string("Live"), INF); }
				}

				varStack[IR[i]->opd1->name] = mp(string("Live"), IR[i]->lineNum);
				visited[IR[i]->opd1->name] = true;

			}

			if(IR[i]->isInt2 == false && op != "call")
			{
				if(varStack.find(IR[i]->opd2->name) != varStack.end())
				{
					temp[IR[i]->opd2->name] = mp(string("Live"), varStack[IR[i]->opd2->name].se);
				}
				else
				{ 
					if(visited.find(IR[i]->opd2->name) != visited.end()) { temp[IR[i]->opd2->name] = mp(string("Dead"), INF); }
					else { temp[IR[i]->opd2->name] = mp(string("Live"), INF); }
				}

				varStack[IR[i]->opd2->name] = mp(string("Live"), IR[i]->lineNum);
				visited[IR[i]->opd2->name] = true;
			}
		}


		nextUseTable[i] = mp(IR[i], temp);

	}
}
