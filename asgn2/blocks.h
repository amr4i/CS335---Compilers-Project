#include "IR.cpp"
#include <sstream>
#include <iterator>

class Block{
	int s, e;
	map < string, pair <string, string > > varStack;

	void computeNextUse();
};

vector< pair<int, int> > getBlocks();