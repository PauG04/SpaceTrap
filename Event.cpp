#include "Event.h"

void EventScene(Player myPlayer[]) {
	int numOfEvent = RandomNumber(1, 30);
	RandomEvent(numOfEvent);
}

void RandomEvent(int numOfEvent) {
	switch (numOfEvent) {
	case 1:
		//Context evento
		//preguntar si es vol fer l'acció
		//preguntar qui la realitzara
		//preguntar quin objecte utilitzara, si es necessari
		//if (ha realitzat l'accio)
		//else (no ha realitzat l'acció)
		break;

	default:
		break;
	};
}