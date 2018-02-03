#include "Env.h"

Env::Env(){
	symbolTable = new SymTable();
	prevEnv = NULL;
}


Env::Env(Env *prev_env){
	symbolTable = new SymTable();
	prevEnv = prev_env;
}


bool Env::insert(Symbol* symbol){
	return symbolTable->insert(symbol);
}


Symbol* Env::get(string symName){
	Symbol *sym;
	sym = symbolTable->get(symName);
	if(	sym != NULL){
		return sym;
	}
	else if(prevEnv != NULL){
		return prevEnv->get(symName);
	}
	return NULL;
}