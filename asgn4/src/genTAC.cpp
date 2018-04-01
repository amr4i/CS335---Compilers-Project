#include "IR.h"

struct genNode{

	string place;
	string type;
	bool isLit;

	genNode(){
		string = "";
		string = "";
		isLit = false;
	}

	vector<TAC*> code;
}

void gen2OpCode(genNode* d, string op, genNode* s1, genNode* s2, int lineNum){
	if(op=='+' || op=='-'){
		TAC* tac = new TAC();
		Symbol* temp = getTemp();
		d->place = temp->name;
		tac->op = op;
		tac->opType = 3;
		tac->dest = temp;
		if(s1->isLit && s2->isLit){
			tac->isInt1 = true;
			tac->isInt2 = true;
			tac->l1 = s1->place;
			tac->l2 = s2->place;
		}
		else if(s1->isLit && !s2->isLit){
			tac->isInt1 = true;
			tac->l1 = s1->place;
			Symbol* sym2 = ST.get(s2->place);
			if(sym2==NULL){
				printf("Error: Symbol %s not defined in scope.", s2->place)
				exit();
			}
			tac->opd2 = ST.get(sym2);	
		}
		else if(!s1->isLit && s2->isLit){
			tac->isInt2 = true;
			tac->l2 = s2->place;
			Symbol* sym1 = ST.get(s1->place);
			if(sym1==NULL){
				printf("Error: Symbol %s not defined in scope.", s1->place)
				exit();
			}
			tac->opd1 = ST.get(sym1);	
		}	
		else{
			Symbol* sym1 = ST.get(s1->place);
			if(sym1==NULL){
				printf("Error: Symbol %s not defined in scope.", s1->place)
				exit();
			}
			tac->opd1 = ST.get(sym1);	
			Symbol* sym2 = ST.get(s2->place);
			if(sym2==NULL){
				printf("Error: Symbol %s not defined in scope.", s2->place)
				exit();
			}
			tac->opd2 = ST.get(sym2);	
		}			
		
		// Type-Checking
		if (s1->type = "char"){
			if(s2->type=="int")		temp->type="int";
			else if(s2->type == "long")		temp->type=="long";
			else{
				printf("Error: Incompatible operands to operator %s near line %d", op, lineNum);
				exit();
			}
		}
		else if(s1->type == "int"){
			if(s2->type=="char" || s2->type=="int")		temp->type="int";
			else if(s2->type=="long")		temp->type="long";
			else{
				printf("Error: Incompatible operands to operator %s near line %d", op, lineNum);
				exit();
			}
		}	
		else if(s1->type == "long"){
			if(s2->type=="char" || s2->type=="int" || s2->type=="long")	temp->type="long";
			else{
				printf("Error: Incompatible operands to operator %s near line %d", op, lineNum);
				exit();
			}
		}
		d->type = temp->type;
		d->code.pb(tac);
		ST.insert(temp);			
	}
	
	else if(op == "*" || op=="/" || op==="%"){
	
	}

	//TO DO: ALL OTHER CASES.
	return;
}

void getCECode(genNode* d, genNode* c, genNode* s1, genNode* s2, int lineNum){
	d->code = c->code;
	TAC* tac = new TAC();
	string newLabel1 = new getNewLabel();
	string newLabel2 = new getNewLabel();
	
}
