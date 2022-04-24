#include "Armor.h"
#include <string>
using namespace std;

Armor::Armor() {
	name = "Armor";
	defenseStat = 1;
}

Armor::Armor(string n, int a) {
	name = n;
	defenseStat = a;
}

string Armor::getName() {
	return name;
}

int Armor::getDefense() {
	return defenseStat;
}

void Armor::setDefense(int a) {
	defenseStat = a;
}

void Armor::setName(string n) {
	name = n;
}