#include "Main.h"

int main() {

	srand(time(NULL));
	
	Scenes currentScene = START;
	bool isPlaying = true;
	int dia = 0;

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
			case COMBAT:
				//CombatScene();
				break;
			case MENU:
				MenuScene(currentScene, dia);
				break;
			case LOOTING:
				//LootingScene();
				break;
			case EXPEDITION:
				//ExpeditionScene();
				break;
			case EVENT:
				//EventScene();
				break;
			case GAMEOVER:
				//GameoverScene();
				break;
			default:
				break;
			}
		}

}