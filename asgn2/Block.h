#include "IR.cpp"

class Block{
	int s, e;
	map < string, pair <string, string > > varStack;

	void computeNextUse();
};

