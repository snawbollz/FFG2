#include "Dice.h"
#include <stdlib.h>

Dice::Dice()
{
	sides = 0;
	value = 0;
}

Dice::Dice(int s) {
	sides = s;
	value = s;
}

void Dice::roll() {
	value = (rand() % sides) + 1;
}

int Dice::getValue() {
	return value;
}