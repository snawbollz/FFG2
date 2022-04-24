#ifndef SHOP_H
#define SHOP_H
#include <vector>
#include "Items.h"

class Shop {
private:
	int weaponsPurchased;
	int armorsPurchased;
	int potionsPurchased;
public:
	void Enter();
	vector<Shop> ItemGeneration();
};
#endif