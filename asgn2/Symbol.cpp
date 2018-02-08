#include "Symbol.h"

Symbol::Symbol(string symName, string Type)
{
	name = symName;
	type = Type;
	isKeyword = false;
	width  = 0;  // Type Specific
	// attr = NULL;
}