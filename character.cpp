#include "character.h"
#include <ncurses.h>

Character::Character(){
	x = 7;
	y = 7;
}

int Character::getX(){
	return x;
}

int Character::getY(){
	return y;
}

Character::Controller::Controller(){
	exit = 0;
}

void Character::Controller::move(int ch){
	if(ch == KEY_UP){
		printw("a");
	}
	if(ch == KEY_DOWN){
		exit = 1;
	}
}
