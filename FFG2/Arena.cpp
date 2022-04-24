#include "Arena.h"
#include "Entity.h"
#include "Shop.h"
using namespace std;

void Arena::battleStart(Entity &player)
{
	std::cout << "The Battle Begins!\n";
	
	int levelBal = player.getLevel();
	int ranDefense = rand() % 20+(levelBal*2);
	int HealthBal = player.getHP();
	Entity enemy("Enemy", HealthBal, ranDefense, levelBal);
	
	do  {
		battleText(player, enemy);

		int choice;
		cin >> choice;

		battleChoice(choice, player, enemy);
		if (choice < 3) {
			if (choice == 2) {
				enemyBlockedAttack(player, enemy);
			}else{
				enemyAttack(player, enemy);
			}
		
		}
	} while (enemy.getHP() >= 0 && player.getHP() >= 0);
	
	battleEnd(player, enemy);
}

void Arena::battleText(Entity player, Entity &enemy)
{
	Shop inv;
	cout << player.getName() << " vs. " << enemy.getName() << "\n";
	cout << player.getName()<<" has " << player.getHP() + inv.potionHPBoost() << " Health.\n";
	cout << "Enemy has " << enemy.getHP() << " Health.\n";

	cout << "Select an Action: \n";
	cout << "\t1) Fight\t 2) Block\n";
	cout << "\t3) Items\t 4) Stats\n";
}

void Arena::battleChoice(int c, Entity player, Entity &enemy)
{
	Shop inv;
	switch (c) {
	case 1:
		fight(player, enemy);
		break;
	case 3:
		inv.playerItems();
		break;
	case 4:
		cout << "Name:  " << player.getName() << "\tName:   " << enemy.getName() << endl;
		cout << "HP:    " << (player.getHP() + inv.potionHPBoost()) << "\tHP:     " << enemy.getHP() << endl;
		cout << "Defense: " << (player.getDefense() + inv.playerDefenseBoost() + inv.potionDefenseBoost()) 
				<< "\tDefense:  " << enemy.getDefense() << endl;
		cout << "Level: " << player.getLevel() << "\tLevel:  " << enemy.getLevel() << endl << "\n";
		break;
	}
}

void Arena::enemyAttack(Entity& player, Entity& enemy)
{
	int damage;
	damage = (rand() % 50 + 1) - player.getDefense();
	if (damage <= 0) {
		damage = 0;
	}
	cout <<  player.getName() << " takes " << damage << " damage!\n\n";

	player.setHP(player.getHP() - damage);
}

void Arena::enemyBlockedAttack(Entity& player, Entity& enemy)
{
	int damage;
	Shop inv;
	damage = ((rand() % 50 + 1) - player.getDefense())/2 
				+ (inv.playerDefenseBoost() + inv.potionDefenseBoost());
	if (damage <= 0) {
		damage = 0;
	}
	cout << player.getName() << " takes " << damage << " damage!\n\n";

	player.setHP(player.getHP() - damage);
}

void Arena::fight(Entity player, Entity &enemy)
{
	int damage;
	Shop inv;
	damage = ((rand() % 100 + 1) - enemy.getDefense()) 
				+ (inv.playerAttackBoost()+ inv.potionAttackBoost());
	if (damage <= 0) {
		damage = 0;
	}
	cout << "Enemy takes " << damage << " damage!\n\n";
	
	enemy.setHP(enemy.getHP() - damage);
	//cout << enemy.getHP() <<"\n";
}

void Arena::battleEnd(Entity &player, Entity &enemy)
{
	if (enemy.getHP() <= 0) {
		cout << "Battle Won!\n";

	}
	else if(player.getHP() <= 0){
		cout << "Battle Lost...\n";
	}

}
