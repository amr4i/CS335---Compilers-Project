#include "config.h"
#include "Env.cpp"

class SymTable{
public:
	Env* baseEnv;
	Env* curEnv;

	SymTable();

	Env* GetMainClass();
	Symbol* AddVar(string varName, string varType, string genericType, int _width);
	string GetMethodType();
	Symbol* GetVar(string varName);
	Symbol* GetVarEnv(string varName);
	Symbol* GetVarInClass(string varName, string className);
	string GenTemp(string varType);
	Env* BeginScope(string scopeName, string scopeType, string returnType, string Class, string Parent_Class);
	string GetEnvName();
	string GetPrevEnvName();
	Env* GetMethod(string methodName);
	Env* GetMethodInClass(string methodName, string className);
	Env* FindClass(string className);
	Env* EndScope();
	vector <string> SetArgTypeList(vector <string> args);
	void PrintTable(Env* env);

	// bool insert(Symbol* symbol);
	// Symbol* get(string symName);
	// Symbol* remove(string symName);
};
