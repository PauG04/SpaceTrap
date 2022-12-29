#include "Math.h"

int RandomNumber(int min, int max) {

	return rand() % (max - min + 1) + min;
}

void Bar(int barLenght, int maxBarLenght) {

	cout << " [";
	for (int digits = (barLenght * 10 / maxBarLenght) + 1; digits > 0; digits--)
		cout << '=';
	for (int digits = (barLenght * 10 / maxBarLenght) + 1; digits <= 10; digits++)
		cout << ' ';
	cout << ']';
}