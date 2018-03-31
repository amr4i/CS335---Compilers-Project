#include "config.h"
#include "Symbol.cpp"

class Env{
private:
	// if it is a method
	string type;
	string returnType;
	int argNum;
	vector <string> argTypeList;
	string name;

	// if it is a class
	string _class;
	string _parentClass;
	vector <string> varList;
	vector <string> methodList;

	vector <Env*> children;
	Env *prevEnv;
	map <string, Symbol*> table;
	int width;
	int offset;
	int maxWidth;	

public:


	Env();
	Env(Env *prev_env);

	bool insert(Symbol* symbol);
	Symbol* get(string symName);
};