#include "config.h"

class Block{
public:
	Block(int s, int e)
	{
		startLine = s;
		endLine = e;
	}
	int startLine, endLine;
	void computeNextUse();

private:
	map < string, pair <string, string > > varStack;

};

