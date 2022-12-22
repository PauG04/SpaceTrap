#include "Player.h"

void Player::Init() {
	health = RandomNumber(8, 10);
	hungry = RandomNumber(8, 10);
	stamina = RandomNumber(8, 10);
	isExpedition = false;
	currentState = ALIVE;
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