#include "Items.h"
#include <vector>
#include <string>

Weapons Items::weaponCreate() {
	Weapons myWeapons[10] = {};

    myWeapons[0].setName("Long sword");
    myWeapons[0].setAttack(20);

    myWeapons[1].setName("Gold spear");
    myWeapons[1].setAttack(30);

    myWeapons[2].setName("Fire staff");
    myWeapons[2].setAttack(40);

    myWeapons[3].setName("Sasha");
    myWeapons[3].setAttack(70);

    myWeapons[4].setName("Eyelander");
    myWeapons[4].setAttack(80);

    myWeapons[5].setName("Rocket flail");
    myWeapons[5].setAttack(90);

    myWeapons[6].setName("gun");
    myWeapons[6].setAttack(120);

    myWeapons[7].setName("Almighty Sagely Higness Great Pardon Emancipation Holy Terrific Special Godly Fork");
    myWeapons[7].setAttack(130);

    myWeapons[8].setName("Big iron");
    myWeapons[8].setAttack(140);

    myWeapons[9].setName("ALT F4");
    myWeapons[9].setAttack(200);

    return *myWeapons;
}

Armor Items::armorCreate()
{
	Armor myArmors[10] = {};

    myArmors[0].setName("Leather armor");
    myArmors[0].setDefense(10);

    myArmors[1].setName("Chain mail");
    myArmors[1].setDefense(15);

    myArmors[2].setName("Plate mail");
    myArmors[2].setDefense(20);

    myArmors[3].setName("Gold plate mail");
    myArmors[3].setDefense(40);

    myArmors[4].setName("Flanel");
    myArmors[4].setDefense(45);

    myArmors[5].setName("Witch's robe");
    myArmors[5].setDefense(50);

    myArmors[6].setName("Soilders getup");
    myArmors[6].setDefense(70);

    myArmors[7].setName("Loin cloth");
    myArmors[7].setDefense(75);

    myArmors[8].setName("Mega Ultra Supreme Amazing Wonderus Superb Unholy Fantistic T shirt");
    myArmors[8].setDefense(80);

    myArmors[9].setName("Giga mail");
    myArmors[9].setDefense(100);

    return *myArmors;
}
Potions Items::potionsCreate()
{
	Potions myPotions[10] = {};

    return *myPotions;
}
