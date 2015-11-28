#define N 12

typedef struct Cellule Cellule;
struct Cellule
{
	int valide;	//Est-ce une Cellule jouable ?
	int x;	//Abcisse de la piece
	int y;	//Ordonnee de la piece
	int type;	//0 Normale, 1 Portail
	int occupe;	//0 Vide, 1 Occupe
};

void init_cellule(Cellule* c);


void set_x(Cellule* c, int abs);
void set_y(Cellule* c, int ord);
void set_valide(Cellule* c, int val);
void set_type(Cellule* c, int type);
void set_occupe(Cellule* c, int occup);

int get_valide(Cellule c);

void affiche(Cellule c);

Cellule build_cellule(int valide, int x, int y, int type, int occupe);



