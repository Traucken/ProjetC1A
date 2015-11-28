# Indique les dépendances :
principal: cellule.o plateau.o mainValentin.o 
	gcc cellule.o plateau.o mainValentin.o -o principal

# Compile les dépendances
cellule.o : cellule.c cellule.h
	gcc -c -Wall cellule.c

plateau.o : cellule.h cellule.o plateau.h plateau.c
	gcc -c -Wall cellule.o plateau.c

principal.o : mainValentin.c cellule.h cellule.o plateau.h plateau.o
	gcc -c -Wall cellule.o plateau.o mainValentin.c

clean : 
	rm *.o
