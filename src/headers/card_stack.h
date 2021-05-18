#ifndef CARD_STACK_H
#define CARD_STACK_H

#include "card.h"

typedef struct card_stack
{
	Card cards[78];
	bool is_mixed;
} Card_stack;

void init_card_stack(Card_stack *entry);
void random_mixing(Card_stack *entry);

#endif
