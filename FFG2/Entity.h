#pragma once
#include <iostream>
#ifndef ENTITY_H
#define ENTITY_H

class Entity {
private:
	std::string name;
	int HP;
	int Speed;
	int defense;
	int level;
public:
	Entity();
	Entity(std::string n, int h, int s, int d, int l);
	
	//void setName(std::string n);
	void setHP(int h);
	//void setSpeed(int s);
	
	std::string getName();
	int getHP();
	int getSpeed();
	int getDefense();
	int getLevel();

};
#endif // !ANIMAL_H
