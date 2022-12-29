#include "Enemy.h"

void Enemy::Init() {
	maxHealth = RandomNumber(90, 100);
	maxStamina = RandomNumber(90, 100);
	health = maxHealth;
	stamina = maxStamina;
}