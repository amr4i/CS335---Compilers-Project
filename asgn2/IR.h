#include "config.h" 
#include "SymTable.cpp"

// 3 operand instructions
set<string> itype3= {"+", "-", "*", "/", "%", "&", "|", "^", "<<", ">>", "==", "<", ">", "!=", "<=", ">=", "setarr", "getarr"};

// 2 operand instructions
set<string> itype2= {"=", "+=", "-=", "*=", "/=", "%=", "&=", "|=", "^=", "<<=", ">>=", "ifgoto", "callint", "array"};

// 1 operand instructions
set<string> itype1= {"++", "--", "label", "printint", "scan", "callvoid", "goto", "retint"};

// No operand instruction
set<string> itype0= {"ret","exit"};

// TODO : Array, strings, and finally DEBUGGING

struct TAC
{
	TAC(){
		isInt1 = false;
		isInt2 = false;
		opd1 = NULL;
		opd2 = NULL;
		dest = NULL;
	}

	int lineNum;

	string op;
	int opType;

	Symbol* dest;

	Symbol* opd1;
	Symbol* opd2;

	string target;

	string l1;
	string l2;
	
	bool isInt1;
	bool isInt2;
};

vector < TAC* > IR;
SymTable symTable;

void readFile(char* fileName);
void fillTAC(vector <string> instr);
bool isIntegerLiteral(string str);