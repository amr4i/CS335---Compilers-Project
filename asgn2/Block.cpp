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
			}
			// Else : Don't know what to do for print, scan and others
			// Resolve: Make scan action to be similar to that of asignment.
			
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
					temp[IR[i]->dest->name] = mp(string("Dead"), INF); 
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
				else{ temp[IR[i]->dest->name] = mp(string("Dead"), INF); }

				if(IR[i]->isInt1 == false)
				{
					if(varStack.find(IR[i]->opd1->name) != varStack.end() )
					{
						temp[IR[i]->opd1->name] = mp(string("Live"), varStack[IR[i]->opd1->name].se);
					}
					else { temp[IR[i]->opd1->name] = mp(string("Dead"), INF); }

					varStack[IR[i]->opd1->name] = mp(string("Live"), IR[i]->lineNum);
				}
				
			}
			else
			{
				if(varStack.find(IR[i]->dest->name) != varStack.end())
				{
					temp[IR[i]->dest->name] = mp(string("Live"), varStack[IR[i]->dest->name].se);
				}
				else { temp[IR[i]->dest->name] = mp(string("Dead"), INF); }

				varStack[IR[i]->dest->name] = mp(string("Live"), IR[i]->lineNum);

				if(IR[i]->isInt1 == false)
				{
					if(varStack.find(IR[i]->opd1->name) != varStack.end())
					{
						temp[IR[i]->opd1->name] = mp(string("Live"), varStack[IR[i]->opd1->name].se);
					}
					else { temp[IR[i]->opd1->name] = mp(string("Dead"), INF); }

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
			else{ temp[IR[i]->dest->name] = mp(string("Dead"), INF); }

			if(IR[i]->isInt1 == false)
			{
				if(varStack.find(IR[i]->opd1->name) != varStack.end())
				{
					temp[IR[i]->opd1->name] = mp(string("Live"), varStack[IR[i]->opd1->name].se);
				}
				else { temp[IR[i]->opd1->name] = mp(string("Dead"), INF); }

				varStack[IR[i]->opd1->name] = mp(string("Live"), IR[i]->lineNum);

			}

			if(IR[i]->isInt2 == false)
			{
				if(varStack.find(IR[i]->opd2->name) != varStack.end())
				{
					temp[IR[i]->opd2->name] = mp(string("Live"), varStack[IR[i]->opd2->name].se);
				}
				else { temp[IR[i]->opd2->name] = mp(string("Dead"), INF); }

				varStack[IR[i]->opd2->name] = mp(string("Live"), IR[i]->lineNum);

			}
		}

		nextUseTable[i] = mp(IR[i], temp);

	}

}