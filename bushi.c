#include "bushi.h"


void creer_Singe(Bushi *b, Cellule *c, int joueur){
	b->type = 1;
	b->c= c;
	b->joueur=joueur;

}
void creer_Lion(Bushi *b, Cellule *c, int joueur){
	b->type = 2;
	b->c= c;
	b->joueur=joueur;
}
void creer_Dragon(Bushi *b, Cellule *cell, int joueur){
	b->type = 3;
	b->c= cell;
	b->joueur=joueur;
}

void affiche_bushi(Bushi b){

	//printf("Position : %d \n", b->Cellule);
/*	
	if (b.alive == 1){
		printf("En vie");	
	}
	if (b.alive == 0) {
		printf("Hors jeu");
	}
	if (b.type == 1){

		printf("Ce bushi est un singe");
	}
	if (b.type == 2){
		printf("Ce bushi est un lion");
	}
	if (b.type == 3){
		printf("Ce bushi est un Dragon");
	}	
*/
	printf("type : %d\n",b.type);
	printf("joueur : %d\n",b.joueur);
	printf("alive : %d\n",b.alive);
	

}




