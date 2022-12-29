#include "Gameover.h"

void GameoverScene(Player myPlayer[]) {
	if (myPlayer[0].health <= 0 || myPlayer[1].health <= 0 || myPlayer[2].health <= 0 || myPlayer[3].health <= 0)
	{
		cout << "Llastima! si haguessiu sobresviscut tots plegats fins al final del dia us haurien vingut a buscar i qui sap? Haurieu pogut passar a la historia, " << endl <<
			"per desgracia, ara que han detectat que ja no hi sou tots no paga la pena arriscar més tripulacio per salvar-vos." << endl << endl << 
			"Haurieu hagut de ser mes prudents, ara ja només us queda una sortida:" << endl << "adaptar-vos en aquest planeta els que quedeu vius i oblidar-vos de la vostra estimada Terra." << endl << endl;
	}
	else {
		cout << "Enhorabhona, heu aconseguit sobreviure tots 15 dies, la nau de rescat ha arribat a temps i ara ja us porten de tornada a la Terra. " << endl <<
			"Sou pioners en l'exploració espacial, gracies al vostre coratge i tenacitat`a partir d'ara s'evitarà la galàxia on vau patir l'accident." << endl <<
			"Per això han decidit galadonar-vos amb el premi Snoopy, premi otorgat només a les persones que han contribuït a millorar la seguretat o han tingut èxit en una missió." << endl << endl
	}
	cout << "SpaceTrap" << endl << endl << "Credits" << endl << endl << "Pau Giro" << endl << endl << "Judit Espigol" << endl << endl << "Jaume Latorre" << endl << endl << "1r CDI" << endl << "Taller de Jocs" << endl;

}