#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <stdio.h>
#include <set>
#include <map>
#include <cmath>
#include <cstring>
#include <queue>
#include <stack>
#include <functional>

using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef pair<int, ii> iii;
typedef vector<iii> viii;
typedef set<int> si;

#define pb push_back
#define mp make_pair
#define fori(a, b) for(int i=a ; i<b ; i++ )
#define forn(i, a, b) for(int i=a ; i<b ; i++ )
#define forin(a, b) for(int i=a ; i>=b ; i-- )
#define fornn(i, a, b) for(int i=a ; i>=b ; i-- )
#define fi first
#define se second
#define INF 1000000007

struct Node{
	string str;
	int val;
	Node *next ,*prev;
};

Node *tail, *head;
int flag = 0;
int cnt = 0;

Node* makeNode(string s, bool Val){ 
	Node* node = new Node;
	node -> str = s;
	node -> val = Val;
	node -> prev = NULL;
	node -> next = NULL;
	return node;
}

Node* findString(string s){
	Node* cur = tail;

	while(cur != NULL && cur -> str != s){	cur = cur -> prev; }

	if(cur == NULL){ exit(1); }

	return cur;
}

Node* appendList(Node* node, Node* _tail){
	if(_tail == NULL){
		_tail = node;
		return _tail;
	}
	_tail -> next = node;
	node -> prev = _tail;
	_tail = node;
	return _tail;
}

void printString(){
	// change the val to zero for every node
	Node* _head = head;
	cout << "\t<p>" << (cnt++) << ": ";
	while(_head != NULL){
		switch(_head -> val){
			// case 0: cout << "<span style=\"color:LightGray;\"> " << (_head -> str) << " </span>"; 
			// 		break;
			case 1:	cout << "<span style=\"color:Red;\"> " << (_head -> str) << " </span>";
					// else	cout << "<span style=\"color:MediumSeaGreen;\"> " << (_head -> str) << " </span>";
					break;
			// case 2: if(flag == 0)	cout << "<span style=\"color:DodgerBlue;\"> " << (_head -> str) << " </span>";
			// 		else	cout << "<span style=\"color:MediumSeaGreen;\"> " << (_head -> str) << " </span>";
			// 		break;
			default: 
					cout << "<span style=\"color:Black;\"> " << (_head -> str) << " </span>";
					break;
		}
		_head -> val = 0;
		_head = _head -> next;
	}
	cout << "</p>\n";
	flag = 1 - flag;
}

int main(){

	int n, x;
	string s, p;
	Node *tempTail, *tempHead, *l, *cur, *temp;

	tail = NULL;
	head = NULL;

	cout << "<!DOCTYPE html>\n<html>\n<head>\n\t<title>Right most derivation</title>\n</head>\n<body>\n";

	cin>>n;

	if(n == 0)	return 1;

	// First line must be "1 start name"
	cin >> x;
	cin >> s;
	head = tail = makeNode(s, 1);

	fori(0, n){
		cin >> x;           // x is the number of string on the right hand side of the rule

		cin >> s;
		l = findString(s);

		tempTail = NULL;
		tempHead = NULL;

		forn(j, 0, x){
			cin >> p;
			temp = makeNode(p, 0);
			tempTail = appendList(temp, tempTail);
			if(tempHead == NULL)	tempHead = temp;
		}

		l -> val = 1;
		printString();

		// Connecting
		tempHead -> prev = l -> prev;
		tempTail -> next = l -> next;

		if(l -> prev != NULL){
			(l -> prev) -> next = tempHead;
		}
		else{
			head = tempHead;
		}

		if(l -> next != NULL){
			(l -> next) -> prev = tempTail;
		}
		else{
			tail = tempTail;
		}
	}

	printString();

	cout << "</body>\n</html>\n";

	return 0;
}