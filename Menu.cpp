#include "Menu.h"

void MenuScene(Scenes& currentScene, int& day, Player myPlayer[], int& totalFood) {

	cout << " - - - - - - Dia " << day << " - - - - - -" << endl << endl;
	if (day == 0)// aquí no demana ninguna accio nomes ensenya els estats inicials dels jugadors
	{
		PrintStats(myPlayer);
		PrintObjects();
		PrintFood(totalFood);
	}
	else 
	{
		
		
	}
	currentScene = EVENT;
	day++;
}

void PrintStats(Player myPlayer[]) {
	for (int i = 0; i < 4; i++)
	{
		cout << " > Jugador " << i + 1 << ": " << myPlayer[i].name << " --> " << PrintProfessions(myPlayer, i) << endl << "Vida:    ";
		Bar(myPlayer[i].health, MAX_HP);
		cout << endl << "Energia: ";
		Bar(myPlayer[i].stamina, MAX_STAMINA);
		cout << endl << "Aliment: ";
		Bar(myPlayer[i].hungry, MAX_HUNGRY);
		cout << endl << endl;
	}
}

void PrintObjects() {
	cout << "Dins la nau disposeu dels seguents objectes:" << endl << endl;//posar llista dels objectes
}

void PrintFood(int totalFood) {
	cout << "Dins la nau teniu " << totalFood << " llaunes d'aliment";
}