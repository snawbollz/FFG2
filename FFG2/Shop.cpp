#include "Shop.h"
#include "Items.h"
#include <iostream>
using namespace std;

void Shop::Enter()
{
	cout << "Welcome to the Shop!\n";
	cout << "Please make your Choice!\n\n";

	Items item;

	ItemGeneration(item);
}

void Shop::ItemGeneration(Items &item)
{
	Weapons weapon = item.weaponCreate(weaponsPurchased);
	Armor armor = item.armorCreate(armorsPurchased);
	Potions potion = item.potionsCreate(potionsPurchased);

	//cout << "1) " << weapon.getName() << "\n";
	//cout << "\t " << weapon.getAttack() << " damage to attacks.";

	//cout << "2) " << armor.getName() << "\n";
	//cout << "\t " << armor.getDefense() << " defense from all damage.";

	//cout << "3) " << potion.getName() << "\n";
	//cout << "\t " << potion.getHealthBoost() << " Health " << potion.getAttackBoost() << " Damage " << potion.getDefenseBoost() << " Defense";

}
