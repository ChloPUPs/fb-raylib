all:
	gcc src/main.c src/player.c src/pipe.c -o builds/main -O1 -Wall -Werror -std=c99 -L ./lib/ -lraylib -lopengl32 -lgdi32 -lwinmm
release:
	gcc src/main.c src/player.c src/pipe.c -o builds/main -O1 -Wall -Werror -std=c99 -L ./lib/ -lraylib -lopengl32 -lgdi32 -lwinmm -mwindows
