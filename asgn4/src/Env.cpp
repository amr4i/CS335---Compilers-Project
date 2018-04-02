#include "Env.h"

Env::Env(string _name = "None", string _type = "blockType", Env *prev_env = NULL, string _return_type = "Void", string Class = "None", string ParentClass = "None"){
	type = _type;
	returnType = _return_type;
	name = _name;
	prevEnv = prev_env;
	_class = Class;
	_parentClass = ParentClass;
	width = 0;
	offset = 0;
	maxWidth = 0;
	argNum = 0;
}

string Env::getMethodType(){
	Env* tmpEnv = curEnv;
	while(tmpEnv != NULL && tmpEnv->type != "classType"){
		if(tmpEnv->type == "methodType")	return methodList[methodName].returnType;
		tmpEnv = tmpEnv->prevEnv;
	}
	return "None";
}

string Env::genTemp(string varType, string genericType = "simple", int _width = 0){
	string place = "tVar_"+stoi(tempCounter);
	tempCounter+=1;
	_width = getWidth(varType, genericType, _width);
	Symbol* symbol = new Symbol(place, varType, _width, offset);
	addTable[place] = symbol;
	offset += _width;
	width += _width;
	return place;
}

void Env::addVar(string varName, string varType, string genericType, int _width){
	_width = getWidth(varType, genericType, _width);
	string place = varName;
	Symbol* symbol = new Symbol(varName, varType, _width, offset);
	addTable[place] = symbol;
	varList[varName] = symbol;
	offset += _width;
	width += _width;
	return symbol;
}

int Env::getWidth(string varType, string genericType, int _width = -1){
	map <string, int> typeMap;
	typeMap["int"] = 4;
	typeMap["long"] = 8;
	typeMap["char"] = 1;
	typeMap["bool"] = 1;
	typeMap["void"] = 0;
	typeMap["null"] = 0;

	// To be confirmed
	typeMap["ulong"] = 8;      
	typeMap["uint"] = 4;

	if(genericType == "simple"){  return typeMap[varType]; }
	else{
		if(genericType == "arrayType"){	return _width*typeMap[varType];	}
		else { return _width; }
	}
}

Symbol* Env::getVar(string varName){
	Symbol* temp = NULL;
	Env* tmpEnv = curEnv;
	while(tmpEnv != NULL && tmpEnv->type != "classType"){
		if(tmpEnv->varList[varName] != tmpEnv->varList.end()){
			temp = tmpEnv->varList[varName];
			break;
		}
	}
	if(temp == NULL){
		if(tmpEnv->type == "classType")	{ temp = tmpEnv->varList[varName]; }
	}
	return temp;
}

Symbol* Env::getVarInClass(string varName, string className){
	Env* _class = findClass(className);
	if(_class != NULL){
		if(_class->varList[varName]  != _class->varList.end())	return _class->varList[varName];
	}
	return NULL;
}

Symbol* Env::getVarEnv(string varName){
	if(curEnv->varList[varName] != curEnv->varList.end())	return curEnv->varList[varName];
	else	return NULL;
}

vector <string> Env::setArgTypeList(vector <string> args){
	argTypeList = args;
	return argTypeList;
}

Env* Env::findClass(string className){
	fori(0, curEnv->children.size()){
		if((curEnv->children)[i]->type == "classType" && (curEnv->children)[i]->name == className)	return (curEnv->children);
	}
	return NULL;
}

Env* Env::getBaseEnvClass(){
	Env* tmpEnv = curEnv;
	while(tmpEnv != NULL && tmpEnv->type != "classType"){
		tmpEnv = tmpEnv->prevEnv;
	}
	return tmpEnv;
}

Env* Env::getMethod(string methodName){
	Env* tmpEnv = getBaseEnvClass();
	fori(0, (tmpEnv->children).size()){
		if((tmpEnv->children)[i]->type == "methodType" && (tmpEnv->children)[i]->name == methodName)	return (tmpEnv->children)[i];
	}
	if(_parentClass != "None"){
		tmpEnv = findClass(_parentClass);
		fori(0, (tmpEnv->children).size()){
			if((tmpEnv->children)[i]->type == "methodType" && (tmpEnv->children)[i]->name == methodName)	return (tmpEnv->children)[i];
		}
	}
	return NULL;
}

Env* Env::getMethodFromClass(string methodName, string className){
	Env* tmpEnv = findClass(className);
	fori(0, (tmpEnv->children).size()){
		if((tmpEnv->children)[i]->type == "methodType" && (tmpEnv->children)[i]->name == methodName)	return (tmpEnv->children)[i];
	}
	if(_parentClass == "None"){
		tmpEnv = findClass(_parentClass);
		fori(0, (tmpEnv->children).size()){
			if((tmpEnv->children)[i]->type == "methodType" && (tmpEnv->children)[i]->name == methodName)	return (tmpEnv->children)[i];
		}
	}
	return NULL;
}

void Env::printTableEnv(Env* env){
	for(map<string, Symbol*>::iterator it = (env->varList.begin()) ; it != (env->varList.end()) ; it++){
		cout << (((*it).se)->name) << " ";
	}
	cout << "\n";
	fori(0, (env->children).size()){
		printTableEnv((env->children)[i]);
	}
}

// Env::Env(){
// 	symbolTable = new SymTable();
// 	prevEnv = NULL;
// }


// Env::Env(Env *prev_env){
// 	symbolTable = new SymTable();
// 	prevEnv = prev_env;
// }


// bool Env::insert(Symbol* symbol){
// 	return symbolTable->insert(symbol);
// }


// Symbol* Env::get(string symName){
// 	Symbol *sym;
// 	sym = symbolTable->get(symName);
// 	if(	sym != NULL){
// 		return sym;
// 	}
// 	else if(prevEnv != NULL){
// 		return prevEnv->get(symName);
// 	}
// 	return NULL;
// }

