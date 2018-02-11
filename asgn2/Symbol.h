#include "config.h"

class Symbol{
public:
	string name;
	bool isKeyword;
	string type;
	int width;
	int array_size;
	map<string, string> attr;

	Symbol(string name,string Type);

};
