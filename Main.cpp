#include "Main.h"

int main() {

	srand(time(NULL));
	
	system("color 06");

	Scenes currentScene = START;
	bool isPlaying = true;
	int day = 0;

	int totalFood = RandomNumber(4, 6);

	Player myPlayer[4];
	for (int i = 0; i < 4; i++)
		myPlayer[i].Init();

		while (isPlaying)
		{
			switch (currentScene) {
			case START:
				StartScene(myPlayer);
				currentScene = MENU;
				break;
			case MENU:
				MenuScene(currentScene, day, myPlayer, totalFood);
				break;
			case EVENT:	
				EventScene(currentScene, myPlayer, day);
				break;
			case COMBAT:
				//CombatScene();
				break;
			case LOOTING:
				//LootingScene();
				break;
			case EXPEDITION:
				//ExpeditionScene();
				break;
			case GAMEOVER:
				//GameoverScene();
				break;
			default:
				break;
			}
		}

}