#include "config.h"
#include "Symbol.cpp"

class Env{
private:
	// if it is a method
	string returnType;
	int argNum;
	vector <string> argTypeList;

	// if it is a class
	string _class;
	string _parentClass;
	map <string, Symbol*> varList;
	map <string, Symbol*> methodList;

	map <string, Symbol*> addTable;

	int width;
	int offset;
	int maxWidth;	

public:
	string name;
	Env *prevEnv;
	string type;
	vector <Env*> children;

	Env();
	Env(Env *prev_env);

	string getMethodType();
	string genTemp(string varType, string genericType, int _width);
	void addVar(string varName, string varType, string genericType, int _width);
	int getWidth(string varType, string genericType, int _width);
	Symbol* getVar(string varName);
	Symbol* getVarInClass(string varName, string className);
	Symbol* getVarEnv(string varName);
	vector <string> setArgTypeList(vector <string> args);
	Env* findClass(string className);
	Env* getBaseEnvClass();
	Env* getMethod(string methodName);
	Env* getMethodFromClass(string methodName, string className);
	void printTableEnv();
};