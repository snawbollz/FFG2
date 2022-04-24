#include "Potions.h"

Potions::Potions()
{
	name = "";
	healthBoost = 0;
	attackBoost = 0;
	defenseBoost = 0;
}

Potions::Potions(std::string n,int h, int a, int d)
{
	name = n;
	healthBoost = h;
	attackBoost = a;
	defenseBoost = d;
}

std::string Potions::getName()
{
	return name;
}

int Potions::getHealthBoost()
{
	return healthBoost;
}

int Potions::getAttackBoost()
{
	return attackBoost;
}

int Potions::getDefenseBoost()
{
	return defenseBoost;
}

void Potions::setName(std::string n)
{
	name = n;
}

void Potions::setHealthBoost(int h)
{
	 healthBoost= h;
}

void Potions::setAttackBoost(int a)
{
	attackBoost = a;
}

void Potions::setDefenseBoost(int d)
{
	defenseBoost = d;
}
