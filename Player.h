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
	Professions profession;
	bool isExpedition;
	State currentState;
	string name;
};

string PrintProfessions(Player myPlayer[], int& i);