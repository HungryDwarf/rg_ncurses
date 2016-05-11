#include <ncurses.h>
#include "character.h"

int main(){
	initscr();
	curs_set(0);
	noecho();

	Character ch;
	Character::Controller cont;
	int x = ch.getX();
	int y = ch.getY();
	mvprintw(y, x, "@");

	while(cont.exit == 0){
		int gc = getch();
		cont.move(gc);
		mvprintw(y, x, "@");
	}

	getch();
	endwin();
	return 0;
}
