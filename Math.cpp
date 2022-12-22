#include "Math.h"

int RandomNumber(int min, int max) {

	return rand() % (max - min + 1) + min;
}

void Bar(int barLenght, int maxBarLenght) {

	cout << " [";
	for (int i = 0; i < barLenght; i++)
		cout << '=';
	for (int i = 0; i < (maxBarLenght - barLenght); i++)
		cout << ' ';
	cout << ']';
}