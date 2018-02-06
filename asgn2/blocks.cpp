#include "blocks.h"

vector< pair<int, int> > getBlocks(){

	vector< pair<int, int> > blocks;
	vector< vector<string> >::iterator it;
	set<int> leaders;
	int target, lastLineNum;
	string st;
	
	leaders.insert(1);

	it = ir.end();
	it--;
	st = (*it)[0];

	stringstream(st) >> lastLineNum;

	for(it=ir.begin(); it!=ir.end(); it++)
	{
		int lineNum;

		st = (*it)[0];
		stringstream(st) >> lineNum; 
		string op = (*it)[1];

		if(op == "goto")
		{
			st = (*it)[2];
			stringstream(st) >> target; 
			leaders.insert(target);

			if(lineNum<lastLineNum) { leaders.insert(lineNum+1); }

		} else if(op == "ifgoto")
		{
			st = (*it)[3];
			stringstream(st) >> target; 
			leaders.insert(target);

			if(lineNum<lastLineNum) { leaders.insert(lineNum+1); }

		} else if(op == "callint" || op == "callvoid")
		{
			leaders.insert(lineNum+1);

		} else if(op == "ret" || op == "scan" || op == "print")
		{
			if(lineNum<lastLineNum) { leaders.insert(lineNum+1); }

		} else if(op == "label")
		{
			if(lineNum<lastLineNum) { leaders.insert(lineNum); }

		}
	}


	set<int>::iterator itt, lim, ntt;
	
	lim = leaders.end();
	lim--;
	for(itt=leaders.begin(); itt != lim; itt++)
	{
		ntt = itt;
		ntt++;
		blocks.push_back(make_pair(*itt, (*ntt)-1));
	}
	
	blocks.push_back(make_pair(*itt, lastLineNum)); 
	
	return blocks;
}