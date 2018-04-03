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

void printTAC(genNode* node){
	int siz = node->code.size();
	fori(0, siz){
		cout << "\t" << node->code[i]->op << " ";

		cout << node->code[i]->dest->name << " ";

		if(isInt1)	cout << node->code[i]->l1 << " ";
		else	cout << node->code[i]->opd1->name << " ";

		if(isInt2)	cout << node->code[i]->l2 << " ";
		else	cout << node->code[i]->opd2->name << " ";

		cout << "\n";
	}
}

string getNewLabel(){
	string labelName = "label_"+to_string(labelCounter);
	labelCounter+=1;
	ST->AddVar(labelName, "label", "label", labelName.size());
	return labelName;
}


void gen2OpCode(genNode* d, string op = "", genNode* s1= NULL, genNode* s2 = NULL, int lineNum = -1){
	if(op=="+" || op=="-" || op=="*" || op=="/" || op=="%" || op=="&" || op=="|" ||
	 op=="^" || op=="<<" || op==">>" || op=="==" || op=="<" || op==">" || op=="!=" || op=="<=" || op==">="){
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
			Symbol* sym2 = ST->GetVar(s2->place);
			if(sym2==NULL){
				printf("Error: Symbol %s not defined in scope.", s2->place);
				exit(1);
			}
			tac->opd2 = ST->GetVar(sym2->name);	
		}
		else if(!s1->isLit && s2->isLit){
			tac->isInt2 = true;
			tac->l2 = s2->place;
			Symbol* sym1 = ST->GetVar(s1->place);
			if(sym1==NULL){
				printf("Error: Symbol %s not defined in scope.", s1->place);
				exit(1);
			}
			tac->opd1 = ST->GetVar(sym1->name);	
		}	
		else{
			Symbol* sym1 = ST->GetVar(s1->place);
			if(sym1==NULL){
				printf("Error: Symbol %s not defined in scope.", s1->place);
				exit(1);
			}
			tac->opd1 = ST->GetVar(sym1->name);	
			Symbol* sym2 = ST->GetVar(s2->place);
			if(sym2==NULL){
				printf("Error: Symbol %s not defined in scope.", s2->place);
				exit(1);
			}
			tac->opd2 = ST->GetVar(sym2->name);	
		}			
		
		// Type-Checking
		if (s1->type == "char"){
			if(s2->type=="char" || s2->type=="int")		temptype="int";
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
		else {
			printf("Error: Incompatible operands to operator %s near line %d", op, lineNum);
			exit(1);
		}

		string tempName = ST->GenTemp();
		Symbol* temp = ST->GetVar(tempName);
		d->place = temp->name;
		temp->type = temptype;
		d->type = temp->type;
		tac->dest = temp;
		d->code.pb(tac);
	}
	
	// else if(op == "*" || op=="/" || op =="%"){
	// 	TAC* tac = new TAC();
	// 	string temptype;
	// 	tac->op = op;
	// 	tac->opType = 3;
	// 	if(s1->isLit && s2->isLit){
	// 		tac->isInt1 = true;
	// 		tac->isInt2 = true;
	// 		tac->l1 = s1->place;
	// 		tac->l2 = s2->place;
	// 	}
	// 	else if(s1->isLit &.& !s2->isLit){
	// 		tac->isInt1 = true;
	// 		tac->l1 = s1->place;
	// 		Symbol* sym2 = ST->GetVar(s2->place);
	// 		if(sym2==NULL){
	// 			printf("Error: Symbol %s not defined in scope.", s2->place);
	// 			exit(1);
	// 		}
	// 		tac->opd2 = ST->GetVar(sym2->name);	
	// 	}
	// 	else if(!s1->isLit && s2->isLit){
	// 		tac->isInt2 = true;
	// 		tac->l2 = s2->place;
	// 		Symbol* sym1 = ST->GetVar(s1->place);
	// 		if(sym1==NULL){
	// 			printf("Error: Symbol %s not defined in scope.", s1->place);
	// 			exit(1);
	// 		}
	// 		tac->opd1 = ST->GetVar(sym1->name);	
	// 	}	
	// 	else{
	// 		Symbol* sym1 = ST->GetVar(s1->place);
	// 		if(sym1==NULL){
	// 			printf("Error: Symbol %s not defined in scope.", s1->place);
	// 			exit(1);
	// 		}
	// 		tac->opd1 = ST->GetVar(sym1->name);	
	// 		Symbol* sym2 = ST->GetVar(s2->place);
	// 		if(sym2==NULL){
	// 			printf("Error: Symbol %s not defined in scope.", s2->place);
	// 			exit(1);
	// 		}
	// 		tac->opd2 = ST->GetVar(sym2->name);	
	// 	}			
		
	// 	// Type-Checking
	// 	if(s1->type == "int"){
	// 		if(s2->type=="int")				temptype="int";
	// 		else if(s2->type=="long")		temptype="long";
	// 		else{
	// 			printf("Error: Incompatible operands to operator %s near line %d", op, lineNum);
	// 			exit(1);
	// 		}
	// 	}	
	// 	else if(s1->type == "long"){
	// 		if(s2->type=="int" || s2->type=="long")	temptype="long";
	// 		else{
	// 			printf("Error: Incompatible operands to operator %s near line %d", op, lineNum);
	// 			exit(1);
	// 		}
	// 	}
	// 	else {
	// 		printf("Error: Incompatible operands to operator %s near line %d", op, lineNum);
	// 		exit(1);	
	// 	}
		
	// 	string tempName = ST.curEnv->genTemp(temptype);
	// 	Symbol* temp = ST->GetVar(tempName);
	// 	d->place = temp->name;
	// 	d->type = temp->type;
	// 	tac->dest = temp;
	// 	d->code.pb(tac);
	// }

	else if(op=="="|| op== "+="|| op== "-="|| op== "*="|| op== "/=" || op== "%=" || op== "&="|| op== "|="|| op== "^="|| op== "<<="|| op== ">>="){
		TAC* tac = new TAC();
		tac->op = op;
		tac->opType = 2;
		if(s1->isLit){
			printf("Error: in Line %d\nLHS of an expression should not be a literal\n",lineNum);
		}
		else{
			Symbol* symd = ST->GetVar(s1->place);
			if(symd==NULL){
				printf("Error: in Line %d\nSymbol %s not defined in scope.", lineNum, s1->place);
				exit(1);
			}
			tac->dest=symd;
		}
		if(s2->isLit){
			tac->isInt1 = true;
			tac->l1 = s2->place;
		}
		else{
			Symbol* sym1 = ST->GetVar(s2->place);
			if(sym1==NULL){
				printf("Error: in Line %d\nSymbol %s not defined in scope.", lineNum, s2->place);
				exit(1);
			}
			tac->opd1 = ST->GetVar(sym1->name);	
		}			
		
		// Type-Checking
		if (s1->type == "char"){
			if(s2->type=="char" || s2->type=="int" ||s2->type=="long") ;
			else{
				printf("Error: Incompatible operands to operator %s near line %d", op, lineNum);
				exit(1);
			}
		}
		else if (s1->type == "int"){
			if(s2->type=="char" || s2->type=="int" ||s2->type=="long") ;
			else{
				printf("Error: Incompatible operands to operator %s near line %d", op, lineNum);
				exit(1);
			}
		}
		else if (s1->type == "long"){
			if(s2->type=="char" || s2->type=="int" ||s2->type=="long") ;
			else{
				printf("Error: Incompatible operands to operator %s near line %d", op, lineNum);
				exit(1);
			}
		}
		else {
			printf("Error: Incompatible operands to operator %s near line %d", op, lineNum);
			exit(1);
		}

		d->place = s1->place;
		d->type = s1->type;
		d->code.pb(tac);	
	}

	else if(op=="++" || op=="--"){
		TAC* tac = new TAC();
		tac->op = op;
		tac->opType = 1;
		if(s1->isLit){
			printf("Error: in Line %d\nDo not use a literal in this expression\n",lineNum);
		}
		else{
			Symbol* symd = ST->GetVar(s1->place);
			if(symd==NULL){
				printf("Error: in Line %d\nSymbol %s not defined in scope.", lineNum, s1->place);
				exit(1);
			}
			tac->dest=symd;
		}

		// Type-Checking
		if(!(s1->type=="char" || s1->type=="int" ||s1->type=="long")){
			printf("Error: Incompatible operands to operator %s near line %d", op, lineNum);
			exit(1);
		}

		d->place = s1->place;
		d->type = s1->type;
		d->code.pb(tac);	
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
	string tempName = ST->GenTemp();
	Symbol* temp = ST->GetVar(tempName);
	d->place = temp->name;
	d->type = equal_compatible(s1->type, s2->type);
	if(d->type=="None" || d->type==""){
		printf("Error: Incompatible types to conditional expression near line %d", lineNum);
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
	tac3->op = "ifgoto"; tac3->dest = ST->GetVar(c->place); tac3->target = newLabel1;
	tac4->op = "goto"; tac4->target = newLabel2;
	tac5->op = "goto"; tac5->target = newLabel3;
	tac6->op = "label"; tac6->target = newLabel3;
	tac7->op = "="; tac7->dest=temp;
	if(s1->isLit){
		tac7->isInt1=true;
		tac7->l1=s1->place;
	}
	else 	tac7->opd1 = ST->GetVar(s1->place);

	tac8->op = "="; tac8->dest=temp;
	if(s2->isLit){
		tac8->isInt1=true;
		tac8->l1=s2->place;
	}
	else 	tac8->opd1 = ST->GetVar(s2->place);

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
	Symbol* sym = ST->GetVar(d->place);
	tac->opd1 = sym;
	tac->dest = sym;
	tac->isInt2 = true; tac->l2 = "1";
	if(op=="++")	tac->op="+"; else	tac->op="-";
	d->code.insert(d->code.begin(), tac);
}

