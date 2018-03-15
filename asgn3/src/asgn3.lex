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
UINT			uint
ULONG			ulong
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
{BASE} { return BASE; }
{BOOL} { return BOOL; }
{BREAK} { return BREAK; }
{CASE} { return CASE; }
{CATCH} { return CATCH; }
{CHAR} { return CHAR; }
{CLASS} { return CLASS; }
{CONST} { return CONST; }
{CONTINUE}  { return CONTINUE; }
{DEFAULT} { return DEFAULT; }
{DO} { return DO; }
{ELSE} { return ELSE; }
{FALSE} { return FALSE; }
{FINALLY} { return FINALLY; }
{FOR} { return FOR; }
{FOREACH} { return FOREACH; }
{GOTO} { return GOTO; }
{IF} { return IF; }
{IN} { return IN; }
{INT} { return INT; }
{LONG} { return LONG; }
{NAMESPACE} { return NAMESPACE; }
{NEW} { return NEW; }
{NULL_LIT} { return NULL_LIT; }
{OBJECT} { return OBJECT; }
{PARAMS} { return PARAMS; }
{PRIVATE} { return PRIVATE; }
{PROTECTED} { return PROTECTED; }
{PUBLIC} { return PUBLIC; }
{REF} { return REF; }
{RETURN} { return RETURN; }
{STRING} { return STRING; }
{STRUCT} { return STRUCT; }
{SWITCH} { return SWITCH; }
{THIS} { return THIS; }
{THROW} { return THROW; }
{TRUE} { return TRUE; }
{TRY} { return TRY; }
{TYPEOF} { return TYPEOF; }
{UINT} { return UINT; }
{ULONG} { return ULONG; }
{USING} { return USING; }
{VOID} { return VOID; }
{WHILE} { return WHILE; }
{WHERE}	{return WHERE; }
{ID}  { yylval.sVal = strdup(yytext); return ID; }
{DINT_LITERAL}  { yylval.iVal = atoi(yytext); return DINT_LITERAL; }
{HDINT_LITERAL}  { yylval.iVal = strtol(yytext, NULL, 16); return HDINT_LITERAL; }
{SIMPLE_ESC_SEQ}  { return SIMPLE_ESC_SEQ; }
{CHAR_LITERAL}  { yylval.cVal = *yytext; return CHAR_LITERAL; }
{REG_STR_LITERAL}  { yylval.sVal = strdup(yytext); return REG_STR_LITERAL; }
{VER_STR_LITERAL}  { yylval.sVal = strdup(yytext); return VER_STR_LITERAL; }
{LBRACE}  { return *yytext; }
{RBRACE}  { return *yytext; }
{LBRACKET}  { return *yytext; }
{RBRACKET}  { return *yytext; }
{LPARENTHESES}  { return *yytext; }
{RPARENTHESES}  { return *yytext; }
{DOT}  { return *yytext; }
{COMMA}  { return *yytext; }
{COLON}  { return *yytext; }
{SEMICOLON}  { return *yytext; }
{PLUS}  { return *yytext; }
{MINUS}  { return *yytext; }
{STAR}  { return *yytext; }
{DIVIDE}  { return *yytext; }
{MODULO}  { return *yytext; }
{AMPERSAND}  { return *yytext; }
{OR}  { return *yytext; }
{CARET}  { return *yytext; }
{EXCLAMATION}  { return *yytext; }
{TILDE}  { return *yytext; }
{EQUALS}  { return *yytext; }
{LESS_THAN}  { return *yytext; }
{GREATER_THAN}  { return *yytext; }
{QUESTION_MARK}  { return *yytext; }
{DOUBLE_QM}  { return DQM; }
{DOUBLE_COLON}  { return DCLN; }
{INCREMENT}  { return INCR; }
{DECREMENT}  { return DECR; }
{REL_AND} { return RAND; }
{REL_OR} { return ROR; }
{REL_EQUALS}  { return REQ; }
{REL_NOT_EQ}  { return RNE; }
{LESS_EQUALS}  { return LE; }
{GREATER_EQUALS}  { return GE; }
{ASSIGN_PLUS}  { return APLUS; }
{ASSIGN_MINUS}  { return AMINUS; }
{ASSIGN_STAR}  { return AMULT; }
{ASSIGN_DIV}  { return ADIV; }
{ASSIGN_MOD}  { return AMOD; }
{ASSIGN_AND}  { return AAND; }
{ASSIGN_OR}  { return AOR; }
{ASSIGN_CARET}  { return ACARET; }
{LEFT_SHIFT}  { return LSHIFT; }
{LEFT_SHIFT_EQ}  { return LSHIFTEQ; }
{RIGHT_SHIFT}  { return RSHIFT; }
{RIGHT_SHIFT_EQ}  { return RSHIFTEQ; }
.	{yyerror(NULL);}

%%

int yywrap(void){
	return 1;
}
