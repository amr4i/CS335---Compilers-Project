#include "Symbol.h"

Symbol::Symbol(string symName, string Type)
{
	string newName="_"+symName;
	name = newName;
	type = Type;
	isKeyword = false;
	width  = 0;  // Type Specific
	// attr = NULL;
}