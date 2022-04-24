#ifndef SHOP_H
#define SHOP_H
#include <vector>
#include "Shop.h"
#include "Weapons.h"
#include "Armor.h"
#include "Potions.h"
#include "Items.h"


class Shop {
private:
	Weapons* myWeapons[10];
	Armor* myArmors[10];
	Potions* myPotions[10];

	int weaponsPurchased;
	int armorsPurchased;
	int potionsPurchased;
public:
	Shop();
	void Enter();
	void ItemGeneration(Items &item);
	
};
#endif