#include "IR.h"

void readFile(char* fileName)
{
	string line;
	fstream mcode (fileName);
	vector <string> temp;

	if(mcode.is_open())
	{
		while( getline(mcode, line) )
		{
			int len, s;
			len = line.length();

			s = 0;
			while(line[s] == ' ')	s++;

			int offset = s;
			fori(offset, len){
				if(line[i] == ' ' || line[i] == ',')
				{
					temp.pb(line.substr(s, i - s));
					s = i;
					while(line[s] == ' ' || line[s] == ',')
					{
						s++;
						if(s == len)	break;
					}
                    i=s;
				}
			}
			if(line[s] != ' ' && line[s] != ',')	temp.pb(line.substr(s, len-s));

			fillTAC(temp);

			temp.clear();
		}
	}
}

void fillTAC(vector <string> instr)
{
	bool flag;
	TAC* tac = new TAC();

	stringstream (instr[0]) >> tac->lineNum;

	if(itype3.find(instr[1]) != itype3.end())	tac->opType = 3;
	else	if(itype2.find(instr[1]) != itype2.end())	tac->opType = 2;
	else	if(itype1.find(instr[1]) != itype1.end())	tac->opType = 1;
	else	if(itype0.find(instr[1]) != itype0.end())	tac->opType = 0;
	else{
		exit(1);
	}

	tac->op = instr[1];

	if(instr.size() != tac->opType + 2)
	{
		exit(1);
	}

	// Check for literal if needed
	if(tac->opType > 0)
	{
		if(instr[1] == "goto" || instr[1] == "callvoid" || instr[1] == "label")	{ tac->target = instr[2]; }
		else if (tac->op == "array")
		{
			tac->array_name = instr[2];
			cerr << tac->array_name <<endl;
			tac->array_size = stoi(instr[3]);
		}
		else
		{
			flag = symTable.insert(new Symbol(instr[2], "int"));
			tac->dest = symTable.symbols[instr[2]];
		}
	}

	switch(tac->opType){
		case 2:

			if(tac->op == "ifgoto" || tac->op == "callint")
			{
				tac->target = instr[3];
			}
			else if( tac->op != "array")
			{
				if(isIntegerLiteral(instr[3]) == true)
				{
					tac->isInt1 = true;
					tac->l1 = instr[3];
				}
				else
				{
					flag = symTable.insert(new Symbol(instr[3], "int"));
					tac->opd1 = symTable.symbols[instr[3]];
				}

			}
			break;
		case 3:
			if(isIntegerLiteral(instr[3]) == true)
			{				
				tac->isInt1 = true;
				tac->l1 = instr[3];
			}
			else if(tac->op!="getarr")
			{
				flag = symTable.insert(new Symbol(instr[3], "int"));
				tac->opd1 = symTable.symbols[instr[3]];
			}
			else
				tac->array_name = instr[3];


			if(isIntegerLiteral(instr[4]) == true)
			{				
				tac->l2 = instr[4];
				tac->isInt2 = true;
			}
			else
			{
				flag = symTable.insert(new Symbol(instr[4], "int"));
				tac->opd2 = symTable.symbols[instr[4]];
			}

			break;
		default: break;
	}

	IR.pb(tac);

}

bool isIntegerLiteral(string str){
	if(regex_match(str, regex("@?[a-zA-Z_][a-zA-Z0-9_]*")))	return false;
	return true;
}