%{
	extern void yyerror(char*);
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

%}



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
FOREACH			foreach
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
SIMPLE_ESC_SEQ	\'|\"|\\|\0|\n|\r|\t
CHAR_LITERAL	'([^'\\(\n)]|{SIMPLE_ESC_SEQ})'
REG_STR_LITERAL	\"([^(\")(\\)(\n)]|{SIMPLE_ESC_SEQ}|(\\x[0-9a-fA-F]{1,4})|(\\u[0-9a-fA-F]{4,4})|(\\U[0-9a-fA-F]{8,8}))+\"
VER_STR_LITERAL	@\"([^\"]|\"\")+\"
LBRACE			\}
RBRACE			\{
LBRACKET		\]
RBRACKET		\[
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

{COMMENT} ;
{WHITESPACE}  ;
{NEWLINE} ;	
{BASE} { yylval.sVal = yytext; return BASE; }
{BOOL} { yylval.sVal = yytext; return BOOL; }
{BREAK} { yylval.sVal = yytext; return BREAK; }
{CASE} { yylval.sVal = yytext; return CASE; }
{CATCH} { yylval.sVal = yytext; return CATCH; }
{CHAR} { yylval.sVal = yytext; return CHAR; }
{CLASS} { yylval.sVal = yytext; return CLASS; }
{CONST} { yylval.sVal = yytext; return CONST; }
{CONTINUE}  { yylval.sVal = yytext; return CONTINUE; }
{DEFAULT} { yylval.sVal = yytext; return DEFAULT; }
{DO} { yylval.sVal = yytext; return DO; }
{ELSE} { yylval.sVal = yytext; return ELSE; }
{FALSE} { yylval.sVal = yytext; return FALSE; }
{FINALLY} { yylval.sVal = yytext; return FINALLY; }
{FOR} { yylval.sVal = yytext; return FOR; }
{FOREACH} { yylval.sVal = yytext; return FOREACH; }
{GOTO} { yylval.sVal = yytext; return GOTO; }
{IF} { yylval.sVal = yytext; return IF; }
{IN} { yylval.sVal = yytext; return IN; }
{INT} { yylval.sVal = yytext; return INT; }
{LONG} { yylval.sVal = yytext; return LONG; }
{NAMESPACE} { yylval.sVal = yytext; return NAMESPACE; }
{NEW} { yylval.sVal = yytext; return NEW; }
{NULL_LIT} { yylval.sVal = yytext; return NULL_LIT; }
{OBJECT} { yylval.sVal = yytext; return OBJECT; }
{PARAMS} { yylval.sVal = yytext; return PARAMS; }
{PRIVATE} { yylval.sVal = yytext; return PRIVATE; }
{PROTECTED} { yylval.sVal = yytext; return PROTECTED; }
{PUBLIC} { yylval.sVal = yytext; return PUBLIC; }
{REF} { yylval.sVal = yytext; return REF; }
{RETURN} { yylval.sVal = yytext; return RETURN; }
{STRING} { yylval.sVal = yytext; return STRING; }
{STRUCT} { yylval.sVal = yytext; return STRUCT; }
{SWITCH} { yylval.sVal = yytext; return SWITCH; }
{THIS} { yylval.sVal = yytext; return THIS; }
{THROW} { yylval.sVal = yytext; return THROW; }
{TRUE} { yylval.sVal = yytext; return TRUE; }
{TRY} { yylval.sVal = yytext; return TRY; }
{TYPEOF} { yylval.sVal = yytext; return TYPEOF; }
{USING} { yylval.sVal = yytext; return USING; }
{VOID} { yylval.sVal = yytext; return VOID; }
{WHILE} { yylval.sVal = yytext; return WHILE; }
{WHERE}	{yylval.sVal = yytext; return WHERE; }
{ID}  { yylval.sVal = yytext; return ID; }
{DINT_LITERAL}  { yylval.iVal = atoi(yytext); return DINT_LITERAL; }
{HDINT_LITERAL}  { yylval.iVal = strtol(yytext, NULL, 16); return HDINT_LITERAL; }
{SIMPLE_ESC_SEQ}  { yylval.sVal = yytext; return SIMPLE_ESC_SEQ; }
{CHAR_LITERAL}  { yylval.sVal = yytext; return CHAR_LITERAL; }
{REG_STR_LITERAL}  { yylval.sVal = yytext; return REG_STR_LITERAL; }
{VER_STR_LITERAL}  { yylval.sVal = yytext; return VER_STR_LITERAL; }
{LBRACE}  { yylval.sVal = yytext; return *yytext; }
{RBRACE}  { yylval.sVal = yytext; return *yytext; }
{LBRACKET}  { yylval.sVal = yytext; return *yytext; }
{RBRACKET}  { yylval.sVal = yytext; return *yytext; }
{LPARENTHESES}  { yylval.sVal = yytext; return *yytext; }
{RPARENTHESES}  { yylval.sVal = yytext; return *yytext; }
{DOT}  { yylval.sVal = yytext; return *yytext; }
{COMMA}  { yylval.sVal = yytext; return *yytext; }
{COLON}  { yylval.sVal = yytext; return *yytext; }
{SEMICOLON}  { yylval.sVal = yytext; return *yytext; }
{PLUS}  { yylval.sVal = yytext; return *yytext; }
{MINUS}  { yylval.sVal = yytext; return *yytext; }
{STAR}  { yylval.sVal = yytext; return *yytext; }
{DIVIDE}  { yylval.sVal = yytext; return *yytext; }
{MODULO}  { yylval.sVal = yytext; return *yytext; }
{AMPERSAND}  { yylval.sVal = yytext; return *yytext; }
{OR}  { yylval.sVal = yytext; return *yytext; }
{CARET}  { yylval.sVal = yytext; return *yytext; }
{EXCLAMATION}  { yylval.sVal = yytext; return *yytext; }
{TILDE}  { yylval.sVal = yytext; return *yytext; }
{EQUALS}  { yylval.sVal = yytext; return *yytext; }
{LESS_THAN}  { yylval.sVal = yytext; return *yytext; }
{GREATER_THAN}  { yylval.sVal = yytext; return *yytext; }
{QUESTION_MARK}  { yylval.sVal = yytext; return *yytext; }
{DOUBLE_QM}  { yylval.sVal = yytext; return DQM; }
{DOUBLE_COLON}  { yylval.sVal = yytext; return DCLN; }
{INCREMENT}  { yylval.sVal = yytext; return INCR; }
{DECREMENT}  { yylval.sVal = yytext; return DECR; }
{REL_AND} { yylval.sVal = yytext; return RAND; }
{REL_OR} { yylval.sVal = yytext; return ROR; }
{REL_EQUALS}  { yylval.sVal = yytext; return REQ; }
{REL_NOT_EQ}  { yylval.sVal = yytext; return RNE; }
{LESS_EQUALS}  { yylval.sVal = yytext; return LE; }
{GREATER_EQUALS}  { yylval.sVal = yytext; return GE; }
{ASSIGN_PLUS}  { yylval.sVal = yytext; return APLUS; }
{ASSIGN_MINUS}  { yylval.sVal = yytext; return AMINUS; }
{ASSIGN_STAR}  { yylval.sVal = yytext; return AMULT; }
{ASSIGN_DIV}  { yylval.sVal = yytext; return ADIV; }
{ASSIGN_MOD}  { yylval.sVal = yytext; return AMOD; }
{ASSIGN_AND}  { yylval.sVal = yytext; return AAND; }
{ASSIGN_OR}  { yylval.sVal = yytext; return AOR; }
{ASSIGN_CARET}  { yylval.sVal = yytext; return ACARET; }
{LEFT_SHIFT}  { yylval.sVal = yytext; return LSHIFT; }
{LEFT_SHIFT_EQ}  { yylval.sVal = yytext; return LSHIFTEQ; }
{RIGHT_SHIFT}  { yylval.sVal = yytext; return RSHIFT; }
{RIGHT_SHIFT_EQ}  { yylval.sVal = yytext; return RSHIFTEQ; }
.	{yyerror(NULL);}

%%

int yywrap(void){
	yylval.sVal = yytext; return 1;
}
