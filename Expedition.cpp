#include "Expedition.h"

void ExpeditionScene(Player myPlayer[], Scenes& currentScene, int day) {
	cout << " - - - - - - Dia " << day << " - - - - - -" << endl << endl;

	int location;
	cout << "On voleu anar d'expedicio?" << endl << "Zona 1 --> 1	Zona 2 --> 2	Zona 3 --> 3	Zona 4 --> 4	Zona 5 --> 5";
	do
	{
		cin >> location;
	} while (location < 1 || location > 5);

	bool isEnemy = RandomNumber(0, 1);
	if (isEnemy == true) {
		cout << "Us heu trobat amb un Enemic!!" << endl;
		currentScene = COMBAT;
		system("pause");
		system("cls");
	}
	else {
		cout << "No hi ha cap Enemic a la vista" << endl;
		currentScene = COMBAT;
		system("pause");
		system("cls");
	}

}