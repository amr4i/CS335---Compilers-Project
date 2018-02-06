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
			ir.pb(temp);
			temp.clear();
		}
	}
}
