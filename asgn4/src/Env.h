#include "config.h"
#include "Symbol.cpp"

static int labelCounter = 0;
static int tempCounter = 0;

class Env{
public:
	// if it is a method
	string returnType;
	int argNum;
	vector <string> argTypeList;

	// if it is a class
	string _class;
	string _parentClass;
	map <string, Symbol*> varList;
	map <string, Symbol*> methodList;
	map <string, Symbol*> extras;
	map <string, Symbol*> addTable;

	int width;
	int maxWidth;	

	string name;
	Env *prevEnv;
	string type;
	vector <Env*> children;
	int offset;

	Env(string _name, string _type, Env *prev_env, string _return_type, string Class, string ParentClass);

	string getMethodType();
	string genTemp(string varType, string genericType, int _width);
	Symbol* addVar(string varName, string varType, string genericType, int _width);
	int getWidth(string varType, string genericType, int _width);
	Symbol* getVar(string varName);
	Symbol* getVarInClass(string varName, string className);
	Symbol* getVarEnv(string varName);
	vector <string> setArgTypeList(vector <string> args);
	Env* findClass(string className);
	Env* getBaseEnvClass();
	Env* getMethod(string methodName);
	Env* getMethodFromClass(string methodName, string className);
	void printTableEnv(Env* env);
};