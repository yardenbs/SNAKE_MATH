#ifndef COOKIE		
#define COOKIE

#include <cstring>
#include "Point.h"

class TheSnakesGame;

class Cookie {
	int c;
	Point p; 
	TheSnakesGame* theGame;

	//must know task
public:
	void setGame(TheSnakesGame* _theGame) {
		theGame = _theGame;
	}

	Cookie() {
		p.set(rand() % 79, rand() % 23 + 3);
		c = rand() % 25;
	}
	bool isPos(int x, int y)
	{
		return x == p.getX() && y == p.getY();
	}
	bool isSolution() {//<----needs task class input
		return true;
	}
	void print() {
		cout << c;
	}
};


#endif //COOKIE