#include "Weapons.h"
#include <string>
using namespace std;

Weapons::Weapons() {
	name = "Sword";
	attackStat = 1;
}

Weapons::Weapons(string n, int a) {
	name = n;
	attackStat = a;
}

std::string Weapons::getName() {
	return name;
}

int Weapons::getAttack(){
	return attackStat;
}

void Weapons::setAttack(int a) {
	attackStat = a;
}

void Weapons::setName(string n) {
	name = n;
}