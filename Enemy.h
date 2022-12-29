#pragma once
#include "Math.h"


struct Enemy
{
	int maxHealth;
	int health;
	int stamina;
	int maxStamina;
	int usedStamina;
	char combatAction;
	void Init();
};