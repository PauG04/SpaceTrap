#include "Start.h"

void StartScene(Player myPlayer[]) {
	cout << "Tota la historia principal i el context, Preguntar els noms" << endl << endl;
	PlayerNames(myPlayer);
	system("Pause");
	system("cls");
	cout << "Presentar totes les possibles professions y demanar un input" << endl
		<< "0 --> Cuiner   1 --> Militar   2 --> Comediant   3 --> Capella   4 --> Mecanic   5 --> Music" << endl;
	PlayerProfessions(myPlayer);
	system("Pause");
	system("cls");

}

void PlayerNames(Player myPlayer[]) {
	for (int i = 0; i < 4; i++)
	{
		cout << "Nom del Jugador " << i + 1 << ": ";
		cin >> myPlayer[i].name;
	}
}

void PlayerProfessions(Player myPlayer[]) { //si poses una lletra es bugeja, falta fer que no es repeteixi num, ho he fet de l'unica manera que se m'ha ocorregut
	cout << endl;
	int whatProfession;
	for (int i = 0; i < 4; i++)
	{
		bool correctInput = false;
		while (!correctInput)
		{
			cout << "Professio del Jugador " << i + 1 << ": ";
			cin >> whatProfession;


			switch (whatProfession)
			{
			case 0:
				myPlayer[i].profession = COOK;
				correctInput = true;
				cout << myPlayer[i].name << " --> Cuiner" << endl << endl;
				break;
			case 1:
				myPlayer[i].profession = MILITAR;
				correctInput = true;
				cout << myPlayer[i].name << " --> Militar" << endl << endl;
				break;
			case 2:
				myPlayer[i].profession = JESTER;
				correctInput = true;
				cout << myPlayer[i].name << " --> Comediant" << endl << endl;
				break;
			case 3:
				myPlayer[i].profession = PRIEST;
				correctInput = true;
				cout << myPlayer[i].name << " --> Capella" << endl << endl;
				break;
			case 4:
				myPlayer[i].profession = MECHANIC;
				correctInput = true;
				cout << myPlayer[i].name << " --> Mecanic" << endl << endl;
				break;
			case 5:
				myPlayer[i].profession = MUSICIAN;
				correctInput = true;
				cout << myPlayer[i].name << " --> Music" << endl << endl;
				break;

			default:
				break;
			}
		}


	}
}