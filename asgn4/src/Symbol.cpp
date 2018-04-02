#include "Symbol.h"

Symbol::Symbol(string symName, string Type, int Width = 0, string BaseType = "simple", int Offset = 0)
{
	string newName="_"+symName;
	name = newName;
	type = Type;
	isKeyword = false;
	width  = Width;  // Type Specific
	offset = Offset;
	baseType = BaseType;
	// attr = NULL;
}