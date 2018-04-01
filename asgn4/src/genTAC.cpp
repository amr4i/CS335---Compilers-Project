#include "IR.h"

struct genNode{

	string place;
	string type;
	bool isLit;
	int int_val;
	char char_val;

	vector<TAC*> code;

	void gen2OpCode(string op, genNode* s1, genNode* s2, int lineNum){
		if(op=='+' || op=='-'){
			TAC* tac = new TAC();
			Symbol* temp = getTemp();
			tac->op = op;
			tac->opType = 3;
			tac->dest = temp;
			if(s1->isLit && s2->isLit){
				if(s1->type=="int" && s2->type=="int"){
					tac->isInt1 = true;
					tac->isInt2 = true;
					tac->l1 = s1->place;
					tac->l2 = s2->place;
					code.pb(tac);
					return;
				}
				else
					printf("Error: Incompatible operands to operator %s near line %d", op, lineNum);
			}
			else if(s1->isLit && !s2->isLit){
				if(s1->type == "int"){
					if(s2->type=="int"){
						
					}					
				}
			}
			Symbol* sym1 = ST.get(s1->place);
			Symbol* sym2 = ST.get(s2->place);
			if(sym1==NULL){
				printf("Error: Symbol %s not defined in scope.", s1)
			} else if(sym2==NULL){
				printf("Error: Symbol %s not defined in scope.", s2)
			}
			if((sym1->type=="int" || sym1->type=="long" || sym1->type=="char" || sym1->type=="uint" || sym1->type=="ulong") &&
				(sym2->type=="int" || sym2->type=="long" || sym2->type=="char" || sym2->type=="uint" || sym2->type=="ulong") ){
				
				
				
			}
		}
	}
}