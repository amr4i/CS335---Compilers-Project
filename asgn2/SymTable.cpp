#include "SymTable.h"

SymTable::SymTable(){
	// symbols = NULL;
}

bool SymTable::insert(Symbol* symbol){
	if(symbols.find(symbol->name) != symbols.end()){
		symbols.insert({symbol->name, symbol});
		return true;
	} else{
		return false;
	}
}


Symbol* SymTable::get(string symName){
	if(symbols.find(symName) != symbols.end()){
		Symbol* sym = symbols[symName];
		return sym;
	}
	else return NULL;
}


Symbol* SymTable::remove(string symName){
	if(symbols.find(symName) != symbols.end()){
		Symbol* sym = symbols[symName];
		symbols.erase(symbols.find(symName));
		return sym;
	}
	return NULL;
}