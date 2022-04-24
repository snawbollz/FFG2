#pragma once
#ifndef WEAPONS_H
#define WEAPONS_H
#include <string>
using namespace std;

class Weapons {
private:
	std::string name;
	int attackStat;
public:
	Weapons();
	Weapons(std::string n, int a);
	std::string getName();
	int getAttack();
	void setAttack(int a);
	void setName(string n);
};
#endif // !1