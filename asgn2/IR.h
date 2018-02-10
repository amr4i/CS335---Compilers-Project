#include "config.h" 
#include "SymTable.cpp"

// 3 operand instructions
set<string> itype3= {"+", "-", "*", "/", "%", "&", "|", "^", "<<", ">>", "==", "<", ">", "!=", "<=", ">="};

// 2 operand instructions
set<string> itype2= {"=", "+=", "-=", "*=", "/=", "%=", "&=", "|=", "^=", "<<=", ">>=", "ifgoto", "callint"};

// 1 operand instructions
set<string> itype1= {"++", "--", "label", "printint", "scan", "callvoid", "goto", "retint"};

// No operand instruction
set<string> itype0= {"ret","exit"};

/* 
Execution left for :
1> *,/,%
2> *=,/=,%=,ifgoto,callint
3> goto, callvoid, retint
4> ret
*/

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