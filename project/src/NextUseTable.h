#include "config.h"
#include "IR.cpp"

// The definition of the global next use table.

vector < pair < TAC*, map < string , pair < string, int > > > > nextUseTable;