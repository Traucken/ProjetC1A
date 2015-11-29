#include "cellule.h"
#include "plateau.h"
 
int main (void){
       
        Cellule plateau[N][N];
       
       
       
        Cellule c;
        Cellule b;
        init_cellule(&c);
        printf("*-----Test init_cellule-----*\n");
        affiche(c);  
        b=build_cellule(1,5,5,0,0);
        printf("*-----Test init_cellule-----*\n");
        affiche(b);
        init_plateau(plateau);
        affiche_plateau(plateau);      
       
       
       
       
        return 0;
}