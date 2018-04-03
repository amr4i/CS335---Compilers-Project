#include "SymTable.h"


SymTable::SymTable(){
	curEnv = new Env();
	baseEnv = curEnv;
}

Env* SymTable::GetMainClass(){
	Env* env = baseEnv;
	fori(0, (env->children).size()){
		if((env->children)[i]->type == "CLASSTYPE"){
			for(vector <Env*> :: iterator it = (env->children).begin() ; it != (env->children).end() ; it++){
				if((*it)->type == "METHODTYPE" && (*it)->name == "main")	return (*it);
			}
		}
	}
	return NULL;
}

Symbol* SymTable::AddVar(string varName, string varType = "None", string genericType = "simple", int _width = -1){
	return curEnv->addVar(varName, varType, genericType, _width);
}

string SymTable::GetMethodType(){
	return curEnv->getMethodType();
}

Symbol* SymTable::GetVar(string varName){
	return curEnv->getVar(varName);
}

// Symbol* SymTable::GetVarEnv(string varName){
// 	return curEnv->getVarEnv(varName);
// }


// Symbol* SymTable::GetVarInClass(string varName, string className){
// 	return curEnv->getVarInClass(varName, className);
// }

string SymTable::GenTemp(){
	return curEnv->genTemp();
}

Env* SymTable::BeginScope(string scopeName = "None", string scopeType = "BLOCKTYPE", string returnType = "void", string Class = "None", string Parent_Class = "None"){
	Env* newEnv = new Env(scopeName, scopeType, curEnv, returnType, Class, Parent_Class);
	(curEnv->children).pb(newEnv);

	// if(scopeType == "BLOCKTYPE") { newEnv->offset = curEnv->offset; }
	
	curEnv = newEnv;

	return newEnv;
}

string SymTable::GetEnvName(){
	return curEnv->name;
}

string SymTable::GetPrevEnvName(){
	return curEnv->prevEnv->name;
}

Env* SymTable::GetMethod(string methodName){
	return curEnv->getMethod(methodName, baseEnv);
}

Env* SymTable::GetMethodInClass(string methodName, string className){
	return curEnv->getMethodFromClass(methodName, className, baseEnv);
}

Env* SymTable::FindClass(string className){
	return curEnv->findClass(className, baseEnv);
}

Env* SymTable::EndScope(){
	// int cur_width = max(curEnv->maxWidth, curEnv->width);
	// curEnv->maxWidth = cur_width;

	curEnv = curEnv->prevEnv;

	// curEnv->width = max(curEnv->maxWidth, curEnv->width + cur_width);
	// return curEnv;
}

vector <string> SymTable::SetArgTypeList(vector <string> args){
	return curEnv->setArgTypeList(args);
}

void SymTable::PrintTable(Env* env){
	curEnv->printTableEnv(env);
}