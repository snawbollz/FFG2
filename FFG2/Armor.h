#pragma once
#ifndef ARMOR_H
#define ARMOR_H
class Armor {
private:
	string name;
	int defenseStat;
public:
	Armor();
	Armor(string n, int a);
	string getName();
	int getAttack();
	void setAttack(int a);
	void setName(string n);

};
#endif // !ARMOR_H;
