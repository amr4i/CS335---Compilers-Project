#include "mipsCode.h"

mipsCode::mipsCode(SymTable* SymT)
{

	string FRS[] = {"$t2","$t3","$t4","$t5","$t6","$t7","$s0","$s1","$s2","$s3","$s4","$s5","$s6","$s7"};
	const int lenFRS = 14;
	for(int i=0; i<lenFRS; i++){
		freeRegs.push_back(FRS[i]);
	}
	ST = SymT;

}

void mipsCode::addLine(string line){
	code.push_back(line);
}

// to get a register that is not in use. 
string mipsCode::getFreeReg(){
	string reg;
	if(freeRegs.size() > 0){
		reg = freeRegs.back();
		freeRegs.pop_back();
	}
	regDesc[reg] = "NONE";
	return reg;
}

string mipsCode::getReg(string var, int ins, int isDst)
{
	string reg, tempVarName;
	vector < pair < int, string > > :: iterator it;
	bool flag = false;



	// If variable already has a register 
	if(addDesc.find(var) != addDesc.end() && addDesc[var]["register"]!="NONE")
	{
		if(isDst==1) 	addDesc[var]["memory"]="false";
		reg = addDesc[var]["register"];
		return reg;
	} 
	
	// If there is variable on the RHS that has no nextUse
	// This should be done only when the register is destination register (i.e. on the LHS)
	if(isDst==1 && !(IR[ins-1]->op == "+=" || IR[ins-1]->op == "-=" || IR[ins-1]->op == "/=" || 
		IR[ins-1]->op == "*=" || IR[ins-1]->op == "%=" || IR[ins-1]->op == ">>=" || IR[ins-1]->op == "<<=" ||
		IR[ins-1]->op == "&=" || IR[ins-1]->op == "|=" || IR[ins-1]->op == "^="))
	{
		addDesc[var]["memory"] = "false";

		if(IR[ins-1]->opd1 != NULL)
		{
			tempVarName = IR[ins-1]->opd1->name;
			if(addDesc.find(tempVarName) != addDesc.end() && (nextUseTable[ins-1].se)[tempVarName].se == INF )
			{
				reg = addDesc[tempVarName]["register"];
				regDesc[reg] = var;
				addDesc[var]["register"] = reg;
				addDesc[tempVarName]["register"] = "NONE";

				for(it = usedRegs.begin() ; it != usedRegs.end() ; it++)
				{
					if((*it).se == reg){ 
						(*it).fi = (nextUseTable[ins-1].se)[var].se; 
						break;
					}
				}

				flag = true;
				if((nextUseTable[ins-1].se)[tempVarName].fi == "Live")	
				{ 
					addLine("sw "+reg+", "+tempVarName); 
					addDesc[tempVarName]["memory"] = "true";
					addDesc[tempVarName]["register"] = "NONE";
				}
			}
		}
		
		if(flag == false && IR[ins-1]->opd2 != NULL)
		{
			tempVarName = IR[ins-1]->opd2->name;
			if(addDesc.find(tempVarName) != addDesc.end() && (nextUseTable[ins-1].se)[tempVarName].se == INF )
			{
				reg = addDesc[ tempVarName ]["register"];
				regDesc[reg] = var;
				addDesc[var]["register"] = reg;

				for(it = usedRegs.begin() ; it != usedRegs.end() ; it++)
				{
					if((*it).se == reg){ 
						(*it).fi = (nextUseTable[ins-1].se)[var].se; 
						break;
					}
				}

				flag = true;
				if((nextUseTable[ins-1].se)[tempVarName].fi == "Live")	
				{ 
					addLine("sw "+reg+", "+tempVarName);
					addDesc[tempVarName]["memory"] = "true";
					addDesc[tempVarName]["register"] = "NONE";
				}
			}
		}
	}


	// If there is a free"register"	
	if(flag == false && freeRegs.size() > 0)
	{
		reg = getFreeReg();
		regDesc[reg] = var;
		usedRegs.push_back( mp( (nextUseTable[ins-1].se)[var].se, reg ) );
		addDesc[var]["register"] = reg;	
		if(addDesc[var]["memory"] != "true"){
			addDesc[var]["memory"] = "false";
		}

		flag = true;
	}

	// Spilling
	if(flag == false)
	{
		reg = spillReg(var, ins);
		flag = true;
		if(addDesc[var]["memory"] != "true"){
			addDesc[var]["memory"] = "false";
		}
	}

	if(flag == false){
		exit(1);
	}

	if((isDst!=1) || (IR[ins-1]->op == "+=" || IR[ins-1]->op == "-=" || IR[ins-1]->op == "/=" || 
		IR[ins-1]->op == "*=" || IR[ins-1]->op == "%=" || IR[ins-1]->op == ">>=" || IR[ins-1]->op == "<<=" ||
		IR[ins-1]->op == "&=" || IR[ins-1]->op == "|=" || IR[ins-1]->op == "^="))
	{
		addLine("lw " + reg + ", " + var);
		if(isDst==1) addDesc[var]["memory"]="false";
	}

	return reg;

}

string mipsCode::spillReg(string var, int ins)
{
	vector < pair < int, string > >::iterator far, it; 
	vector <string> varsPresent;
	vector <string>:: iterator itt;
	string spilledReg, reg;
	int farthest;
	bool flag;

	if(IR[ins-1]->dest != NULL)	varsPresent.pb(IR[ins-1]->dest->name);
	if(IR[ins-1]->opd1 != NULL)	varsPresent.pb(IR[ins-1]->opd1->name);
	if(IR[ins-1]->opd2 != NULL)	varsPresent.pb(IR[ins-1]->opd2->name);

	far = usedRegs.end();
	farthest = 0;

	for(it = usedRegs.begin() ; it  != usedRegs.end() ; it++)
	{
		flag = true;
		if((*it).fi > farthest)
		{
			for(itt = varsPresent.begin() ; itt != varsPresent.end() ; itt++)
			{
				if((*itt) == regDesc[(*it).se])	flag = false;
			}

			if(flag == true) { far = it; }
		}
	}

	spilledReg = (*far).se;

	string varName = regDesc[spilledReg];

	// If the variable is a temporary then delete it from all the data structures right away
	if(varName.substr(0, 6) == "_tVar_"){
		cerr << "This is a temporary variable: " << varName << "\n";
		ST->curEnv->addTable.erase(varName);
		addDesc.erase(varName);
	}
	else{
		// Write store instructions to transfer the data in the variable to the stack
		addLine("sw "+spilledReg+", "+varName);
		addDesc[varName]["memory"] = "true";
	}

	reg = spilledReg;
	regDesc[reg] = var;

	(*far).fi = (nextUseTable[ins-1].se)[var].se;
	addDesc[var]["register"] = reg;

	return reg;
}

void mipsCode::printCode()
{
	vector <string> ::iterator it;
	for(it = code.begin(); it != code.end() ; it++){
		cout<<(*it)<<"\n";
	}
}

// to clear the registers at the end of blocks, 
// and move them to memory locations. 
void mipsCode::flushAll()
{
	vector< pair<int, string> >::iterator it;
	string reg, varName;
	for(it=usedRegs.begin(); it!=usedRegs.end(); it++){
		reg = (*it).se;
		varName = regDesc[reg];

		// If the variable is a temp then we just need to delete from all the records
		if(varName.substr(0, 6) == "_tVar_"){
			cerr << "This is a temporary variable: " << varName << "\n";
			ST->curEnv->addTable.erase(varName);
			addDesc.erase(varName);
		}
		else{
			if(addDesc[varName]["memory"] != "true")
			{
				addLine("sw "+reg+", "+varName);
				addDesc[varName]["memory"] = "true";
			}
			addDesc[varName]["register"] = "NONE";
		}
	}

	usedRegs.clear();
	regDesc.clear();

	string FRS[] = {"$t1","$t2","$t3","$t4","$t5","$t6","$t7","$s0","$s1","$s2","$s3","$s4","$s5","$s6","$s7"};
	const int lenFRS = 15;
	for(int i=0; i<lenFRS; i++){
		freeRegs.push_back(FRS[i]);
	}

}