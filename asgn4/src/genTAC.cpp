#include "IR.h"

struct genNode{

	string place;
	string type;
	bool isLit;

	genNode(){
		place = "";
		type = "";
		isLit = false;
	}

	vector <TAC*> code;
};


string getNewLabel(){
	string labelName = "label_"+to_string(labelCounter);
	labelCounter+=1;
	symTable.AddVar(labelName, "label", "label", labelName.size());
	return labelName;
}


void gen2OpCode(genNode* d, string op = "", genNode* s1= NULL, genNode* s2 = NULL, int lineNum = -1){
	if(op=="+" || op=="-"){
		TAC* tac = new TAC();
		string temptype;
		tac->op = op;
		tac->opType = 3;
		if(s1->isLit && s2->isLit){
			tac->isInt1 = true;
			tac->isInt2 = true;
			tac->l1 = s1->place;
			tac->l2 = s2->place;
		}
		else if(s1->isLit && !s2->isLit){
			tac->isInt1 = true;
			tac->l1 = s1->place;
			Symbol* sym2 = symTable.get(s2->place);
			if(sym2==NULL){
				printf("Error: Symbol %s not defined in scope.", s2->place);
				exit(1);
			}
			tac->opd2 = symTable.get(sym2);	
		}
		else if(!s1->isLit && s2->isLit){
			tac->isInt2 = true;
			tac->l2 = s2->place;
			Symbol* sym1 = symTable.get(s1->place);
			if(sym1==NULL){
				printf("Error: Symbol %s not defined in scope.", s1->place);
				exit(1);
			}
			tac->opd1 = symTable.get(sym1);	
		}	
		else{
			Symbol* sym1 = symTable.get(s1->place);
			if(sym1==NULL){
				printf("Error: Symbol %s not defined in scope.", s1->place);
				exit(1);
			}
			tac->opd1 = symTable.get(sym1);	
			Symbol* sym2 = symTable.get(s2->place);
			if(sym2==NULL){
				printf("Error: Symbol %s not defined in scope.", s2->place);
				exit(1);
			}
			tac->opd2 = symTable.get(sym2);	
		}			
		
		// Type-Checking
		if (s1->type == "char"){
			if(s2->type=="int")		temptype="int";
			else if(s2->type == "long")		temptype=="long";
			else{
				printf("Error: Incompatible operands to operator %s near line %d", op, lineNum);
				exit(1);
			}
		}
		else if(s1->type == "int"){
			if(s2->type=="char" || s2->type=="int")		temptype="int";
			else if(s2->type=="long")		temptype="long";
			else{
				printf("Error: Incompatible operands to operator %s near line %d", op, lineNum);
				exit(1);
			}
		}	
		else if(s1->type == "long"){
			if(s2->type=="char" || s2->type=="int" || s2->type=="long")	temptype="long";
			else{
				printf("Error: Incompatible operands to operator %s near line %d", op, lineNum);
				exit(1);
			}
		}

		string tempName = symTable.curEnv->genTemp(temptype);
		Symbol* temp = symTable.get(tempName);
		d->place = temp->name;
		d->type = temp->type;
		tac->dest = temp;
		d->code.pb(tac);
	}
	
	else if(op == "*" || op=="/" || op =="%"){
	
	}

	// TO DO: ALL OTHER CASES WHERE get2OpCode() HAS BEEN USED. 
	return;
}

// helper function used in getCEcode()
string equal_compatible(string s1, string s2){
	if(s1=="char"){
		if(s2=="char")	return "char";
		else if(s2=="int") return "int";
		else if(s2=="long") return "long";
		else return "None";
	}
	else if(s1=="int"){
		if (s2=="char" || s2=="int") return "int";
		else if(s2=="long") return "long";
		else return "None";
	}
	else if(s1=="long"){
		if(s2=="char"||s2=="int"||s2=="long") return "long";
		else return "None";
	}
	else if(s1==s2)	return s1;
	else return "None";
}

void getCECode(genNode* d, genNode* c, genNode* s1, genNode* s2, int lineNum){
	d->code = c->code;
	Symbol* temp = genTemp();
	d->place = temp->name;
	d->type = equal_compatible(s1->type, s2->type);
	if(d->type=="None" || d->type==""){
		printf("Error: Incompatible types to conditional expression near line %d", op, lineNum);
		exit(1);
	}
	TAC* tac1 = new TAC();	TAC* tac2 = new TAC();
	TAC* tac3 = new TAC();	TAC* tac4 = new TAC();
	TAC* tac5 = new TAC();	TAC* tac6 = new TAC();
	TAC* tac7 = new TAC(); 	TAC* tac8 = new TAC();
	// getNewLabel() has to generate a new label name, create a symbol with that name, and type "label" and add it to the symbol table, and return 
	// the name of this new symbol, as a string. 
	string newLabel1 = getNewLabel();			
	string newLabel2 = getNewLabel();
	string newLabel3 = getNewLabel();
	tac1->op = "label"; tac1->target = newLabel1;
	tac2->op = "label"; tac2->target = newLabel2;
	tac3->op = "ifgoto"; tac3->dest = symTable.get(c->place); tac3->target = newLabel1;
	tac4->op = "goto"; tac4->target = newLabel2;
	tac5->op = "goto"; tac5->target = newLabel3;
	tac6->op = "label"; tac6->target = newLabel3;
	tac7->op = "="; tac7->dest=temp;
	if(s1->isLit){
		tac7->isInt1=true;
		tac7->l1=s1->place;
	}
	else 	tac7->opd1 = symTable.get(s1->place);

	tac8->op = "="; tac8->dest=temp;
	if(s2->isLit){
		tac8->isInt1=true;
		tac8->l1=s2->place;
	}
	else 	tac8->opd1 = symTable.get(s2->place);

	d->code.pb(tac3); d->code.pb(tac4);
	d->code.pb(tac1);
	d->code.insert(d->code.end(), s1->code.begin(), s1->code.end());
	d->code.pb(tac7);
	d->code.pb(tac5);
	d->code.pb(tac2);
	d->code.insert(d->code.end(), s1->code.begin(), s1->code.end());
	d->code.pb(tac8);
	d->code.pb(tac6);
	return;
}

void getPreUnaryOpCode(string op, genNode* d, genNode* s, int lineNum){
	TAC* tac = new TAC();
	Symbol* sym = symTable.get(d->place);
	tac->opd1 = sym;
	tac->dest = sym;
	tac->isInt2 = true; tac->l2 = "1";
	if(op=="++")	tac->op="+"; else	tac->op="-";
	d->code.insert(d->code.begin(), tac);
}

