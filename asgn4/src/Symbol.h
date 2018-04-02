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

	Symbol(string symName, string Type, int Width, string BaseType, int Offset);

};
