#ifndef RAT

#define RAT
#include "Point.h"
#include "TheSnakesGame.h"

class Rat {
	int val;
	Point* body;
	TheSnakesGame* theGame;

public:

	void setGame(TheSnakesGame* _theGame) {
		theGame = _theGame;
	}

	Rat(const int x, const int y) {

		//random value 0-169:
		setVal();
		//body of the rat:
		body = new Point[valLen()];
		//create rats body from points
		spawnRat(x, y);

	}

	~Rat() {
		//erase the rat from board
		erase();
		//exterminate rat
		delete[]body;
	}

	void setVal();

	//Getters:
	int getVal() {
		return val;
	}
	
	bool isBitten(const Point& next);//did a snake bite me?

	int valLen();//length of number string

	void spawnRat(const int&x, const int&y);//make rat's body

	void draw();

	void erase();
	
};


#endif // !RAT
