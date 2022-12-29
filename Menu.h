#pragma once
#include "Scenes.h"
#include "Math.h"
#include "Player.h"

void MenuScene(Scenes& currentScene, int& dia, Player myPlayer[], int& totalFood);
void PrintStats(Player myPlayer[]);
void PrintObjects();
void PrintFood(int totalFood);
void ChooseAction(Scenes& currentScene, Player myPlayer[]);