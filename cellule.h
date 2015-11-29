#ifndef CELLULE_H
# define CELLULE_H
        #include <stdio.h>
        #include <stdlib.h>
 
        #define N 12
 
        typedef struct Cellule Cellule;
        struct Cellule
        {
                int valide;     //Est-ce une Cellule jouable ?
                int x;  //Abcisse de la piece
                int y;  //Ordonnee de la piece
                int type;       //0 Normale, 1 Portail
                int occupe;     //0 Vide, 1 Occupe
        };
 
        void init_cellule(Cellule* c);
 

 
        void affiche(Cellule c);
 
        Cellule build_cellule(int valide, int x, int y, int type, int occupe);
 
#endif