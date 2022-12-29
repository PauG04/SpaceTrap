#pragma once
#include "Math.h"

enum Professions { COOK, MILITAR, JESTER, PRIEST, MECHANIC, MUSICIAN };
enum State { ALIVE, DEAD, ILL, KNOCKED};


struct Player
{
	void Init();
	int health;
	int hungry;
	int stamina;
	int maxHealth;
	int maxStamina;
	int usedStamina;
	int maxHungry;
	Professions profession;
	bool isExpedition;
	State currentState;
	string name;
	bool actedEvent;
	char combatAction;
};

string PrintProfessions(Player myPlayer[], int& i);