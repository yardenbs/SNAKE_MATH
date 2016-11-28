#include "Snake.h"
#include "TheSnakesGame.h"

#define _CRT_SECURE_NO_WARNINGS

void Snake::setPosition(int y, int x){
	for(int i = 0; i < SIZE; i++)
		body[i].set(x, y);
}


void Snake::move() {
	body[SIZE - 1].draw(' ');
	for (int i = SIZE - 1; i > 0; --i) {
		body[i] = body[i - 1];
	}
	if (theGame->isWall(body[0].next(direction)))//theGame is the pointer to the game described in the header Snake.h
		direction = 4;//do nothing untill change direction (gets stuck in the wall

	body[0].move(direction);
	setTextColor(Color::LIGHTRED);
	body[0].draw('*');
	
	setTextColor(color);
	body[1].draw('*');
	setTextColor(Color::LIGHTMAGENTA);

	setTextColor(Color::LIGHTRED);
}

int Snake::getDirection(char key) {
	for (int i = 0; i < 4; ++i) {
		if (key == arrowKeys[i]) {
			return i;
		}
	}
	return -1;
}

