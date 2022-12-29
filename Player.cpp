#include "Player.h"

void Player::Init() {
	health = RandomNumber(90, 100);
	hungry = RandomNumber(8, 10);
	stamina = RandomNumber(90, 100);
	maxHealth = 100;
	maxStamina = 100;
	maxHungry = 10;
	isExpedition = false;
	currentState = ALIVE;
	actedEvent = false;
}

string PrintProfessions(Player myPlayer[], int& i) {
	switch (myPlayer[i].profession)
	{
	case COOK:
		return "Cuiner";
		break;
	case JESTER:
		return "Comediant";
		break;
	case MILITAR:
		return "Militar";
		break;
	case MUSICIAN:
		return "Music";
		break;
	case PRIEST:
		return "Capella";
		break;
	case MECHANIC:
		return "Mecanic";
		break;
	default:
		return "ERROR";
		break;
	}
}