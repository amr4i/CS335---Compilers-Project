#include "SymTable.h"

SymTable::SymTable(){
	// symbols = NULL;
}

/*
	To insert a symbol into the symbol table.
	If symbol table already contains that symbol, then 
	it is not inserted again. The insertion is skipped, 
	and the function exits with a false return value.
*/
bool SymTable::insert(Symbol* symbol){
	if(symbols.find(symbol->name) == symbols.end()){
		symbols.insert(mp(symbol->name, symbol));
		return true;
	} else{
		return false;
	}
}

/*
	to get a pointer to the symbol with the provided name.
*/
Symbol* SymTable::get(string symName){
	if(symbols.find(symName) != symbols.end()){
		Symbol* sym = symbols[symName];
		return sym;
	}
	else return NULL;
}

/*
	To remove a symbol from the symbol table. 
*/
Symbol* SymTable::remove(string symName){
	if(symbols.find(symName) != symbols.end()){
		Symbol* sym = symbols[symName];
		symbols.erase(symbols.find(symName));
		return sym;
	}
	return NULL;
}