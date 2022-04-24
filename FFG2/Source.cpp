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

	Entity player(pName, 100, 25, 1);

	do {
		arena.battleStart(player);
		shop.Enter();
		player.setLevel(player.getLevel() + 1);
		player.setHP(100 + (25* player.getLevel()) + shop.potionHPBoost());
	} while (player.getHP() >= 0);
	
	return 0;
}