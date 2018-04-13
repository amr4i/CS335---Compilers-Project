#include "config.h"
#include "y.tab.c"

// The definition of the global next use table.

vector < pair < TAC*, map < string , pair < string, int > > > > nextUseTable;