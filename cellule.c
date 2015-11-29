#include "cellule.h"
 
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
       
       
       
 

 
//Affichage
 
void affiche(Cellule c){
        printf("valide : %d\n",c.valide);
        printf("Abcisse : %d\n",c.x);
        printf("Ordonnee : %d\n",c.y);
        printf("Type : %d\n",c.type);
        printf("Occupe : %d\n", c.occupe);
}
 
 
 
//Déplacement