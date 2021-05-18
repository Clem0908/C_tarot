#ifndef CARD_H
#define CARD_H

#include <stdbool.h>

typedef struct card
{
	bool atout;
	bool excuse;
	bool bout;
	int valeur_atout; //1 to 21
	char couleur[7];
	int valeur; //Goes from 1 to 14, 11 valet, 12 cavalier, 13 dame, 14 roi
} Card;

#endif
