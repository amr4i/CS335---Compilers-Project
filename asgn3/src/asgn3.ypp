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
start :	compilation_unit	{}
		;

/*B.1 Lexical grammar*/
input : input_section 	{}
		| epsilon	{}
		;
input_section :	input_section_part 	{}
		| input_section input_section_part	{}
		;
input_section_part : new_line 	{}
		| input_elements new_line 	{}
		| pp_directive	{}
		;
input_elements : input_element 	{}
		| input_elements input_element	{}
		;
input_element :	whitespace 	{}
		| comment 	{}
		| ?any token?	{}
		;

/*B.1.1 Line terminators*/ 
new_line : ?Carriage return character (U+000D)?	 	{}
		| ?Line feed character (U+000A)? 	{}
		| ?Carriage return character (U+000D) followed by line feed character (U+000A)? 	{}
		| ?Next line character (U+0085)? 	{}
		| ?Line separator character (U+2028)? 	{}
		| ?Paragraph separator character (U+2029)?	{}
		;

/*B.1.2 Comments*/ 
comment : single_line_comment	{}
		;
single_line_comment : '//' 	{}
		| '//' input_characters	{}
		;
input_characters : input_character 	{}
		| input_characters input_character	{}
		;
input_character : ?Any Unicode character except a new_line_character?	{}
		;
new_line_character : ?Carriage return character (U+000D)? 	{}
		| ?Line feed character (U+000A)? 	{}
		| ?Next line character (U+0085)? 	{}
		| ?Line separator character (U+2028)? 	{}
		| ?Paragraph separator character (U+2029)?	{}
		;

/*B.1.3 White space*/ 
whitespace : ?Any character with Unicode class Zs? 	{}
		| ?Horizontal tab character (U+0009)? 	{}
		| ?Vertical tab character (U+000B)? 	{}
		| ?Form feed character (U+000C)?	{}
		;

/*B.1.4 Tokens*/ 
token :	identifier 	{}
		| keyword 	{}
		| integer_literal 	{}
		| character_literal 	{}
		| string_literal 	{}
		| operator_or_punctuator	{}
		;

/*B.1.5 Unicode character escape sequences*/ 
unicode_escape_sequence : '\u' hex_digit hex_digit hex_digit hex_digit 	{}
		| '\U' hex_digit hex_digit hex_digit hex_digit hex_digit hex_digit hex_digit hex_digit	{}
		;

/*B.1.6 Identifiers*/
identifier : available_identifier 	{}
		| '@' identifier_or_keyword	{}
		;
available_identifier : ?An identifier_or_keyword that is not a keyword?	{}
		;
identifier_or_keyword :	identifier_start_character 	{}
		| identifier_start_character identifier_part_characters	{}
		;
identifier_start_character : letter_character 	{}
		| '_'	{}
		;
identifier_part_characters : identifier_part_character 	{}
		| identifier_part_characters identifier_part_character	{}
		;
identifier_part_character : letter_character 	{}
		| decimal_digit_character 	{}
		| connecting_character 	{}
		| combining_character 	{}
		| formatting_character	{}
		;
letter_character : ?A Unicode character of classes Lu Ll Lt Lm Lo or Nl? 	{}
		| ?A unicode_escape_sequence representing a character of classes Lu Ll Lt Lm Lo or Nl?	{}
		;
combining_character : ?A Unicode character of classes Mn or Mc? 	{}
		| ?A unicode_escape_sequence representing a character of classes Mn or Mc?	{}
		;
decimal_digit_character : ?A Unicode character of the class Nd? 	{}
		| ?A unicode_escape_sequence representing a character of the class Nd?	{}
		;
connecting_character : ?A Unicode character of the class Pc? 	{}
		| ?A unicode_escape_sequence representing a character of the class Pc?	{}
		;
formatting_character : ?A Unicode character of the class Cf? 	{}
		| ?A unicode_escape_sequence representing a character of the class Cf?	{}
		;

/*B.1.7 Keywords*/ 
keyword :  'as' 	{}
		| BASE 	{}
		| BOOL 	{}
		| BREAK 	{}
		| CASE 	{}
		| CATCH 	{}
		| CHAR 	{}
		| CLASS 	{}
		| CONST 	{}
		| CONTINUE 	{}
		| DEFAULT 	{}
		| DO 	{}
		| ELSE 	{}
		| 'explicit' 	{}
		| FALSE 	{}
		| FINALLY  	{}
		| FOR 	{}
		| FOREACH 	{}
		| GOTO 	{}
		| IF 	{}
		| 'implicit' 	{}
		| IN 	{}
		| INT 	{}
		| 'is' 	{}
		| LONG 	{}
		| NAMESPACE 	{}
		| NEW 	{}
		| NULL 	{}
		| OBJECT	{}
		| PARAMS 	{}
		| PRIVATE 	{}
		| PROTECTED 	{}
		| PUBLIC 	{}
		| 'readonly' 	{}
		| REF 	{}
		| RETURN 	{}
		| STRING 	{}
		| STRUCT 	{}
		| SWITCH 	{}
		| THIS 	{}
		| THROW 	{}
		| TRUE 	{}
		| TRY 	{}
		| TYPEOF 	{}
		| UINT 	{}
		| ULONG 	{}
		| USING 	{}
		| VOID 	{}
		| WHILE	{}
		;

/*B.1.8 Literals*/ 
literal : boolean_literal 	{}
		| integer_literal 	{}
		| character_literal 	{}
		| string_literal 	{}
		| null_literal	{}
		;
boolean_literal : TRUE 	{}
		| FALSE	{}
		;
integer_literal : decimal_integer_literal 	{}
		| hexadecimal_integer_literal	{}
		;
decimal_integer_literal : decimal_digits 	{}
		| decimal_digits integer_type_suffix	{}
		;
decimal_digits : decimal_digit 	{}
		| decimal_digits decimal_digit	{}
		;
decimal_digit :	'0' 	{}
		| '1' 	{}
		| '2' 	{}
		| '3' 	{}
		| '4' 	{}
		| '5' 	{}
		| '6' 	{}
		| '7' 	{}
		| '8' 	{}
		| '9'	{}
		;
integer_type_suffix : 'U' 	{}
		| 'u' 	{}
		| 'L' 	{}
		| 'l' 	{}
		| 'UL' 	{}
		| 'Ul' 	{}
		| 'uL' 	{}
		| 'ul' 	{}
		| 'LU' 	{}
		| 'Lu' 	{}
		| 'lU' 	{}
		| 'lu'	{}
		;
hexadecimal_integer_literal : '0x' hex_digits 	{}
		| '0x' hex_digits integer_type_suffix 	{}
		| '0X' hex_digits 	{}
		| '0X' hex_digits integer_type_suffix	{}
		;
hex_digits : hex_digit 	{}
		| hex_digits hex_digit	{}
		;
hex_digit :	'0' 	{}
		| '1' 	{}
		| '2' 	{}
		| '3' 	{}
		| '4' 	{}
		| '5' 	{}
		| '6' 	{}
		| '7' 	{}
		| '8' 	{}
		| '9' 	{}
		| 'A' 	{}
		| 'B' 	{}
		| 'C' 	{}
		| 'D' 	{}
		| 'E' 	{}
		| 'F' 	{}
		| 'a' 	{}
		| 'b' 	{}
		| 'c' 	{}
		| 'd' 	{}
		| 'e' 	{}
		| 'f'	{}
		;
character_literal : "'" character "'"	{}
		;
character :	single_character 	{}
		| simple_escape_sequence 	{}
		| hexadecimal_escape_sequence 	{}
		| unicode_escape_sequence	{}
		;
single_character : ?Any character except ' (U+0027) \ (U+005C) and new_line_character?	{}
		;
simple_escape_sequence : " \’ “ 	{}
		| ‘ \” ‘ 	{}
		| ' \\ ' 	{}
		| ' \0 ' 	{}
		| ' \n ' 	{}
		| ' \r ' 	{}
		| ' \t '	{}
		;
hexadecimal_escape_sequence : '\x' hex_digit 	{}
		| '\x' hex_digit hex_digit 	{}
		| '\x' hex_digit hex_digit hex_digit 	{}
		| '\x' hex_digit hex_digit hex_digit hex_digit	{}
		;
string_literal : regular_string_literal 	{}
		| verbatim_string_literal	{}
		;
regular_string_literal : '"' '"' 	{}
		| '"' regular_string_literal_characters '"'	{}
		;
regular_string_literal_characters :	regular_string_literal_character 	{}
		| regular_string_literal_characters regular_string_literal_character	{}
		;
regular_string_literal_character : single_regular_string_literal_character 	{}
		| simple_escape_sequence 	{}
		| hexadecimal_escape_sequence 	{}
		| unicode_escape_sequence	{}
		;
single_regular_string_literal_character : ?Any character except " (U+0022) \ (U+005C) and new_line_character?	{}
		;
verbatim_string_literal : '@” ' ‘ “ ‘ 	{}
		| '@” ' [verbatim_string_literal_characters] ‘ “ ‘	{}
		;
verbatim_string_literal_characters : verbatim_string_literal_character 	{}
		| verbatim_string_literal_characters verbatim_string_literal_character	{}
		;
verbatim_string_literal_character :	single_verbatim_string_literal_character 	{}
		| quote_escape_sequence	{}
		;
single_verbatim_string_literal_character : ?any character except "?	{}
		;
quote_escape_sequence : ‘ “ “ ‘	{}
		;
null_literal :	NULL	{}
		;

/*B.1.9 Operators and punctuators*/ 
operator_or_punctuator : '{' 	{}
		| '}' 	{}
		| '[' 	{}
		| ']' 	{}
		| '(' 	{}
		| ')' 	{}
		| '.' 	{}
		| ',' 	{}
		| ':' 	{}
		| ';' 	{}
		| '+' 	{}
		| '-' 	{}
		| '*' 	{}
		| '/' 	{}
		| '%' 	{}
		| '&' 	{}
		| '|' 	{}
		| '^' 	{}
		| '!' 	{}
		| '~' 	{}
		| '=' 	{}
		| '<' 	{}
		| '>' 	{}
		| '?' 	{}
		| DQM 	{}
		| DCLN 	{}
		| INCR 	{}
		| DECR 	{}
		| RAND 	{}
		| ROR 	{}
		| '->' 	{}
		| REQ 	{}
		| RNE 	{}
		| LE 	{}
		| GE 	{}
		| APLUS 	{}
		| AMINUS 	{}
		| AMULT 	{}
		| ADIV 	{}
		| AMOD 	{}
		| AAND 	{}
		| AOR 	{}
		| ACARET 	{}
		| LSHIFT 	{}
		| LSHIFTEQ 	{}
		| '=>'	{}
		;
right_shift : RSHIFT	{}
		;
right_shift_assignment : RSHIFTEQ	{}
		;

/*B.1.10 Pre_processing directives*/ 
pp_directive :	pp_declaration 	{}
		| pp_line 	{}
		;
conditional_symbol : ?Any identifier_or_keyword except true or false?	{}
		;
pp_declaration : '#' DEFINE whitespace conditional_symbol pp_new_line 	{}
		| '#' whitespace DEFINE whitespace conditional_symbol pp_new_line 	{}
		| whitespace '#' DEFINE whitespace conditional_symbol pp_new_line 	{}
		| whitespace '#' whitespace DEFINE whitespace conditional_symbol pp_new_line 	{}
		| '#' UNDEF whitespace conditional_symbol pp_new_line 	{}
		| '#' whitespace UNDEF whitespace conditional_symbol pp_new_line 	{}
		| whitespace '#' UNDEF whitespace conditional_symbol pp_new_line 	{}
		| whitespace '#' whitespace UNDEF whitespace conditional_symbol pp_new_line	{}
		;
pp_new_line : new_line 	{}
		| single_line_comment new_line 	{}
		| whitespace new_line 	{}
		| whitespace single_line_comment new_line	{}
		;


/*B.2 Syntactic grammar*/ 

/*B.2.1 Basic concepts*/ 
namespace_name : namespace_or_type_name	{}
		;
type_name : namespace_or_type_name	{}
		;
namespace_or_type_name : identifier 	{}
		| identifier type_argument_list 	{}
		| namespace_or_type_name '.' identifier 	{}
		| namespace_or_type_name '.' identifier type_argument_list 	{}
		| qualified_alias_member	{}
		;

/*B.2.2 Types*/ 
type : value_type 	{}
		| reference_type 	{}
		| type_parameter	{}
		;
value_type : struct_type	{}
		;
struct_type : type_name 	{}
		| simple_type 	{}
		| nullable_type	{}
		;
simple_type : numeric_type 	{}
		| BOOL	{}
		;
numeric_type : integral_type 	{}
		| 'decimal'	{}
		;
integral_type : INT 	{}
		| UINT 	{}
		| LONG 	{}
		| ULONG 	{}
		| CHAR	{}
		;
nullable_type : non_nullable_value_type '?'	{}
		;
non_nullable_value_type : type	{}
		;
reference_type : class_type 	{}
		| interface_type 	{}
		| array_type	{}
		;
class_type : type_name 	{}
		| OBJECT 	{}
		| 'dynamic' 	{}
		| STRING	{}
		;
interface_type : type_name	{}
		;
type_argument_list : '<' type_arguments '>'	{}
		;
type_arguments : type_argument 	{}
		| type_arguments ',' type_argument	{}
		;
type_argument : type	{}
		;

/*B.2.3 Variables*/ 
variable_reference : expression	{}
		;

/*B.2.4 Expressions*/ 
argument_list : argument 	{}
		| argument_list ',' argument	{}
		;
argument : argument_value 	{}
		| argument_name argument_value	{}
		;
argument_name : identifier ':'	{}
		;
argument_value : expression 	{}
		| REF variable_reference 	{}
		;
primary_expression : primary_no_array_creation_expression 	{}
		| array_creation_expression	{}
		;
primary_no_array_creation_expression : literal 	{}
		| simple_name 	{}
		| parenthesized_expression 	{}
		| member_access 	{}
		| invocation_expression 	{}
		| element_access 	{}
		| this_access 	{}
		| base_access 	{}
		| post_increment_expression 	{}
		| post_decrement_expression 	{}
		| object_creation_expression 	{}
		| anonymous_object_creation_expression 	{}
		| typeof_expression 	{}
		| default_value_expression	{}
		;
simple_name : identifier 	{}
		| identifier type_argument_list	{}
		;
parenthesized_expression : '(' expression ')'	{}
		;
member_access : primary_expression '.' identifier 	{}
		| primary_expression '.' identifier type_argument_list 	{}
		| predefined_type '.' identifier 	{}
		| predefined_type '.' identifier type_argument_list 	{}
		| qualified_alias_member '.' identifier	{}
		;
predefined_type : BOOL 	{}
		| CHAR 	{}
		| 'decimal' 	{}
		| 'double' 	{}
		| 'float' 	{}
		| INT 	{}
		| LONG 	{}
		| OBJECT 	{}
		| STRING 	{}
		| UINT 	{}
		| ULONG 	{}
		| 'ushort'	{}
		;
invocation_expression : primary_expression '(' ')' 	{}
		| primary_expression '(' [argument_list] ')'	{}
		;
element_access : primary_no_array_creation_expression '[' expression_list ']'	{}
		;
expression_list : expression  	{}
		| expression_list ',' expression	{}
		;
this_access : THIS	{}
		;
base_access : BASE '.' identifier 	{}
		| BASE '[' expression_list ']'	{}
		;
post_increment_expression : primary_expression INCR	{}
		;
post_decrement_expression : primary_expression DECR	{}
		;
object_creation_expression : NEW type '(' ')' 	{}
		| NEW type '(' argument_list ')' 	{}
		| NEW type '(' ')' object_or_collection_initializer 	{}
		| NEW type '(' argument_list ')' object_or_collection_initializer 	{}
		| NEW type object_or_collection_initializer	{}
		;
object_or_collection_initializer : object_initializer 	{}
		| collection_initializer	{}
		;
object_initializer : '{' '}' 	{}
		| '{' member_initializer_list '}' 	{}
		| '{' member_initializer_list ',' '}'	{}
		;
member_initializer_list : member_initializer 	{}
		| member_initializer_list ',' member_initializer	{}
		;
member_initializer : identifier '=' initializer_value	{}
		;
initializer_value : expression 	{}
		| object_or_collection_initializer	{}
		;
collection_initializer : '{' element_initializer_list '}' 	{}
		| '{' element_initializer_list ',' '}'	{}
		;
element_initializer_list : element_initializer 	{}
		| element_initializer_list ',' element_initializer	{}
		;
element_initializer : non_assignment_expression 	{}
		| '{' expression_list '}'	{}
		;
array_creation_expression :	NEW non_array_type '[' expression_list ']' 	{}
		| NEW non_array_type '[' expression_list ']' rank_specifiers 	{}
		| NEW non_array_type '[' expression_list ']' array_initializer 	{}
		| NEW non_array_type '[' expression_list ']' rank_specifiers array_initializer 	{}
		| NEW array_type array_initializer 	{}
		| NEW rank_specifier array_initializer	{}
		;
anonymous_object_creation_expression : NEW anonymous_object_initializer	{}
		;
anonymous_object_initializer : '{' '}' 	{}
		| '{' member_declarator_list '}' 	{}
		| '{' member_declarator_list ',' '}'	{}
		;
member_declarator_list : member_declarator 	{}
		| member_declarator_list ',' member_declarator	{}
		;
member_declarator : simple_name 	{}
		| member_access 	{}
		| base_access 	{}
		| identifier '=' expression	{}
		;
typeof_expression : TYPEOF '(' type ')' 	{}
		| TYPEOF '(' unbound_type_name ')' 	{}
		| TYPEOF '(' VOID ')'	{}
		;
unbound_type_name : identifier 	{}
		| identifier generic_dimension_specifier 	{}
		| identifier DCLN identifier 	{}
		| identifier DCLN identifier generic_dimension_specifier 	{}
		| unbound_type_name '.' identifier 	{}
		| unbound_type_name '.' identifier generic_dimension_specifier	{}
		;
generic_dimension_specifier : '<' '>' 	{}
		| '<' [commas] '>'	{}
		;
commas : ',' 	{}
		| commas ','	{}
		;
default_value_expression : DEFAULT '(' type ')'	{}
		;
unary_expression : primary_expression 	{}
		| '+' unary_expression 	{}
		| '-' unary_expression 	{}
		| '!' unary_expression 	{}
		| '~' unary_expression 	{}
		| pre_increment_expression 	{}
		| pre_decrement_expression 	{}
		| cast_expression	{}
		;
pre_increment_expression : INCR unary_expression	{}
		;
pre_decrement_expression : DECR unary_expression	{}
		;
cast_expression : '(' type ')' unary_expression	{}
		;
multiplicative_expression :	unary_expression 	{}
		| multiplicative_expression '*' unary_expression 	{}
		| multiplicative_expression '/' unary_expression 	{}
		| multiplicative_expression '%' unary_expression	{}
		;
additive_expression : multiplicative_expression 	{}
		| additive_expression '+' multiplicative_expression 	{}
		| additive_expression '-' multiplicative_expression	{}
		;
shift_expression : additive_expression 	{}
		| shift_expression LSHIFT additive_expression 	{}
		| shift_expression right_shift additive_expression	{}
		;
relational_expression : shift_expression 	{}
		| relational_expression '<' shift_expression 	{}
		| relational_expression '>' shift_expression 	{}
		| relational_expression LE shift_expression 	{}
		| relational_expression GE shift_expression 	{}
		| relational_expression 'is' type 	{}
		| relational_expression 'as' type	{}
		;
equality_expression : relational_expression 	{}
		| equality_expression REQ relational_expression 	{}
		| equality_expression RNE relational_expression	{}
		;
and_expression : equality_expression 	{}
		| and_expression '&' equality_expression	{}
		;
exclusive_or_expression : and_expression 	{}
		| exclusive_or_expression '^' and_expression	{}
		;
inclusive_or_expression : exclusive_or_expression 	{}
		| inclusive_or_expression '|' exclusive_or_expression	{}
		;
conditional_and_expression : inclusive_or_expression 	{}
		| conditional_and_expression RAND inclusive_or_expression	{}
		;
conditional_or_expression : conditional_and_expression 	{}
		| conditional_or_expression ROR conditional_and_expression	{}
		;
null_coalescing_expression : conditional_or_expression 	{}
		| conditional_or_expression DQM null_coalescing_expression	{}
		;
conditional_expression : null_coalescing_expression 	{}
		| null_coalescing_expression '?' expression ':' expression	{}
		;
assignment : unary_expression assignment_operator expression	{}
		;
assignment_operator : '=' 	{}
		| APLUS 	{}
		| AMINUS 	{}
		| AMULT 	{}
		| ADIV 	{}
		| AMOD 	{}
		| AAND 	{}
		| AOR 	{}
		| ACARET 	{}
		| LSHIFTEQ 	{}
		| right_shift_assignment	{}
		;
expression : non_assignment_expression 	{}
		| assignment	{}
		;
non_assignment_expression : conditional_expression	{}
		;
constant_expression : expression	{}
		;
boolean_expression : expression	{}
		;

/*B.2.5 Statements*/ 
statement :	labeled_statement 	{}
		| declaration_statement 	{}
		| embedded_statement	{}
		;
embedded_statement : block 	{}
		| empty_statement 	{}
		| expression_statement 	{}
		| selection_statement 	{}
		| iteration_statement 	{}
		| jump_statement 	{}
		| try_statement 	{}
		| using_statement	{}
		;
block : '{' '}' 	{}
		| '{' [statement_list] '}'	{}
		;
statement_list : statement 	{}
		| statement_list statement	{}
		;
empty_statement : ';'	{}
		;
labeled_statement :	identifier ':' statement	{}
		;
declaration_statement :	local_variable_declaration ';'	 	{}
		| local_constant_declaration ';'	{}
		;
local_variable_declaration : local_variable_type local_variable_declarators	{}
		;
local_variable_type : type 	{}
		| 'var'	{}
		;
local_variable_declarators : local_variable_declarator 	{}
		| local_variable_declarators ',' local_variable_declarator	{}
		;
local_variable_declarator : identifier 	{}
		| identifier '=' local_variable_initializer	{}
		;
local_variable_initializer : expression 	{}
		| array_initializer	{}
		;
local_constant_declaration :  CONST type constant_declarators	{}
		;
expression_statement : statement_expression ';'	{}
		;
statement_expression : invocation_expression 	{}
		| object_creation_expression 	{}
		| assignment 	{}
		| post_increment_expression 	{}
		| post_decrement_expression 	{}
		| pre_increment_expression 	{}
		| pre_decrement_expression	{}
		;
selection_statement : if_statement 	{}
		| switch_statement	{}
		;
if_statement : IF '(' boolean_expression ')' embedded_statement 	{}
		| IF '(' boolean_expression ')' embedded_statement ELSE embedded_statement	{}
		;
switch_statement : SWITCH '(' expression ')' switch_block	{}
		;
switch_block : '{' '}' 	{}
		| '{' switch_sections '}'	{}
		;
switch_sections : switch_section 	{}
		| switch_sections switch_section	{}
		;
switch_section : switch_labels statement_list	{}
		;
switch_labels : switch_label 	{}
		| switch_labels switch_label	{}
		;
switch_label :CASE constant_expression ':' 	{}
		| DEFAULT ':'	{}
		;
iteration_statement : while_statement 	{}
		| do_statement 	{}
		| for_statement 	{}
		| foreach_statement	{}
		;
while_statement : WHILE '(' boolean_expression ')' embedded_statement	{}
		;
do_statement : DO embedded_statement WHILE '(' boolean_expression ')' ';'	{}
		;
for_statement : FOR '(' ';' ';' ')' embedded_statement 	{}
		| FOR '(' for_initializer ';' ';' ')' embedded_statement 	{}
		| FOR '(' ';' for_condition ';' ')' embedded_statement 	{}
		| FOR '(' ';' ';' for_iterator ')' embedded_statement 	{}
		| FOR '(' for_initializer ';' for_condition ';' ')' embedded_statement 	{}
		| FOR '(' for_initializer ';' ';' for_iterator ')' embedded_statement 	{}
		| FOR '(' ';' for_condition ';' for_iterator ')' embedded_statement 	{}
		| FOR '(' for_initializer ';' for_condition ';' for_iterator ')' embedded_statement	{}
		;
for_initializer : local_variable_declaration 	{}
		| statement_expression_list	{}
		;
for_condition : boolean_expression	{}
		;
for_iterator : statement_expression_list	{}
		;
statement_expression_list : statement_expression 	{}
		| statement_expression_list ',' statement_expression	{}
		;
foreach_statement : FOREACH '(' local_variable_type identifier IN expression ')' embedded_statement	{}
		;
jump_statement : break_statement 	{}
		| continue_statement 	{}
		| goto_statement 	{}
		| return_statement 	{}
		| throw_statement	{}
		;
break_statement : BREAK ';'	{}
		;
continue_statement : CONTINUE ';'	{}
		;
goto_statement : GOTO identifier ';' 	{}
		| GOTO CASE constant_expression ';' 	{}
		| GOTO DEFAULT ';'	{}
		;
return_statement : RETURN ';' 	{}
		| RETURN expression ';'	{}
		;
throw_statement : THROW ';' 	{}
		| THROW expression ';'	{}
		;
try_statement : TRY block catch_clauses 	{}
		| TRY block finally_clause 	{}
		| TRY block catch_clauses finally_clause	{}
		;
catch_clauses : general_catch_clause	{}
		;
general_catch_clause : CATCH block	{}
		;
finally_clause : FINALLY block	{}
		;
using_statement : USING '(' resource_acquisition ')' embedded_statement	{}
		;
resource_acquisition : local_variable_declaration 	{}
		| expression	{}
		;

/*B.2.6 Namespaces*/ 
compilation_unit : using_directives namespace_member_declarations 	{}
		| namespace_member_declarations 	{}
		| using_directives 	{}
		| epsilon	{}
		;
namespace_declaration :	NAMESPACE qualified_identifier namespace_body 	{}
		| NAMESPACE qualified_identifier namespace_body ';'	{}
		;
qualified_identifier :	identifier 	{}
		| qualified_identifier '.' identifier	{}
		;
namespace_body : '{' '}' 	{}
		| '{' namespace_member_declarations '}' 	{}
		| '{' using_directives '}' 	{}
		| '{' using_directives namespace_member_declarations '}'	{}
		;
using_directives : using_directive 	{}
		| using_directives using_directive	{}
		;
using_directive : using_alias_directive 	{}
		| using_namespace_directive	{}
		;
using_alias_directive : USING identifier '=' namespace_or_type_name ';'	{}
		;
using_namespace_directive : USING namespace_name ';'	{}
		;
namespace_member_declarations : namespace_member_declaration 	{}
		| namespace_member_declarations namespace_member_declaration	{}
		;
namespace_member_declaration : namespace_declaration 	{}
		| type_declaration	{}
		;
type_declaration : class_declaration 	{}
		| struct_declaration	{}
		;
qualified_alias_member : identifier DCLN identifier 	{}
		| identifier DCLN identifier type_argument_list	{}
		;

/*B.2.7 Classes;*/ 
class_declaration : CLASS identifier class_body 	{}
		| class_modifiers CLASS identifier class_body 	{}
		| CLASS identifier type_parameter_list class_body 	{}
		| CLASS identifier class_body class_body 	{}
		| CLASS identifier type_parameter_constraints_clauses class_body 	{}
		| CLASS identifier class_body ';' 	{}
		| class_modifiers CLASS identifier type_parameter_list class_body 	{}
		| class_modifiers CLASS identifier class_body class_body 	{}
		| class_modifiers CLASS identifier type_parameter_constraints_clauses class_body 	{}
		| class_modifiers CLASS identifier class_body ';' 	{}
		| CLASS identifier type_parameter_list class_body class_body 	{}
		| CLASS identifier type_parameter_list type_parameter_constraints_clauses class_body 	{}
		| CLASS identifier type_parameter_list class_body ';' 	{}
		| CLASS identifier class_body type_parameter_constraints_clauses class_body 	{}
		| CLASS identifier class_body class_body ';' 	{}
		| CLASS identifier type_parameter_constraints_clauses class_body ';' 	{}
		| class_modifiers CLASS identifier type_parameter_list class_body class_body 	{}
		| class_modifiers CLASS identifier type_parameter_list type_parameter_constraints_clauses class_body 	{}
		| class_modifiers CLASS identifier type_parameter_list class_body ';' 	{}
		| class_modifiers CLASS identifier class_body type_parameter_constraints_clauses class_body 	{}
		| class_modifiers CLASS identifier class_body class_body ';' 	{}
		| class_modifiers CLASS identifier type_parameter_constraints_clauses class_body ';' 	{}
		| CLASS identifier type_parameter_list class_body type_parameter_constraints_clauses class_body 	{}
		| CLASS identifier type_parameter_list class_body class_body ';' 	{}
		| CLASS identifier class_body type_parameter_constraints_clauses class_body ';' 	{}
		| class_modifiers CLASS identifier type_parameter_list class_body type_parameter_constraints_clauses class_body 	{}
		| class_modifiers CLASS identifier type_parameter_list class_body class_body ';' 	{}
		| class_modifiers CLASS identifier type_parameter_list type_parameter_constraints_clauses class_body ';' 	{}
		| class_modifiers CLASS identifier class_body type_parameter_constraints_clauses class_body ';' 	{}
		| CLASS identifier type_parameter_list class_body type_parameter_constraints_clauses class_body ';' 	{}
		| class_modifiers CLASS identifier type_parameter_list class_body type_parameter_constraints_clauses class_body ';'	{}
		;
class_modifiers : class_modifier 	{}
		| class_modifiers class_modifier	{}
		;
class_modifier : NEW 	{}
		| PUBLIC 	{}
		| PROTECTED 	{}
		| PRIVATE 	{}
		;
type_parameter_list : '<' type_parameters '>'	{}
		;
type_parameters : type_parameter 	{}
		| type_parameters ',' type_parameter	{}
		;
type_parameter : identifier	{}
		;
class_base : ':' class_type	{}
		;
type_parameter_constraints_clauses : type_parameter_constraints_clause 	{}
		| type_parameter_constraints_clauses type_parameter_constraints_clause	{}
		;
type_parameter_constraints_clause : 'where' type_parameter ':' type_parameter_constraints	{}
		;
type_parameter_constraints : primary_constraint 	{}
		| secondary_constraints 	{}
		| constructor_constraint 	{}
		| primary_constraint ',' secondary_constraints 	{}
		| primary_constraint ',' constructor_constraint 	{}
		| secondary_constraints ',' constructor_constraint 	{}
		| primary_constraint ',' secondary_constraints ',' constructor_constraint	{}
		;
primary_constraint : class_type 	{}
		| CLASS 	{}
		| STRUCT	{}
		;
secondary_constraints : type_parameter 	{}
		| secondary_constraints ',' type_parameter	{}
		;
constructor_constraint : NEW '(' ')'	{}
		;
class_body : '{' '}' 	{}
		| '{' class_member_declarations '}'	{}
		;
class_member_declarations : class_member_declaration 	{}
		| class_member_declarations class_member_declaration	{}
		;
class_member_declaration : constant_declaration 	{}
		| field_declaration 	{}
		| method_declaration 	{}
		| indexer_declaration 	{}
		| constructor_declaration 	{}
		| destructor_declaration 	{}
		| |type_declaration	{}
		;
constant_declaration : CONST type constant_declarators ';' 	{}
		| constant_modifiers CONST type constant_declarators ';'	{}
		;
constant_modifiers : constant_modifier 	{}
		| constant_modifiers constant_modifier	{}
		;
constant_modifier : NEW 	{}
		| PUBLIC 	{}
		| PROTECTED 	{}
		| PRIVATE	{}
		;
constant_declarators : constant_declarator  	{}
		| constant_declarators ',' constant_declarator	{}
		;
constant_declarator : identifier '=' constant_expression	{}
		;
field_declaration : type variable_declarators ';' 	{}
		| field_modifiers type variable_declarators ';'	{}
		;
field_modifiers : field_modifier 	{}
		| field_modifiers field_modifier	{}
		;
field_modifier : NEW 	{}
		| PUBLIC 	{}
		| PROTECTED 	{}
		| PRIVATE 	{}
		| 'readonly'	{}
		;
variable_declarators : variable_declarator 	{}
		| variable_declarators ',' variable_declarator	{}
		;
variable_declarator : identifier 	{}
		| identifier '=' variable_initializer;	
variable_initializer : expression 	{}
		| array_initializer	{}
		;
method_declaration : method_header method_body	{}
		;
method_header : return_type member_name '(' ')' 	{}
		| method_modifiers return_type member_name '(' ')' 	{}
		| return_type member_name type_parameter_list '(' ')' 	{}
		| return_type member_name '(' formal_parameter_list ')' 	{}
		| return_type member_name '(' ')' type_parameter_constraints_clauses 	{}
		| method_modifiers return_type member_name type_parameter_list '(' ')' 	{}
		| method_modifiers return_type member_name '(' formal_parameter_list ')' 	{}
		| method_modifiers return_type member_name '(' ')' type_parameter_constraints_clauses 	{}
		| return_type member_name type_parameter_list '(' formal_parameter_list ')' 	{}
		| return_type member_name type_parameter_list '(' ')' type_parameter_constraints_clauses 	{}
		| return_type member_name '(' formal_parameter_list ')' type_parameter_constraints_clauses 	{}
		| return_type member_name type_parameter_list '(' formal_parameter_list ')' type_parameter_constraints_clauses 	{}
		| method_modifiers return_type member_name '(' formal_parameter_list ')' type_parameter_constraints_clauses 	{}
		| method_modifiers return_type member_name type_parameter_list '(' ')' type_parameter_constraints_clauses 	{}
		| method_modifiers return_type member_name type_parameter_list '(' formal_parameter_list ')' 	{}
		| method_modifiers return_type member_name type_parameter_list '(' formal_parameter_list ')' type_parameter_constraints_clauses	{}
		;
method_modifiers : method_modifier 	{}
		| method_modifiers method_modifier	{}
		;
method_modifier : NEW 	{}
		| PUBLIC 	{}
		| PROTECTED 	{}
		| PRIVATE ;	
return_type : type 	{}
		| VOID	{}
		;
member_name : identifier 	{}
		| interface_type '.' identifier	{}
		;
method_body : block 	{}
		| ';'	{}
		;
formal_parameter_list : fixed_parameters 	{}
		| fixed_parameters ',' parameter_array 	{}
		| parameter_array	{}
		;
fixed_parameters : fixed_parameter 	{}
		| fixed_parameters ',' fixed_parameter	{}
		;
fixed_parameter : type identifier 	{}
		| parameter_modifier type identifier 	{}
		| type identifier default_argument 	{}
		| parameter_modifier type identifier default_argument	{}
		;
default_argument : '=' expression	{}
		;
parameter_modifier : REF 	{}
		| THIS	{}
		;
parameter_array : PARAMS array_type identifier	{}
		;
constructor_declaration : constructor_declarator constructor_body 	{}
		| constructor_modifiers constructor_declarator constructor_body	{}
		;
constructor_modifiers : constructor_modifier 	{}
		| constructor_modifiers constructor_modifier	{}
		;
constructor_modifier : PUBLIC 	{}
		| PROTECTED 	{}
		| PRIVATE	{}
		;
constructor_declarator : identifier '(' ')' 	{}
		| identifier '(' ')' constructor_initializer 	{}
		| identifier '(' formal_parameter_list ')' 	{}
		| identifier '(' formal_parameter_list ')' constructor_initializer	{}
		;
constructor_initializer : ':' BASE '(' ')' 	{}
		| ':' BASE '(' argument_list ')' 	{}
		| ':' THIS '(' ')' 	{}
		| ':' THIS '(' argument_list ')'	{}
		;
constructor_body : block 	{}
		| ';'	{}
		;
destructor_declaration : '~' identifier '(' ')' destructor_body	{}
		;
destructor_body : block 	{}
		| ';'	{}
		;

/*B.2.8 Structs*/ 
struct_declaration : STRUCT identifier struct_body 	{}
		| struct_modifiers STRUCT identifier struct_body 	{}
		| STRUCT identifier type_parameter_list struct_body 	{}
		| STRUCT identifier type_parameter_constraints_clauses struct_body 	{}
		| STRUCT identifier struct_body ';' 	{}
		| struct_modifiers STRUCT identifier type_parameter_list struct_body 	{}
		| struct_modifiers STRUCT identifier type_parameter_constraints_clauses struct_body 	{}
		| struct_modifiers STRUCT identifier struct_body ';' 	{}
		| STRUCT identifier type_parameter_list type_parameter_constraints_clauses struct_body 	{}
		| STRUCT identifier type_parameter_list struct_body ';' 	{}
		| STRUCT identifier type_parameter_constraints_clauses struct_body ';' 	{}
		| STRUCT identifier type_parameter_list type_parameter_constraints_clauses struct_body ';' 	{}
		| struct_modifiers STRUCT identifier type_parameter_constraints_clauses struct_body ';' 	{}
		| struct_modifiers STRUCT identifier type_parameter_list struct_body ';' 	{}
		| struct_modifiers STRUCT identifier type_parameter_list type_parameter_constraints_clauses struct_body 	{}
		| struct_modifiers STRUCT identifier type_parameter_list type_parameter_constraints_clauses struct_body ';'	{}
		;
struct_modifiers : struct_modifier 	{}
		| struct_modifiers struct_modifier	{}
		;
struct_modifier : NEW 	{}
		| PUBLIC 	{}
		| PROTECTED 	{}
		| PRIVATE	{}
		;
struct_body : '{' '}' 	{}
		| '{' [struct_member_declarations] '}'	{}
		;
struct_member_declarations : struct_member_declaration 	{}
		| struct_member_declarations struct_member_declaration	{}
		;
struct_member_declaration : constant_declaration 	{}
		| field_declaration 	{}
		| method_declaration 	{}
		| event_declaration 	{}
		| constructor_declaration 	{}
		| type_declaration	{}
		;

/*B.2.9 Arrays*/ 
array_type : non_array_type rank_specifier	{}
		;
non_array_type : type	{}
		;
rank_specifier : '[' ']' 	{}
		| '[' dim_separator ']'	{}
		;
dim_separator : ','	{}
		;
array_initializer : '{' '}' 	{}
		| '{' variable_initializer_list '}' 	{}
		| '{' variable_initializer_list ',' '}'	{}
		;
variable_initializer_list : variable_initializer 	{}
		| variable_initializer_list ',' variable_initializer	{}
		;

%%	

int main(void){
	yyparse();
	return 0;
}