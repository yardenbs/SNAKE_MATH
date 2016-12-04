#include "Rat.h"


void Rat::setVal() {//get a random number 0-169, giving equal odds for 0-25, 26-82-83-169
	int randomSet[3];
	
	srand(time(NULL));
	randomSet[0] = rand() % 26;
	randomSet[1] = rand() % 56 + 26;
	randomSet[2] = rand() % 88 + 82;

	val = randomSet[rand() % 3];
}

void Rat::spawnRat(const int& x, const int& y)
{
	char strVal[3];
	itoa(val, strVal, 10);
	//create rats body from points
	for (int i = 0; i < valLen(); i++)
		body[i].set(x + i, y, strVal[i]);//setting each point of the body
}

int Rat::valLen() {
	//return length of random number (between 1 and three digits)
	if (val / 100 == 1)
		return 3;
	if (val / 10 >= 1)
		return 2;
	return 1;
}

bool Rat::isBitten(const Point& next) {//did a snake just bite me??? omg...

	for (int i = 0; i < valLen(); i++)//check the whole body for bites:
	{
		if (next.getX() == body[i].getX() && next.getY() == body[i].getY())
			return true;//yes, that was definitly a snake. FUUUUUUUU$%#$%!!!
	}
	return false;//FEWHHH! that was close! 
}

void Rat::draw(){//draw rat 

	for (int i = 0; i < valLen(); i++)
		body[i].draw(body[i].getCH);
}

void Rat::erase() {//erase the rat from board by drawing spaces instead
	for (int i = 0; i < valLen(); i++) {
		body[i].draw(' ');
	}
}


