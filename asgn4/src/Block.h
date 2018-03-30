#include "config.h"
#include "NextUseTable.h"

class Block{
public:
	
	int startLine, endLine;
	Block(int s, int e);
	void computeNextUse();

private:
	map < string, pair <string, int > > varStack;
	map < string, bool > visited;

};


