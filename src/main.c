#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "headers/card.h"
#include "headers/card_stack.h"


int main(int argc, char** argv)
{
	if(argc != 2)
	{
		printf("\nSynopsis : out/c_tarot [number_of_players]\n");
		exit(EXIT_FAILURE);
	}

	if(strcmp(argv[1],"4") == 0)
	{
		printf("\n4 player party\n");
		
		Card_stack *stack = malloc(sizeof(Card_stack));
		init_card_stack(stack);
		random_mixing(stack);
		free(stack);

		exit(EXIT_SUCCESS);
	}

exit(EXIT_FAILURE);
}
