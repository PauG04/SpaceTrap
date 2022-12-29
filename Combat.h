#pragma once
#include "Player.h"
#include "Enemy.h"
#include "Math.h"
#include "Scenes.h"

void CombatScene(Player myPlayer[], Enemy& myEnemy, Scenes& currentScene);
void CombatTurn(Player myPlayer[], Enemy& myEnemy, int i);
void PrintCombat(Player myPlayer[], Enemy& myEnemy);
void EnemyAction(Enemy& myEnemy);

