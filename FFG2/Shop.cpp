#include "Shop.h"
#include "Weapons.h"
#include "Armor.h"
#include "Potions.h"
#include "Items.h"
#include <iostream>
using namespace std;

Shop::Shop() {
 
    myWeapons[0] = new Weapons("Long sword", 20);
    myWeapons[1] = new Weapons("Gold spear",30);
    myWeapons[2] = new Weapons("Fire staff", 40);
    myWeapons[3] = new Weapons("Sasha", 70);
    myWeapons[4] = new Weapons("Eyelander", 80);
    myWeapons[5] = new Weapons("Rocket flail", 90);
    myWeapons[6] = new Weapons("gun", 120);
    myWeapons[7] = new Weapons("Almighty Sagely Higness Great Pardon Emancipation Holy Terrific Special Godly Fork", 130);
    myWeapons[8] = new Weapons("Big iron", 140);
    myWeapons[9] = new Weapons("ALT F4", 200);

    myArmors[0] = new Armor("Leather armor", 10);
    myArmors[1] = new Armor("Chain mail", 15);
    myArmors[2] = new Armor("Plate mail", 20);
    myArmors[3] = new Armor("Gold plate mail", 40);
    myArmors[4] = new Armor("Flanel", 45);
    myArmors[5] = new Armor("Witch's robe", 50);
    myArmors[6] = new Armor("Soilders getup", 70);
    myArmors[7] = new Armor("Loin cloth", 75);
    myArmors[8] = new Armor("Mega Ultra Supreme Amazing Wonderus Superb Unholy Fantistic T shirt", 80);
    myArmors[9] = new Armor("Giga mail", 100);


    myPotions[0] = new Potions("Health potion", 50, 0, 0);
    myPotions[1] = new Potions("Rage potion", 0, 30, 0);
    myPotions[2] = new Potions("Fortifying potion", 0, 0, 15);
    myPotions[3] = new Potions("Iron skin potion", 0, 20, 30);
    myPotions[4] = new Potions("Skin potion", 75, 0, 30);
    myPotions[5] = new Potions("Big potion", 50, 30, 10);
    myPotions[6] = new Potions("Super strength potion", 0, 100, 0);
    myPotions[7] = new Potions("Broze skin potion",0,0,70);
    myPotions[8] = new Potions("Healthy potion", 150, 0, 0);
    myPotions[9] = new Potions("Giga potion",100,60,30);

}

void Shop::Enter()
{
	cout << "Welcome to the Shop!\n";
	cout << "Please make your Choice!\n\n";

	
	ItemGeneration();
}

void Shop::ItemGeneration()
{
    
	cout << "1) " << myWeapons[weaponsPurchased]->getName() << "\n";
	cout << "\t +" << myWeapons[weaponsPurchased]->getAttack() << " damage to attacks.\n";

	cout << "2) " << myArmors[armorsPurchased]->getName() << "\n";
	cout << "\t +" << myArmors[armorsPurchased]->getDefense() << " defense from all damage.\n";

	cout << "3) " << myPotions[potionsPurchased]->getName() << "\n";
	cout << "\t +" << myPotions[potionsPurchased]->getHealthBoost() << " Health +" 
        << myPotions[potionsPurchased]->getAttackBoost() << " Damage +"
        << myPotions[potionsPurchased]->getDefenseBoost() << " Defense\n\n";

    int shopC;
    cin >> shopC;

    switch (shopC) {
    case 1:
        if (weaponsPurchased != 10) {
            weaponsPurchased++;
        }
        break;
    case 2:
        if (armorsPurchased != 10) {
            armorsPurchased++;
        }
        break;
    case 3:
        if (potionsPurchased != 10) {
            potionsPurchased++;
        }
        break;
    }

    playerInv();
}

void Shop::playerItems()
{
    cout << "Weapon: " << myWeapons[weaponsPurchased]->getName() << "\n";
    cout << "\t +" << myWeapons[weaponsPurchased]->getAttack() << " damage to attacks.\n";

    cout << "Armor: " << myArmors[armorsPurchased]->getName() << "\n";
    cout << "\t +" << myArmors[armorsPurchased]->getDefense() << " defense from all damage.\n";

    cout << "Potion: " << myPotions[potionsPurchased]->getName() << "\n";
    cout << "\t +" << myPotions[potionsPurchased]->getHealthBoost() << " Health +"
        << myPotions[potionsPurchased]->getAttackBoost() << " Damage +"
        << myPotions[potionsPurchased]->getDefenseBoost() << " Defense\n\n";

}

void Shop::playerInv()
{
    inv.assign(0, weaponsPurchased);
    inv.assign(1, armorsPurchased);
    inv.assign(2, potionsPurchased);
    cout << "Current Upgrades: \n";
    cout << "Weapons: " << weaponsPurchased << "\t Armor: " << armorsPurchased << "\t Potions:" << potionsPurchased << "\n";
}

int Shop::playerAttackBoost()
{
    int attack = myWeapons[weaponsPurchased]->getAttack();

    return attack;
}

int Shop::playerDefenseBoost()
{
    int defense = myArmors[armorsPurchased]->getDefense();

    return defense;
}

int Shop::potionHPBoost()
{
    int HP = myPotions[potionsPurchased]->getHealthBoost();

    return HP;
}

int Shop::potionAttackBoost()
{
    int attack = myPotions[potionsPurchased]->getAttackBoost();

    return attack;
}

int Shop::potionDefenseBoost()
{
    int defense = myPotions[potionsPurchased]->getDefenseBoost();

    return defense;
}

