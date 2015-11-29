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
	
	if (b.alive == 1){
		printf("En vie");	
	}
	if (b.alive==0) {
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
	

}
	
//Tableau des Bushis

Bushi tab[24];

void Tab_Bushi (Bushi *b, Bushi tab[][]){
	
	int i=0;
	int j=0;
	int a;
	int b;
	
	// Dragon
	for (a=0;a<24;a++){
		for (b=0;b<a;b++){
			if ((a=0 && b=1) || (a=0 && b=8)|| (a=9 && b=1) || || (a=9 && b=8) ){
		
				tab[i][j]->type = 3;
				tab[i][j]->alive = 1;
				tab[i][j]->c.x = a;
				tab[i][j]->c.y = b;
				tab[i][j]->c.type = 0;
				tab[i][j]->c.occupe = 0;
				tab[i][j]->c.valide = 1;
		
			}
		}
	}

