Debug: all
cleanDebug: clean
all:
	gcc main.cpp character.cpp -lncurses -o game
clean:
	rm -rf obj
