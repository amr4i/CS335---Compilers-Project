all:
	flex src/asgn3.lex
	bison -ydt src/asgn3.ypp
	g++ -std=gnu++0x -Wall y.tab.c y.tab.h -ly lex.yy.c -lfl -o bin/asgn3
	rm y.tab.h y.tab.c lex.yy.c
clean:
	rm -r bin/*
