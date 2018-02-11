#include "Block.h"

Block::Block(int s, int e)
{
	startLine = s;
	endLine = e;
}
			
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
			if(op == "++" || op == "--" || op == "printint" || op == "retint")
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
			else if(op == "scan")
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
					if(visited.find(IR[i]->dest->name) != visited.end()) { temp[IR[i]->dest->name] = mp(string("Dead"), INF); }
					else { temp[IR[i]->dest->name] = mp(string("Live"), INF); }
				}

				varStack[IR[i]->dest->name] = mp(string("Live"), IR[i]->lineNum);
				visited[IR[i]->dest->name] = true;
			}
			else 	if(op == "callint")
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
			else	if(op == "=")
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
			else
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

			if(IR[i]->isInt2 == false)
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