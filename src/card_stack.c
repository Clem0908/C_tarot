#include <string.h>
#include <time.h>
#include <stdlib.h>

#include "headers/card_stack.h"

void init_card_stack(Card_stack *entry)
{
	entry->is_mixed = false;

	// Colors //
	for(int i = 0; i < 14; i++)
	{
		entry->cards[i].atout = false;
		entry->cards[i].excuse = false;
		entry->cards[i].bout = false;
		entry->cards[i].valeur_atout = -1;
		strcpy(entry->cards[i].couleur, "Carreau");
		entry->cards[i].valeur = i;
	}

	for(int i = 14; i < 28; i++)
	{
		entry->cards[i].atout = false;
		entry->cards[i].excuse = false;
		entry->cards[i].bout = false;
		entry->cards[i].valeur_atout = -1;
		strcpy(entry->cards[i].couleur, "Coeur");
		entry->cards[i].valeur = i;
	}

	for(int i = 28; i < 42; i++)
	{
		entry->cards[i].atout = false;
		entry->cards[i].excuse = false;
		entry->cards[i].bout = false;
		entry->cards[i].valeur_atout = -1;
		strcpy(entry->cards[i].couleur, "Pique");
		entry->cards[i].valeur = i;
	}

	for(int i = 42; i < 56; i++)
	{
		entry->cards[i].atout = false;
		entry->cards[i].excuse = false;
		entry->cards[i].bout = false;
		entry->cards[i].valeur_atout = -1;
		strcpy(entry->cards[i].couleur, "Trèfle");
		entry->cards[i].valeur = i;
	}


	// Trumps //
	for(int i = 56; i < 77; i++)
	{
		if(i == 56 || i == 76) // The little and the 21 case //
		{
			entry->cards[i].atout = true;
			entry->cards[i].excuse = false;
			entry->cards[i].bout = true;
			entry->cards[i].valeur_atout = i - 55;
			strcpy(entry->cards[i].couleur, "");
			entry->cards[i].valeur = -1;
		}
		else
		{
			entry->cards[i].atout = true;
			entry->cards[i].excuse = false;
			entry->cards[i].bout = false;
			entry->cards[i].valeur_atout = i - 55;
			strcpy(entry->cards[i].couleur, "");
			entry->cards[i].valeur = -1;
		}
	}

	// The excuse case //
	entry->cards[77].atout = false;
	entry->cards[77].excuse = true;
	entry->cards[77].bout = true;
	entry->cards[77].valeur_atout = -1;
	strcpy(entry->cards[77].couleur, "");
	entry->cards[77].valeur = -1;
}


void random_mixing(Card_stack *entry)
{
	time_t rn;
	srand((unsigned) time(&rn));	
	Card_stack tmp = *entry;

	for(int i = 0; i < 78; i++)
	{
		entry->cards[i] = tmp.cards[rand() % 78];
	}
	
	entry->is_mixed = true;
}
