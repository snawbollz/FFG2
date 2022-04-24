#ifndef ITEMS_H
#define ITEMS_H

#include <vector>
#include <array>
#include "Weapons.h"
#include "Armor.h"
#include "Potions.h"

class Items {
public:
	Weapons weaponCreate();
	Armor armorCreate();
	Potions potionsCreate();

};
#endif