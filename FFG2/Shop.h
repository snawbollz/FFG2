#ifndef SHOP_H
#define SHOP_H
#include <vector>
#include "Shop.h"
#include "Weapons.h"
#include "Armor.h"
#include "Potions.h"
#include "Items.h"


class Shop {
public:
	vector<int> inv;

	int weaponsPurchased = 0;
	int armorsPurchased = 0;
	int potionsPurchased = 0;

	Weapons* myWeapons[10];
	Armor* myArmors[10];
	Potions* myPotions[10];

	Shop();
	void Enter();
	void ItemGeneration();
	void playerItems();
	
	void playerInv();

	int playerAttackBoost();
	int playerDefenseBoost();
	int potionHPBoost();
	int potionAttackBoost();
	int potionDefenseBoost();
};
#endif