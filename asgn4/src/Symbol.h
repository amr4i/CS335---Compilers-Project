#include "config.h"

class Symbol{
public:
	string name;
	string baseType;
	string type;
	bool isKeyword;
	int width;
	int offset;
	map<string, string> attr;

	Symbol(string name,string Type, int width);

};
