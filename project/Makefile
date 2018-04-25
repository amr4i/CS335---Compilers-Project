all:
	flex src/lexer.lex
	bison -yd src/parser.ypp
	g++ -std=c++11 -w y.tab.c y.tab.h -ly lex.yy.c -lfl -o bin/compiler
	rm lex.yy.c y.tab.h y.tab.c
clean:
	rm bin/* 
