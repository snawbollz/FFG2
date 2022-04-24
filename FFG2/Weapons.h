#pragma once
#ifndef WEAPONS_H
#define WEAPONS_H
using namespace std;

class Weapons {
private:
	string name;
	int attackStat;
public:
	Weapons();
	Weapons(string n, int a);
	string getName();
	int getAttack();
	void setAttack(int a);
	void setName(string n);
};
#endif // !1