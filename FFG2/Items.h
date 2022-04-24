#ifndef ITEMS_H
#define ITEMS_H

#include <vector>
#include <array>
#include "Weapons.h"
#include "Armor.h"
#include "Potions.h"

class Items {
public:

	Weapons weaponCreate(int x);
	Armor armorCreate(int x);
	Potions potionsCreate(int x);

};
#endif