#include "Env.cpp"

int main(){
	Env env = new Env();
	Symbol* i = new Symbol("i");
	i->type = "int";

	Symbol* j = new Symbol("i");
	j->type = "float";

	env.insert(i);
	cout << "i inserted" << endl;
	env.insert(j);
	cout << "j inserted" << endl;

	return 0;
}