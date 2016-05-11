#include <ncurses.h>
#include "character.h"

int main(){
	initscr();
	curs_set(0);

	printw("TEST");
	
	Character ch;
	Character::Controller cont;
	int x = ch.getX();
	int y = ch.getY();
	mvprintw(y, x, "@");
	
	while(cont.exit == 0){
		int gc = getch();
		cont.move(gc);
	}	
	
	getch();
	endwin();
	return 0;
}
