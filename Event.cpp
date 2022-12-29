#include "Event.h"

void EventScene(Scenes& currentScene, Player myPlayer[], int& day) {

	printf_s(" - - - - - - Dia %d - - - - - -\n\n", day);
	day++;
	int yesOrNo;
	int numOfEvent = RandomNumber(0, 15);
	RandomEvent(numOfEvent, yesOrNo);
	cout << endl;
	system("pause");
	system("cls");
	currentScene = MENU;
}

void RandomEvent(int numOfEvent, int& yesOrNo) {
	switch (numOfEvent) {
	case 0:
		printf("Les condicions inestables del planeta fan que hi hagi molts terratrèmols.\n");
		printf("Els llits estan dèbils i durant el terratrèmol d'avui s'han trencat.\n");
		printf("Per reparar-los necessitareu la CINTA ADHESIVA o la CORDA.Decidiu emprar algun dels objectes?\n\n");
		printf("0 -> NO \t 1 -> SÍ\n\nEntra la teva acció: ");
		cin >> yesOrNo;
		if (yesOrNo == 0) //NO
			printf("\nNo arregleu els llits, el que fa que dormir sigui més incòmode.\nEn descansar recuperareu menys energia.\n");
		else if (yesOrNo == 1) { //YES
			//eliminar -10 d'energia de tots els membres que hi ha a la nau
			printf("Quin objecte decidiu utilizar?\n\n");
			printf("0 -> CINTA ADHESIVA \t 1 -> CORDA\n\nEntra la teva acció: ");
			cin >> yesOrNo;
			if (yesOrNo == 0) { //CINTA ADHESIVA
				/*
				if (jugador té la cinta adhesiva) {
					int broken? = RandomNumber (0,1);
					if (broken? == 0) {
						printf("En utilitzar l’objecte aquest s’ha trencat.\n");
						haveCintaAdhesiva = false;
					}
					else
						printf("Heu fet servir l’objecte.\n");
				}
				else (jugador no té la cinta adhesiva) {
					printf("No tens l'objecte requerit.\n");
					//tornar a l'inici del switch
				}
				*/
			}
			else if (yesOrNo == 1) { //CORDA
				/*
				if (jugador té la corda) {
					int broken? = RandomNumber (0,1);
					if (broken? == 0) {
						printf("En utilitzar l’objecte aquest s’ha trencat.\n");
						haveCorda = false;
					}
					else
						printf("Heu fet servir l’objecte.\n");
				}
				else (jugador no té la corda) {
					printf("No tens l'objecte requerit.\n");
					//tornar a l'inici del switch
				}
				*/
			}
			else {
				printf("ERROR\n");
				//tornar a l'inici del switch
			}
		}
		else {
			printf("ERROR\n");
			//tornar a l'inici del switch
		}
		break;
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		printf("Avui passeu un dia tranquil a la nau, sense cap inconvenient ni distracció.\n");
		printf("Parleu entre vosaltres i us dediqueu als vostres passatemps.\n");
		break;
	case 7:
		break;
	case 8:
		break;
	case 9:
		break;
	case 10:
		break;
	case 11:
		break;
	case 12:
		break;
	case 13:
		break;
	case 14:
		break;
	case 15:
		break;
	default:
		break;
	};
}