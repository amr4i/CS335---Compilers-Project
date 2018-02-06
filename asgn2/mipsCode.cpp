#include "mipsCode.h"

mipsCode::mipsCode(SymTable SymT){

	string FRS[] = {'$t0','$t1','$t2','$t3','$t4','$t5','$t6','$t7','$s0','$s1','$s2','$s3','$s4','$s5','$s6','$s7'};
	const int lenFRS = 16;
	for(int i=0; i<lenFRS; i++){
		freeRegs.push_back(FRS[i]);
	}
	ST = SymT;
}

mipsCode::addLine(string line){
	code.push_back(line);
}

string mipsCode::getFreeReg(){
	string reg;
	if(freeRegs.size() > 0){
		reg = freeRegs.back();
		freeRegs.pop_back();
	}
	usedReg.push_back(reg);
	regDesc[reg] = "NONE";
}

string mipsCode::getReg(string var){

}
