#include "Player.h"

void Player::Init() {
	health = RandomNumber(8, 10);
	hungry = RandomNumber(8, 10);
	stamina = RandomNumber(8, 10);
	isExpedition = false;
	currentState = ALIVE;
}