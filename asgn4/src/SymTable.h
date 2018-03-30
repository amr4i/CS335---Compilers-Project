#include "config.h"
#include "Symbol.cpp"

class SymTable{
	public:
		map<string, Symbol*> symbols;

	SymTable();

	bool insert(Symbol* symbol);
	Symbol* get(string symName);
	Symbol* remove(string symName);
};
