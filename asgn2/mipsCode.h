#include "config.h"
#include "getBlocks.cpp"

class mipsCode{
public:
	vector <string> code;
	vector <string> freeRegs;

	// I will use the nextUse as a key
	vector < pair < int, string > > usedRegs;

	map <string, string> regDesc;
	map <string, map<string, string> > addDesc; 
	SymTable ST;

	mipsCode(SymTable SymT);
	void addLine(string line);
	string getFreeReg();
	string getReg(string var, int ins);
	void printCode();
	string spillReg(string var, int ins);
};