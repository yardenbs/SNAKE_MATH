#ifndef _SNAKE_H_
#define _SNAKE_H_

#include <cstring>
#include "Point.h"

class TheSnakesGame;

class Snake {

	int size=3;
	vector<Point> body;
	int direction = 3; // TODO: use enum!
	char arrowKeys[4];
	Color color;
	TheSnakesGame* theGame;
public:
	Snake(int size, const Point& position, Color c, const char* keys, const int  dir);


//c'tor
	~Snake(){ body.~vector; } //d'tor //copy c'tor

	void setGame(TheSnakesGame* _theGame) {
		theGame = _theGame;
	}

	void setArrowKeys(const char* keys) {
		arrowKeys[0] = keys[0];
		arrowKeys[1] = keys[1];
		arrowKeys[2] = keys[2];
		arrowKeys[3] = keys[3];
	}
	void setColor(Color c) {
		color = c;
	}
	void move();
	int getDirection(char key);
	void setDirection(int dir) {
		direction = dir;
	}
	void grow();
	bool Snake::isBitten(const Point& next);
};

#endif