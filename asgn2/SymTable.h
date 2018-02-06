#include "Symbol.cpp"
#include <iostream>

#include <string>
#include <vector> 
using namespace std;

class SymTable{
	public:
		map<string, Symbol*> symbols;

	SymTable();

	bool insert(Symbol* symbol);
	Symbol* get(string symName);
	Symbol* remove(string symName);
};
