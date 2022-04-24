#pragma once
#include <string>
#ifndef POTIONS_H
#define POTIONS_H
class Potions {
private:
	std::string name;
	int healthBoost;
	int attackBoost;
	int defenseBoost;
public:
	Potions();
	Potions(std::string n,int h, int a, int d);

	std::string getName();
	int getHealthBoost();
	int getAttackBoost();
	int getDefenseBoost();

	void setName(std::string n);
	void setHealthBoost(int h);
	void setAttackBoost(int a);
	void setDefenseBoost(int d);
};
#endif // !POTIONS_H