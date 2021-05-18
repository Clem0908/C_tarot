compile_main: src/main.c card_stack player
	gcc -g -Wall -Wextra -Iout/ src/main.c out/card_stack.o out/player.o out/card.o -o out/c_tarot

card_stack: card src/headers/card_stack.h src/card_stack.c
	gcc src/card_stack.c -c -o out/card_stack.o

player: src/headers/player.h src/player.c
	gcc src/player.c -c -o out/player.o

card: src/headers/card.h src/card.c
	gcc src/card.c -c -o out/card.o

clean:
	rm -r out/
