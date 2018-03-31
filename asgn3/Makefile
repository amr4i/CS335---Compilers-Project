all:
	flex src/asgn3.lex
	bison -ydv src/asgn3.ypp
	g++ -std=gnu++0x -Wall y.tab.c y.tab.h -ly lex.yy.c -lfl -o bin/asgn3
	g++ src/toHTML.cpp -o bin/toHTML
	cp src/finalScript.sh bin/parser
	chmod +x bin/parser
	rm y.tab.h y.tab.c lex.yy.c y.output
clean:
	rm bin/* *.html
