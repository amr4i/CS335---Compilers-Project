#include <string>
#include <iostream>
#include <vector>
#include <map>
 using namespace std;

class Symbol{
public:
	string name;
	bool isKeyword;
	string type;
	map<string, string> attr;

	Symbol(string name,string Type);

};
