#ifndef CELLULE_H
#define CELLULE_H
	#include "cellule.h"
#endif


void init_plateau(Cellule (*plateau)[N]); //Initialise le tableau
void affiche_plateau(Cellule (*plateau)[N]);

int est_valide(Cellule c);//Vérifie si une Cellule est valide lors de l'initialisation.
