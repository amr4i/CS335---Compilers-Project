#include "blocks.h"

vector< pair<int, int> > getBlocks(){
	vector< pair<int, int> > blocks;
	vector< vector<string> >::iterator it;
	set<int> leaders;
	leaders.insert(1);
	int target;
	for(it=ir.begin(); it!=ir.end(); it++){
		int lineNum = (*it).first[0];
		string op = (*it).first[1];
		if(op.equals('goto')){
			target = it->first[2];
			leaders.insert(target);
			leader.insert(lineNum+1);
		} else if(op.equals('ifgoto')){
			target = it->first[3];
			leaders.insert(target);
			leader.insert(lineNum+1);
		} else if(op.equals('callint') || op.equals('callvoid')){
			leaders.insert(lineNum+1);
		} else if(op.equals('ret') || op.equals('scan') || op.equals('print')){
			leaders.insert(lineNum+1);
		} else if(op.equals('label')){
			leaders.insert(lineNum);
		}
	}
	set<int>::iterator itt = leaders.begin();
	while(itt!=leaders.end()-1){
		blocks.push_back(make_pair(*itt, (*(itt+1))-1));
	}
	it = ir.end()-1;
	lastLineNum = it->first[0];
	blocks.push_back(make_pair(*itt, lastLineNum)); 
	return blocks;
}