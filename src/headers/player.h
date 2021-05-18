#ifndef PLAYER_H
#define PLAYER_H

#include "card.h"

typedef struct player
{
	int points;
	Card player_cards[18];
} Player;

#endif
