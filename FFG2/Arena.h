#pragma once
#ifndef ARENA_H
#define ARENA_H
#include "Entity.h"
class Arena {
public:
	void battleStart(Entity &player);
	void battleText(Entity player, Entity &enemy);
	void battleChoice(int c, Entity p, Entity &e);
	void enemyAttack(Entity &player, Entity &enemy);

	void fight(Entity player, Entity &enemy);
	void block(Entity player, Entity& enemy);

	void battleEnd(Entity &player, Entity& enemy);
};
#endif // !ARENA_H
