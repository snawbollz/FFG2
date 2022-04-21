//Brian Macias
//This is my own work.

#include "Entity.h"
#include "Arena.h"
#include "Misc.h"
using namespace std;

int main() {
	srand(time(NULL));

	Arena arena;
	string pName;
	Misc miscFunction;
	pName = miscFunction.addName();

	Entity player(pName, 100, 2, 25, 1);
	
	arena.battleStart(player);
	
	return 0;
}