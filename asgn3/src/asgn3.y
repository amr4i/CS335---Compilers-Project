%{
	#include <math.h>
	#include <cstdio> 
	#include <map>
	#include <utility>
	#include <vector>
	#include <string>
	#include <iostream>
	#include <algorithm>
	#include <iomanip>
	#include <stdarg.h>
	#include <cstdlib>

	using namespace std;

	int yylex(void);
	extern void yyerror(char *); // define it in either of the files
%}

%union{
	int iVal;
	char* sVal;
	char cVal;	
};

%token DEFINE UNDEF BASE BOOL BREAK CASE CATCH CHAR CLASS CONST CONTINUE DEFAULT DO ELSE FALSE FINALLY FOR FOREACH GOTO IF IN INT LONG NAMESPACE NEW NULL OBJECT PARAMS PRIVATE PROTECTED PUBLIC REF RETURN STRING STRUCT SWITCH THIS THROW TRUE TRY TYPEOF UINT ULONG USING VOID WHILE ID DINT_LITERAL HDINT_LITERAL SIMPLE_ESC_SEQ CHAR_LITERAL REG_STR_LITERAL VER_STR_LITERAL NULL_LITERAL DQM DCLN INCR DECR RAND ROR REQ RNE LE GE APLUS AMINUS AMULT ADIV AMOD AAND AOR ACARET LSHIFT LSHIFTEQ RSHIFT RSHIFTEQ

// Left - associativity if to be done
%left or %right

%%
// Rules
%%	

int main(void){
	yyparse();
	return 0;
}