#include "config.h"

class Symbol{
public:
	string name;
	bool isKeyword;
	string type;
	int width;
	map<string, string> attr;

	Symbol(string name,string Type);

};
