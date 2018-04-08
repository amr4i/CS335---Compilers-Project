%{
	extern void yyerror(const char*);
	#include <math.h>
	#include <cstdio> 
	#include <map>
	#include <utility>
	#include <vector>
	#include <string>
	#include <iostream>
	#include <cstdlib>
	#include <algorithm>
	#include <iomanip>
	#include <string.h>
	#include "y.tab.h"
	
	using namespace std;	
	extern int lineNum;
	#define YY_DECL extern "C" int yylex()
%}

%option yylineno

COMMENT			\/\/[^\n]*\n	
WHITESPACE		[\t\v ]+
NEWLINE			\n
BASE			base
BOOL			bool
BREAK			break
CASE			case
CATCH			catch
CHAR			char
CLASS			class
CONST			const
CONTINUE		continue
DEFAULT			default
DO				do
ELSE			else
FALSE			false
FINALLY			finally
FOR 			for
GOTO			goto
IF				if
IN 				in
INT				int
LONG			long
NAMESPACE		namespace
NEW				new 	
NULL_LIT		null
OBJECT			object
PARAMS			params
PRIVATE  	  	private
PROTECTED		protected
PUBLIC			public
REF				ref
RETURN			return
STRING			string
STRUCT			struct
SWITCH			switch
THIS			this
THROW			throw
TRUE			true
TRY				try
TYPEOF			typeof
USING 			using
VOID 			void
WHILE 			while
WHERE 			where
DIGIT 			[0-9]
HEX_DIGIT		[0-9a-fA-F]
ID 				@?[a-zA-Z_][a-zA-Z0-9_]*
DINT_LITERAL	[0-9]+(UL|Ul|uL|ul|LU|Lu|lU|lu|u|U|l|L)?
HDINT_LITERAL	0[xX][0-9a-fA-F]+(UL|Ul|uL|ul|LU|Lu|lU|lu|u|U|l|L)?	
SIMPLE_ESC_SEQ	\\\'|\\\"|\\\\|\\0|\\n|\\r|\\t
CHAR_LITERAL	'([^'\\(\n)]|{SIMPLE_ESC_SEQ})'
REG_STR_LITERAL	\"([^(\")(\\)(\n)]|{SIMPLE_ESC_SEQ}|(\\x[0-9a-fA-F]{1,4})|(\\u[0-9a-fA-F]{4,4})|(\\U[0-9a-fA-F]{8,8}))+\"
VER_STR_LITERAL	@\"([^\"]|\"\")+\"
LBRACE			\{
RBRACE			\}
LBRACKET		\[
RBRACKET		\]
LPARENTHESES	\(
RPARENTHESES	\)
DOT				\.
COMMA			,
COLON			:
SEMICOLON		;
PLUS			\+
MINUS			-
STAR 			\*
DIVIDE			\/
MODULO			%	
AMPERSAND		&
OR				\|
CARET 			\^
EXCLAMATION		!
TILDE			~
EQUALS			=
LESS_THAN		<
GREATER_THAN	>
QUESTION_MARK	\?
DOUBLE_QM		\?\?
DOUBLE_COLON	::
INCREMENT		\+\+
DECREMENT		--
REL_AND			&&
REL_OR			\|\|
REL_EQUALS		==
REL_NOT_EQ		!=
LESS_EQUALS		<=
GREATER_EQUALS	>=	
ASSIGN_PLUS		\+=
ASSIGN_MINUS	-=
ASSIGN_STAR		\*=
ASSIGN_DIV		\/=
ASSIGN_MOD		%=
ASSIGN_AND		&=
ASSIGN_OR		\|=
ASSIGN_CARET	\^=
LEFT_SHIFT		<<
LEFT_SHIFT_EQ	<<=
RIGHT_SHIFT		>>
RIGHT_SHIFT_EQ	>>=
/*
DEFINE			{WHITESPACE}*#{WHITESPACE}*define
UNDEF			{WHITESPACE}*#{WHITESPACE}*undef 
*/
%%

{COMMENT} {lineNum++;}
{WHITESPACE}  ;
{NEWLINE} {lineNum++;};	
{BASE} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return BASE; }
{BOOL} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return BOOL; }
{BREAK} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return BREAK; }
{CASE} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return CASE; }
{CATCH} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return CATCH; }
{CHAR} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return CHAR; }
{CLASS} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return CLASS; }
{CONST} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return CONST; }
{CONTINUE}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return CONTINUE; }
{DEFAULT} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return DEFAULT; }
{DO} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return DO; }
{ELSE} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return ELSE; }
{FALSE} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return FALSE; }
{FINALLY} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return FINALLY; }
{FOR} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return FOR; }
{GOTO} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return GOTO; }
{IF} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return IF; }
{IN} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return IN; }
{INT} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return INT; }
{LONG} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return LONG; }
{NAMESPACE} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return NAMESPACE; }
{NEW} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return NEW; }
{NULL_LIT} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return NULL_LIT; }
{OBJECT} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return OBJECT; }
{PARAMS} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return PARAMS; }
{PRIVATE} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return PRIVATE; }
{PROTECTED} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return PROTECTED; }
{PUBLIC} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return PUBLIC; }
{REF} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return REF; }
{RETURN} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return RETURN; }
{STRING} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return STRING; }
{STRUCT} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return STRUCT; }
{SWITCH} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return SWITCH; }
{THIS} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return THIS; }
{THROW} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return THROW; }
{TRUE} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return TRUE; }
{TRY} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return TRY; }
{TYPEOF} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return TYPEOF; }
{USING} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return USING; }
{VOID} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return VOID; }
{WHILE} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return WHILE; }
{WHERE}	{yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return WHERE; }
{ID}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return ID; }
{DINT_LITERAL}  { yylval.iVal = atoi(yytext); cerr<<yytext<<endl; return DINT_LITERAL; }
{HDINT_LITERAL}  { yylval.iVal = strtol(yytext, NULL, 16); cerr<<yytext<<endl; return HDINT_LITERAL; }
{SIMPLE_ESC_SEQ}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return SIMPLE_ESC_SEQ; }
{CHAR_LITERAL}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return CHAR_LITERAL; }
{REG_STR_LITERAL}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return REG_STR_LITERAL; }
{VER_STR_LITERAL}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return VER_STR_LITERAL; }
{LBRACE}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return *yytext; }
{RBRACE}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return *yytext; }
{LBRACKET}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return *yytext; }
{RBRACKET}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return *yytext; }
{LPARENTHESES}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return *yytext; }
{RPARENTHESES}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return *yytext; }
{DOT}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return *yytext; }
{COMMA}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return *yytext; }
{COLON}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return *yytext; }
{SEMICOLON}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return *yytext; }
{PLUS}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return *yytext; }
{MINUS}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return *yytext; }
{STAR}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return *yytext; }
{DIVIDE}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return *yytext; }
{MODULO}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return *yytext; }
{AMPERSAND}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return *yytext; }
{OR}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return *yytext; }
{CARET}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return *yytext; }
{EXCLAMATION}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return *yytext; }
{TILDE}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return *yytext; }
{EQUALS}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return *yytext; }
{LESS_THAN}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return *yytext; }
{GREATER_THAN}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return *yytext; }
{QUESTION_MARK}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return *yytext; }
{DOUBLE_QM}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return DQM; }
{DOUBLE_COLON}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return DCLN; }
{INCREMENT}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return INCR; }
{DECREMENT}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return DECR; }
{REL_AND} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return RAND; }
{REL_OR} { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return ROR; }
{REL_EQUALS}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return REQ; }
{REL_NOT_EQ}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return RNE; }
{LESS_EQUALS}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return LE; }
{GREATER_EQUALS}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return GE; }
{ASSIGN_PLUS}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return APLUS; }
{ASSIGN_MINUS}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return AMINUS; }
{ASSIGN_STAR}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return AMULT; }
{ASSIGN_DIV}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return ADIV; }
{ASSIGN_MOD}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return AMOD; }
{ASSIGN_AND}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return AAND; }
{ASSIGN_OR}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return AOR; }
{ASSIGN_CARET}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return ACARET; }
{LEFT_SHIFT}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return LSHIFT; }
{LEFT_SHIFT_EQ}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return LSHIFTEQ; }
{RIGHT_SHIFT}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return RSHIFT; }
{RIGHT_SHIFT_EQ}  { yylval.sVal = strdup(yytext); cerr<<yytext<<endl; return RSHIFTEQ; }
.	{yyerror(NULL);}

%%

int yywrap(void){
	return 1;
}
