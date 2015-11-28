struct Bushi {
	int type; // 1=Singe, 2=Lion, 3= Dragon	
	Cellule c; // Cellule du Bushi	
	int joueur; // Joueur à qui appartient le bushi 	
	int alive; // 1 = En vie, 0= Hors-jeu
}

void set_position(Bushi* b, Cellule* c); //Assigne au Bushi b, la cellule c

void set_alive(Bushi* c, int alive); // Renvoie si le Bushi est jouable ou hors-jeu

void set_type(Bushi* c, int type); // Joueur à qui appartient le bushi

void creer_Singe(Bushi *b, Cellule *c, int joueur)

void creer_Lion(Bushi *b, Cellule *c, int joueur)

void creer_Dragon(Bushi *b, Cellule *c, int joueur)

void affiche_bushi(Bushi *b)
