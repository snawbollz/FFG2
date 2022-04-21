#pragma once

#ifndef DICE_H

class Dice
{
private:
	int sides;
	int value;

public:
	Dice();
	Dice(int s);
	void roll();
	int getValue();
};
#endif