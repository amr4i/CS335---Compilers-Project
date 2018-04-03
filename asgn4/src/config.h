// This file contains the packages and shorthands used 
// throughtout the code. 

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <stdio.h>
#include <set>
#include <map>
#include <cmath>
#include <cstring>
#include <string>
#include <queue>
#include <stack>
#include <functional>
#include <fstream>
#include <sstream>
#include <iterator>
#include <regex>
#include <typeinfo>

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


// Assuming that all multiplicaton results can be fit in
// 32 bits. If higher needed, then we will have to do type
// checking at the code gen to see if the dest var is long
// type or int, and proceed accordingly. This we can do later
// as Sir has said to assume all variables as integer type. 