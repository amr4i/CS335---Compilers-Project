#include "IR.h"

struct genListNode{

	string place;
	string placeType;
	vector<TAC*> codeTAC;

	void gen2OpCode(string op, string s1, string s2){
		if(op=='+'){
			Symbol* sym1 = ST.get(s1);
			Symbol* sym2 = ST.get(s2);
			if((sym1->type=="int" || sym1->type=="long" || sym1->type=="char" || sym1->type=="uint" || sym1->type=="ulong") &&
				(sym2->type=="int" || sym2->type=="long" || sym2->type=="char" || sym2->type=="uint" || sym2->type=="ulong") ){
				Symbol* temp = getTemp();
				
			}
		}
	}
}