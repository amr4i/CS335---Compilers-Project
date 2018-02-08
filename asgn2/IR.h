#include "config.h" 
#include "SymTable.cpp"

// 3 operand instructions
set<string> itype3= {"+", "-", "*", "/", "%", "&", "|", "^", "<<", ">>", "==", "<", ">", "!=", "<=", ">="};

// 2 operand instructions
set<string> itype2= {"=", "=!", "+=", "-=", "*=", "/=", "%=", "&=", "|=", "^=", "<<=", ">>=", "ifgoto", "callint"};

// 1 operand instructions
set<string> itype1= {"++", "--", "label", "print", "scan", "callvoid", "goto", "retint"};

// No operand instruction
set<string> itype0= {"ret"};

vector < TAC* > IR;
SymTable symTable;

// TODO : Array

struct TAC
{
	TAC(){
		isInt1 = false;
		isInt2 = false;
	}

	int lineNum;

	string op;
	int opType;

	Symbol* dest;

	Symbol* opd1;
	Symbol* opd2;

	string target;

	int l1;
	int l2;

	bool isInt1;
	bool isInt2;
};

void readFile(char* fileName);