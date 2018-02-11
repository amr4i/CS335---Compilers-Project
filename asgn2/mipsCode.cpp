#include "mipsCode.h"

mipsCode::mipsCode(SymTable SymT)
{

	string FRS[] = {"$t1","$t2","$t3","$t4","$t5","$t6","$t7","$s0","$s1","$s2","$s3","$s4","$s5","$s6","$s7"};
	const int lenFRS = 15;
	for(int i=0; i<lenFRS; i++){
		freeRegs.push_back(FRS[i]);
	}
	ST = SymT;

}

void mipsCode::addLine(string line){
	code.push_back(line);
}

string mipsCode::getFreeReg(){
	string reg;
	if(freeRegs.size() > 0){
		reg = freeRegs.back();
		freeRegs.pop_back();
	}
	regDesc[reg] = "NONE";
	return reg;
}

string mipsCode::getReg(string var, int ins)
{
	string reg, tempVarName;
	vector < pair < int, string > > :: iterator it;
	bool flag = false;


	// If variable already has a register 
	if(addDesc.find(var) != addDesc.end())
	{
		reg = addDesc[var]["register"];
		return reg;
	} 
	
	// If there is variable on the RHS that has no nextUse
	// This should be done only when the register is destination register (i.e. on the LHS)
	if(IR[ins-1]->dest->name == var)
	{
		if(IR[ins-1]->opd1 != NULL)
		{
			tempVarName = IR[ins-1]->opd1->name;
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
				cerr << (nextUseTable[ins-1].se)[tempVarName].fi << "\n";
				if((nextUseTable[ins-1].se)[tempVarName].fi == "Live")	{ addLine("sw "+reg+", "+tempVarName); }
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
				cerr << (nextUseTable[ins-1].se)[tempVarName].fi << "\n";
				if((nextUseTable[ins-1].se)[tempVarName].fi == "Live")	{ addLine("sw "+reg+", "+tempVarName); }
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

		flag = true;
	}

	// Spilling
	if(flag == false)
	{
		reg = spillReg(var, ins);
		flag = true;
	}

	if(flag == false){
		cerr << "Could not allocate a register to the variable " << var <<"\n";
		exit(1);
	}

	// cout<< ins<<": "<<var<<" -> "<<reg<<"\n";

	if(IR[ins-1]->dest->name != var)	addLine("lw " + reg + ", " + var);

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

	// Write store instructions to transfer the data in the variable to the stack
	addLine("sw "+spilledReg+", "+regDesc[spilledReg]);

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