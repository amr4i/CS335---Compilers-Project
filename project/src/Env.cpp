#include "Env.h"

Env::Env(string _name = "None", string _type = "BLOCKTYPE", Env *prev_env = NULL, string _return_type = "Void", string _class = "None", string _parentClass = "None"){
	type = _type;
	returnType = _return_type;
	name = _name;
	prevEnv = prev_env;
	Class = _class;
	ParentClass = _parentClass;
	width = 0;
	offset = 0;
	maxWidth = 0;
	argNum = 0;
}

string Env::getMethodType(){
	Env* tmpEnv = this;
	while(tmpEnv != NULL && tmpEnv->type != "CLASSTYPE"){
		if(tmpEnv->type == "METHODTYPE")	return tmpEnv->returnType;
		tmpEnv = tmpEnv->prevEnv;
	}
	return "None";
}

string Env::genTemp(string varType = "None", string genericType = "simple", int _width = 0){

	string place = "tVar_"+ to_string(tempCounter);
	tempCounter += 1;

	_width = getWidth(varType, genericType, _width);

	Symbol* symbol = new Symbol(place, varType, _width, genericType, offset);
	place = symbol->name;
	addTable[place] = symbol;

	offset += _width;
	width += _width;

	return place;
}

int Env::getWidth(string varType, string genericType, int _width = -1){

	map <string, int> typeMap;

	typeMap["int"] = 4;
	typeMap["long"] = 8;
	typeMap["char"] = 1;
	typeMap["bool"] = 1;
	typeMap["void"] = 0;
	typeMap["null"] = 0;

	if(genericType == "simple") {  return typeMap[varType]; }
	else{
		if(genericType == "array") {	return _width*typeMap[varType];	}
		else { return _width; }
	}

}

Symbol* Env::addVar(string varName, string varType = "None" , string genericType = "simple", int _width = -1){

	_width = getWidth(varType, genericType, _width);

	Symbol* symbol = new Symbol(varName, varType, _width, genericType, offset);
	addTable[symbol->name] = symbol;

	offset += _width;
	width += _width;

	return symbol;
}

Symbol* Env::getVar(string varName){

	Symbol* temp = NULL;
	Env* tmpEnv = this;

	/////////// Why is there a restriction on the classtype //////////// 
	/////////// There needs to be such restriction as methods must be able to declare local variables of the same name ////////////

	while(tmpEnv != NULL/* && tmpEnv->type != "CLASSTYPE"*/){
		if(tmpEnv->addTable.find(varName) != tmpEnv->addTable.end()){
			temp = tmpEnv->addTable[varName];
			break;
		}
		if(tmpEnv->type == "CLASSTYPE")	{	
			string className = tmpEnv->name;
			if(varName.length() <= className.length() || varName.substr(0, className.length()) != className){
				temp = tmpEnv->getVarInClass(tmpEnv->name + varName);
			}
			else		temp = tmpEnv->getVarInClass(varName);
			break;
		}
		tmpEnv = tmpEnv->prevEnv;
	}

	return temp;
}

Symbol* Env::getVarInClass(string varName){
	Env* Class = getClassEnv();
	if(Class != NULL){ 		
		if(Class->varList.find(varName)  != Class->varList.end())	return Class->varList[varName];
	}
	return NULL;
}

vector <string> Env::setArgTypeList(vector <string> args){
	argTypeList = args;
	return argTypeList;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// We have ignored namespaces for now, thought the code will contain namespaces. The corresponding rules will contain no semantic actions.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Env* Env::findClass(string className, Env* baseEnv){
	fori(0, baseEnv->children.size()){
		if((baseEnv->children)[i]->type == "CLASSTYPE" && (baseEnv->children)[i]->name == className)	return (baseEnv->children)[i];
	}
	return NULL;
}

Env* Env::getClassEnv(){
	Env* tmpEnv = this;
	while(tmpEnv != NULL && tmpEnv->type != "CLASSTYPE"){
		tmpEnv = tmpEnv->prevEnv;
	}
	return tmpEnv;
}

Env* Env::getMethod(string methodName, Env* baseEnv){
	Env* tmpEnv = getClassEnv();

	int siz = (tmpEnv->children).size();
	fori(0, siz){
		if((tmpEnv->children)[i]->type == "METHODTYPE" && (tmpEnv->children)[i]->name == methodName)	return (tmpEnv->children)[i];
	}

	if(ParentClass != "None"){
		tmpEnv = findClass(ParentClass, baseEnv);

		siz = (tmpEnv->children).size();
		fori(0, siz){
			if((tmpEnv->children)[i]->type == "METHODTYPE" && (tmpEnv->children)[i]->name == methodName)	return (tmpEnv->children)[i];
		}
	}

	return NULL;
}

Env* Env::getMethodFromClass(string methodName, string className, Env* baseEnv){
	Env* tmpEnv = findClass(className, baseEnv);
	
	fori(0, (tmpEnv->children).size()){
		if((tmpEnv->children)[i]->type == "METHODTYPE" && (tmpEnv->children)[i]->name == methodName)	return (tmpEnv->children)[i];
	}

	if(ParentClass == "None"){
		tmpEnv = findClass(ParentClass, baseEnv);
		fori(0, (tmpEnv->children).size()){
			if((tmpEnv->children)[i]->type == "METHODTYPE" && (tmpEnv->children)[i]->name == methodName)	return (tmpEnv->children)[i];
		}
	}

	return NULL;
}

void Env::printTableEnv(Env* env){

	for(map<string, Symbol*>::iterator it = (env->addTable.begin()) ; it != (env->addTable.end()) ; it++){
		cout << (((*it).se)->name) << " ";
	}
	cout << "\n";

	int siz = (env->children).size();
	fori(0, siz){
		printTableEnv((env->children)[i]);
	}
}

/////////////////////////////////////////////////////////////////////////////////
// Don't have a use yet
/////////////////////////////////////////////////////////////////////////////////


// Symbol* Env::getVarEnv(string varName){
// 	if(this->varList.find(varName) != this->varList.end())	return this->varList[varName];
// 	else	return NULL;
// }