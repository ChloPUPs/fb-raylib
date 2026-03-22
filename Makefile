all:
	gcc src/main.c src/player.c -o builds/main -O1 -Wall -std=c99 -L ./lib/ -lraylib -lopengl32 -lgdi32 -lwinmm
