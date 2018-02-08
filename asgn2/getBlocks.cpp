#include "Block.cpp"

vector<Block> blocks;

void getBlocks(){

	vector<TAC*>::iterator it;
	set<int> leaders;
	int lastLineNum, lineNum;
	string opr;
	TAC* tacInstr;
	
	leaders.insert(1);

	it = IR.end();
	it--;
	tacInstr = (*it);
	lastLineNum = tacInstr->lineNum;

	for(it=IR.begin(); it!=IR.end(); it++)
	{
		tacInstr = (*it);
		lineNum = tacInstr->lineNum; 
		opr = tacInstr->op;

		if(opr == "goto" || opr == "ifgoto") {
			if(lineNum<lastLineNum) { leaders.insert(lineNum+1); }

		} else if(op == "callint" || op == "callvoid"){
			if(lineNum<lastLineNum) { leaders.insert(lineNum+1); }

		} else if(op == "ret" || op == "scan" || op == "print"){
			if(lineNum<lastLineNum) { leaders.insert(lineNum+1); }

		} else if(op == "label"){
			if(lineNum<=lastLineNum) { leaders.insert(lineNum); }

		}
	}


	set<int>::iterator itt, lim, ntt;
	
	lim = leaders.end();
	lim--;
	for(itt=leaders.begin(); itt != lim; itt++)
	{
		ntt = itt;
		ntt++;
		blocks.push_back(new Block(*itt, (*ntt)-1) );
	}
	blocks.push_back(new Block(*itt, lastLineNum)); 
}