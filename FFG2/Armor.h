#pragma once
#ifndef ARMOR_H
#define ARMOR_H
#include <string>
class Armor {
private:
	std::string name;
	int defenseStat;
public:
	Armor();
	Armor(std::string n, int a);
	std::string getName();
	int getDefense();
	void setDefense(int a);
	void setName(std::string n);

};
#endif // !ARMOR_H;
