#include "Entity.h"
Entity::Entity() {
	name = "default";
	HP = 100;
	Speed = 1;
	level = 1;
}

Entity::Entity(std::string n, int h, int s, int d, int l) {
	name = n;
	HP = h;
	Speed = s;
	defense = d;
	level = l;
}

void Entity::setHP(int h)
{
	HP = h;
}

std::string Entity::getName() {
	return name;
}

int Entity::getHP() {
	return HP;
}

int Entity::getSpeed() {
	return Speed;
}

int Entity::getDefense()
{
	return defense;
}

int Entity::getLevel()
{
	return level;
}
