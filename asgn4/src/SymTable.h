#include "config.h"
#include "Env.cpp"

class SymTable{
	public:
		Env* baseEnv;
		Env* curEnv;
		
	SymTable();

	bool insert(Symbol* symbol);
	Symbol* get(string symName);
	Symbol* remove(string symName);
};
