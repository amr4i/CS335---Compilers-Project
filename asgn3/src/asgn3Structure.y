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

	using namespace std;

	int yylex(void);
	extern void yyerror(char *); // define it in either of the files
%}

%union{
	
};

%token

// Left - associativity if to be done
%left or %right

%%
// Rules
%%

int main(void){
	yyparse();
	return 0;
}