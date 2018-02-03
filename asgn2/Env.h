#include "SymTable.cpp"

class Env{
public:
	
	SymTable *symbolTable;
	Env *prevEnv;

	Env();
	Env(Env *prev_env);

	bool insert(Symbol* symbol);
	Symbol* get(string symName);
};