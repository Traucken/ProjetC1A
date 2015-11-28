#include <stdio.h>
#include <stdlib.h>

#ifndef CELLULE_H
#define CELLULE_H
	#include "cellule.h"
#endif

//Init
void init_cellule(Cellule* c){
	c->valide=0;
	c->x=0;
	c->y=0;
	c->type=0;
	c->occupe=0;
}

//Build
Cellule build_cellule(int valide, int x, int y, int type, int occupe){
	Cellule c;
	c.valide = valide;
	c.x = x;
	c.y = y;
	c.type = type;
	c.occupe = occupe;
	
	return c;
}
	
	
	

//setters
void set_x(Cellule* c, int abs){
	c->x=abs;
}

void set_y(Cellule* c, int ord){
	c->y=ord;
}

void set_valide(Cellule* c, int val){
	c->valide=val;
}

void set_type(Cellule* c, int type){
	c->type=type;
}

void set_occupe(Cellule* c, int occup){
	c->occupe=occup;
}

int get_valide(Cellule c){
	return c.valide;
}

//Affichage

void affiche(Cellule c){
	printf("valide : %d\n",c.valide);
	printf("Abcisse : %d\n",c.x);
	printf("Ordonnee : %d\n",c.y);
	printf("Type : %d\n",c.type);
	printf("Occupe : %d\n", c.occupe);
}



//Déplacement

