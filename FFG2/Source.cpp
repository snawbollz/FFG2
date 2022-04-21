//Brian Macias
//This is my own work.

#include "Entity.h"
#include "Arena.h"
#include "Misc.h"
#include "Shop.h"
using namespace std;

int main() {
	srand(time(NULL));

	Arena arena;
	string pName;
	Misc miscFunction;
	Shop shop;

	pName = miscFunction.addName();

	Entity player(pName, 100, 2, 25, 1);

	do {
		arena.battleStart(player);
		shop.Enter();
	} while (player.getHP() >= 0);
	
	return 0;
}