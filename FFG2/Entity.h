#pragma once
#include <iostream>
#ifndef ENTITY_H
#define ENTITY_H

class Entity {
private:
	std::string name;
	int HP;
	int defense;
	int level;
public:
	Entity();
	Entity(std::string n, int h, int d, int l);
	
	void setLevel(int l);
	void setHP(int h);
	
	std::string getName();
	int getHP();
	int getDefense();
	int getLevel();

}; 
#endif //ENTITY_H
