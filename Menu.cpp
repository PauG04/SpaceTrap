#include "Menu.h"

void MenuScene(Scenes& currentScene, int& day, Player myPlayer[], int& totalFood) {

	cout << " - - - - - - Dia " << day << " - - - - - -" << endl << endl;
	if (day == 0)// aquí no demana ninguna accio nomes ensenya els estats inicials dels jugadors
	{
		for (int i = 0; i < 4; i++)
			if (myPlayer[i].profession == COOK)
				totalFood += 3;
		PrintStats(myPlayer);
		PrintObjects();
		PrintFood(totalFood);
	}
	else 
	{
		PrintStats(myPlayer);
		PrintObjects();
		PrintFood(totalFood);
		ChooseAction(currentScene, myPlayer);

	}
	currentScene = EVENT;
	day++;
}

void PrintStats(Player myPlayer[]) {
	for (int i = 0; i < 4; i++)
	{
		cout << " > Jugador " << i + 1 << ": " << myPlayer[i].name << " --> " << PrintProfessions(myPlayer, i) << endl << "Vida:    ";
		Bar(myPlayer[i].health, myPlayer[i].maxHealth);
		cout << endl << "Energia: ";
		Bar(myPlayer[i].stamina, myPlayer[i].maxStamina);
		cout << endl << "Aliment: ";
		Bar(myPlayer[i].hungry, myPlayer[i].maxHungry);
		cout << endl << endl;
	}
}

void PrintObjects() {
	cout << "Dins la nau disposeu dels seguents objectes:" << endl << endl;//posar llista dels objectes
}

void PrintFood(int totalFood) {
	cout << "Dins la nau teniu " << totalFood << " llaunes d'aliment" << endl << endl;
}

void ChooseAction(Scenes& currentScene, Player myPlayer[]) {

	char action;

	cout << "Decidiu la vostra accio: \n\n E: Expedicio\n D: Descansar\n M: Menjar\n I: incidencia " << endl; // que us sembla canviar el nom d'esdeveniment per incidència? per no repetir la E, sino podem canviar el dexploracio?

	for (int i = 0; i < 4; i++) {

		cout << myPlayer[i].name << "Que faras:";
		cin >> action;

		switch (action) {

		case 'E':

			currentScene = EXPEDITION;
			break;

		case 'D':

			//currentScene = REST;
			break;

		case 'M':

			//currentScene = EAT;
			break;

		case 'I':

			currentScene = EVENT;
			break;

		default:
			break;
		}
	}

}
