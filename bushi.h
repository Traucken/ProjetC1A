#ifndef BUSHI_H
	#define BUSHI_H
	#include "cellule.h"

	#define         WALLAH(type, cellule, joueur)   ((Bushi){type, cellule, joueur})               
	#define         SINGE(cellule, joueur)          WALLAH(1, *cellule, joueur)
	#define         LION(cellule, joueur)           WALLAH(2, *cellule, joueur)
	#define         DRAGON(cellule, joueur)         WALLAH(3, *cellule, joueur)
 
typedef struct Bushi Bushi;
struct Bushi {
	int type; // 1=Singe, 2=Lion, 3= Dragon	
	*Cellule c; // Cellule du Bushi	
	int joueur; // Joueur à qui appartient le bushi 	
	int alive; // 1 = En vie, 0= Hors-jeu
};




void creer_Singe(Bushi *b, Cellule *c, int joueur);

void creer_Lion(Bushi *b, Cellule *c, int joueur);

void creer_Dragon(Bushi *b, Cellule *c, int joueur);

void affiche_bushi(Bushi b);

#endif
