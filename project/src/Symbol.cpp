#include "Symbol.h"

Symbol::Symbol(string symName, string Type, int Width = 0, string BaseType = "simple", int Offset = 0)
{
	string newName="_"+symName;
	name = newName;
	type = Type;
	isKeyword = false;
	isTemp = false;
	width  = Width; 
	offset = Offset;
	baseType = BaseType;
}