#include "SymTable.h"


SymTable::SymTable(){
	Env* curEnv = new Env(NULL);
	baseEnv = curEnv;
}

Env* SymTable::GetMainClass(){
	Env* env = baseEnv;
	fori(0, (env->children).size()){
		if((env->children)[i]->type == "classType"){
			for(vector <Env*> :: iterator it = (env->children).begin() ; it != (env->children).end() ; it++){
				if((*it)->type == "methodType" && (*it)->name == "main")	return (*it);
			}
		}
	}
	return NULL;
}

Symbol* SymTable::AddVar(string varName, string varType, string genericType, int _width){
	return curEnv->addVar(varName, varType, genericType, _width);
}

string SymTable::GetMethodType(){
	return curEnv->getMethodType();
}

Symbol* SymTable::GetVar(string varName){
	return curEnv->getVar(varName);
}

Symbol* SymTable::GetVarEnv(string varName){
	return curEnv->getVarEnv(varName);
}


Symbol* SymTable::GetVarInClass(string varName, string className){
	return curEnv->getVarInClass(varName, className);
}

string SymTable::GenTemp(string varType){
	return curEnv->genTemp(varType);
}

Env* SymTable::BeginScope(string scopeName = "None", string scopeType = "blockType", string returnType = "void", string Class = "None", string Parent_Class = "None"){
	Env* newEnv = new Env(scopeName, scopeType, curEnv, returnType, Class, Parent_Class);
	(curEnv->children).pb(newEnv);
	if(scopeType == "blockType") { newEnv->offset = curEnv->offset; }
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
	return curEnv->getMethod(methodName);
}

Env* SymTable::GetMethodInClass(string methodName, string className){
	return curEnv->getMethodFromClass(methodName, className);
}

Env* SymTable::FindClass(string className){
	return curEnv->findClass(className);
}

Env* SymTable::EndScope(){
	//////////////////////////////////////////// Not implemented exactly as apeeyush ///////////////////////////////////////////
	int cur_width = max(curEnv->maxWidth, curEnv->width);
	curEnv->maxWidth = cur_width;
	curEnv = curEnv->prevEnv;
	curEnv->width = max(curEnv->maxWidth, curEnv->width + cur_width);
	return curEnv;
}

vector <string> SymTable::SetArgTypeList(vector <string> args){
	return curEnv->setArgTypeList(args);
}

void SymTable::PrintTable(Env* env){
	curEnv->printTableEnv(env);
}
/*
	To insert a symbol into the symbol table.
	If symbol table already contains that symbol, then 
	it is not inserted again. The insertion is skipped, 
	and the function exits with a false return value.
*/
// bool SymTable::insert(Symbol* symbol){
// 	if(symbols.find(symbol->name) == symbols.end()){
// 		symbols.insert(mp(symbol->name, symbol));
// 		return true;
// 	} else{
// 		return false;
// 	}
// }


// 	to get a pointer to the symbol with the provided name.

// Symbol* SymTable::get(string symName){
// 	if(symbols.find(symName) != symbols.end()){
// 		Symbol* sym = symbols[symName];
// 		return sym;
// 	}
// 	else return NULL;
// }

/*
	To remove a symbol from the symbol table. 
*/
// Symbol* SymTable::remove(string symName){
// 	if(symbols.find(symName) != symbols.end()){
// 		Symbol* sym = symbols[symName];
// 		symbols.erase(symbols.find(symName));
// 		return sym;
// 	}
// 	return NULL;
// }