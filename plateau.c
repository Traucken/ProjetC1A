#ifndef PLATEAU_H
#define PLATEAU_H
	#include "plateau.h"
#endif

#ifndef CELLULE_H
#define CELLULE_H
	#include "cellule.h"
#endif

#include <stdio.h>
#include <stdlib.h>

//Init Plateau
void init_plateau(Cellule (*plateau)[N]){
	
	int i,j;
	for(i=0; i<N;i++){
//		printf("Wallah\n");
		for(j=0;j<N;j++){
			plateau[i][j]=build_cellule(0,i,j,0,0);
			if(est_valide(plateau[i][j])==1){
				set_valide(&plateau[i][j],1);
			}
		}
	}
			
	
}

void affiche_plateau(Cellule (*plateau)[N]){
	int i,j;

	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(get_valide(plateau[i][j])==1){
				printf("1");
			}
			else if(j==0){
				printf("%d",i%10);
			}
			else{
				printf("0");
			}
			printf("|");	
		}
		printf("\n");
	}
}



int est_valide(Cellule c){
	int resul =0;
	if(c.x >=2 && c.x<=9){
		if(c.y>=1 && c.y<= 10){
			resul= 1;
		}
	}
	else if(c.x == 1 || c.x == 10){
		if(c.y==5 || c.y==6){
			resul= 1;
		}
	}
	
	return resul;
}

			
