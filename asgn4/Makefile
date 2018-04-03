all:
	flex src/lexer.lex
	bison -ydv src/parser.ypp
	g++ -std=gnu++0x -w y.tab.c y.tab.h -ly lex.yy.c -lfl -o bin/asgn4
	#g++ src/toHTML.cpp -o bin/toHTML
	#cp src/finalScript.sh bin/parser
	#chmod +x bin/parser
	#rm y.tab.h y.tab.c lex.yy.c y.output
clean:
	rm bin/* src/.parser.y.swp *.html
