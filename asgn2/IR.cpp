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

	stringstream (instr[0]) >> tac.lineNum;

	if(itype3.find(instr[1]) != itype3.end())	tac.opType = 3;
	else	if(itype2.find(instr[1]) != itype2.end())	tac.opType = 2;
	else	if(itype1.find(instr[1]) != itype1.end())	tac.opType = 1;
	else	if(itype0.find(instr[1]) != itype0.end())	tac.opType = 0;
	else{
		cerr << "Invalid operator\n";
		exit(1);
	}

	tac.op = instr[1];

	if(instr.size() != tac.opType + 2)
	{
		cerr << "Wrong three address code at line number : " << tac.lineNum << "\n";
		exit(1);
	}

	// Check for literal if needed
	if(tac.opType > 0)
	{
		flag = symbTable.insert(instr[2]);
		tac.dest = symbols[instr[2]];
	}

	switch(tac.opType){
		case 2:

			if(tac.op == "ifgoto")
			{
				stringstream (instr[3]) >> tac.target;
			}
			else
			{
				if(isIntegerLiteral(instr[3]) == true)
				{
					stringstream (instr[3]) >> tac.l1;
					tac.isInt1 = true;
				}
				else
				{
					flag = symTable.insert(instr[3]);
					tac.opd1 = symbols[instr[3]];
				}

			}
			break;
		case 3:

			if(isIntegerLiteral(instr[3]) == true)
			{
				stringstream (instr[3]) >> tac.l1;
				tac.isInt1 = true;
			}
			else
			{
				flag = symTable.insert(instr[3]);
				tac.opd1 = symbols[instr[3]];
			}


			if(isIntegerLiteral(instr[4]) == true)
			{
				stringstream (instr[4]) >> tac.l2;
				tac.isInt2 = true;
			}
			else
			{
				flag = symTable.insert(instr[4]);
				tac.opd2 = symbols[instr[4]];
			}

			break;
	}

	IR.pb(tac);

}

bool isIntegerLiteral(string str){
	if(regex_match(str, regex("@?[a-zA-Z_][a-zA-Z0-9_]*")))	return false;
	return true;
}