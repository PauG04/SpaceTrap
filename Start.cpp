#include "Start.h"

void StartScene(Player myPlayer[]) {
	cout << "Sou un grup d'astronautes en una missio d'exploracio a una altra galaxia." << endl << endl <<
		"Mentre us dirigieu a la següent galaxia us heu vist atrapats en una tempesta d'asteroides i heu hagut d'aterrar al planeta mes proper." << endl << endl <<
		"En aterrar us heu adonat que el reactor principal està danyat i no podeu tornar a enlairar-vos." << endl << endl <<
		"Per sort us heu pogut comunicar amb la central espacial de la Terra i us han dit que trigaran 15 dies a poder-vos venir a buscar, pero que nomes gastaran recursos si els 4 continueu amb vida." << endl << endl <<
		"Sereu capaços de sobre viure tots 15 dies en un planeta desconegut?" << endl << endl <<
		"Ara que us heu quedat atrapats us heu de presentar:" << endl << endl;
	PlayerNames(myPlayer);
	system("Pause");
	system("cls");
	cout << "Presentar totes les possibles professions y demanar un input" << endl
		<< "0 --> Cuiner   1 --> Militar   2 --> Comediant   3 --> Capella   4 --> Mecanic   5 --> Music" << endl; //tmb s'ha d'explicar que no poden tenir 2 professions iguals
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

void PlayerProfessions(Player myPlayer[]) { 
	cout << endl;
	int whatProfession;
	for (int i = 0; i < 4; i++)
	{
			cout << "Professio del Jugador " << i + 1 << ": ";
			int correctInput[3];
			
			do {
				cin >> whatProfession;
			} while (correctInput[0] == whatProfession || correctInput[1] == whatProfession || correctInput[2] == whatProfession);
			

			correctInput[i] = whatProfession;

			switch (whatProfession)
			{
			case 0:
				myPlayer[i].profession = COOK;
				cout << myPlayer[i].name << " --> Cuiner" << endl << endl;
				break;
			case 1:
				myPlayer[i].profession = MILITAR;
				cout << myPlayer[i].name << " --> Militar" << endl << endl;
				break;
			case 2:
				myPlayer[i].profession = JESTER;
				cout << myPlayer[i].name << " --> Comediant" << endl << endl;
				break;
			case 3:
				myPlayer[i].profession = PRIEST;
				cout << myPlayer[i].name << " --> Capella" << endl << endl;
				break;
			case 4:
				myPlayer[i].profession = MECHANIC;
				cout << myPlayer[i].name << " --> Mecanic" << endl << endl;
				break;
			case 5:
				myPlayer[i].profession = MUSICIAN;
				cout << myPlayer[i].name << " --> Music" << endl << endl;
				break;

			default:
				break;
			}



	}
}