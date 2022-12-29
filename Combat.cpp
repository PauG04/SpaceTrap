#include "Combat.h"

void CombatScene(Player myPlayer[], Enemy& myEnemy, Scenes& currentScene) {
	while (myEnemy.health > 0 && myPlayer[0].health > 0 && myPlayer[1].health > 0 && myPlayer[2].health > 0 && myPlayer[3].health > 0) {
		PrintCombat(myPlayer, myEnemy);
		char enemyAction;
		for (int i = 0; i < 4; i++) {
			if (myPlayer[i].isExpedition) {
				cout << "Player " << i + 1 << " : ";
				cin >> myPlayer[i].combatAction;
				CombatTurn(myPlayer, myEnemy, i);
			}
		}
		system("pause");
		system("cls");
	}
	currentScene = LOOTING;



}

void PrintCombat(Player myPlayer[], Enemy& myEnemy) {
	cout << " - - - - - - COMBAT - - - - - -" << endl << endl << "- - - PLAYERS - - -";

	for (int i = 0; i < 4; i++) {
		if (myPlayer[i].isExpedition) {
			Bar(myPlayer[i].health, myPlayer[i].maxHealth);
			cout << '\t';
		}
		cout << endl;
		if (myPlayer[i].isExpedition) {
			Bar(myPlayer[i].stamina, myPlayer[i].maxStamina);
			cout << '\t';
		}
		cout << endl;

	}

	cout << endl << "- - - ENEMY - - -" << endl << endl;
	Bar(myEnemy.health, myEnemy.maxHealth);
	cout << endl;
	Bar(myEnemy.stamina, myEnemy.maxStamina);
	cout << endl << endl << "A --> Attack  D --> Defend" << endl << "Enter your Action:";


}

void CombatTurn(Player myPlayer[], Enemy& myEnemy, int i) {
	if (myPlayer[i].combatAction == 'A') {
		cout << "Enter your Attack (max " << myPlayer[i].stamina << "): ";
		cin >> myPlayer[i].usedStamina;
		if (myEnemy.combatAction == 'A') {
			myEnemy.usedStamina = RandomNumber(20, 50);
			if (myEnemy.usedStamina > myPlayer[i].usedStamina) {
				myEnemy.stamina -= myEnemy.usedStamina;
				myPlayer[i].health -= myEnemy.usedStamina;
			}
			else {
				myPlayer[i].stamina -= myPlayer[i].usedStamina;
				myEnemy.health -= myPlayer[i].health;
			}
		}
		else {
			myPlayer[i].stamina -= myPlayer[i].usedStamina;
			myPlayer[i].usedStamina *= 0.25;
			myEnemy.health -= myPlayer[i].usedStamina;
			myEnemy.stamina += (myEnemy.maxStamina * 0.25);
		}
	}
	else {
		if (myEnemy.combatAction == 'A') {
			myEnemy.usedStamina = RandomNumber(20, 50);
			myEnemy.stamina -= myEnemy.usedStamina;
			myEnemy.usedStamina *= 0.25;
			myPlayer[i].health -= myEnemy.usedStamina;
			myPlayer[i].stamina += (myPlayer[i].maxStamina * 0.25);
		}
		else {
			myPlayer[i].stamina += (myPlayer[i].maxStamina * 0.25);
			myEnemy.stamina += (myEnemy.maxStamina * 0.25);
		}

	}
}

void EnemyAction(Enemy& myEnemy) {
	if (myEnemy.stamina < (myEnemy.maxStamina * 0.3))
		myEnemy.combatAction = 'D';
	else
		myEnemy.combatAction = 'A';
}