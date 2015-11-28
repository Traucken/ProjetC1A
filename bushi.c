
struct Bushi {
	int type;
	Cellule c;
	int joueur;	
	int alive;
}



//setters


void set_position(Bushi* b, Cellule* c){
	b->Cellule= *c;
}


void set_alive(Bushi* c, int alive){
	b->alive=alive;
}





void creer_Singe(Bushi *b, Cellule *c, int joueur){
	b->type = 1;
	b->Cellule *c= *c;
	b->joueur=joueur;

}
void creer_Lion(Bushi *b, Cellule *c, int joueur){
	b->type = 2;
	b->Cellule *c= *c;
	b->joueur=joueur;
}
void creer_Dragon(Bushi *b, Cellule *c, int joueur){
	b->type = 3;
	b->Cellule *c= *c;
	b->joueur=joueur;
}

void affiche_bushi(Bushi *b){

	printf("Position : %d \n", b->Cellule);
	
	if (b->alive == 1){
		printf("En vie");	
	}
	else {
		printf("Hors jeu");
	}
	if (b->type = 1){
		printf("Ce bushi est un singe");
	}
	if (b->type = 2){
		printf("Ce bushi est un lion");
	}
	if (b->type = 3){
		printf("Ce bushi est un Dragon");
	}	
	

}




