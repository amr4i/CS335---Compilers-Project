#include <string>
#include <vector>
#include <map>
#include "SymTable.cpp"

class mipsCode{
public:
	vector<string> code;
	vector<string> freeRegs; 
	vector<string> usedRegs;
	map<string, string> regDesc;
	map<string, map<string, string> > addDesc; 
	SymTable ST;

	mipsCode(SymTable SymT);
	void addLine(string line);
	string getFreeReg();
	string getReg(string var);
};