#include "Snake.h"
#include "TheSnakesGame.h"


Snake::Snake(int size, const Point& position, Color c, const char* keys, const int  dir)
{
	for (int i = 0; i < size; i++)
	{
		body.push_back(position);
	}
	setArrowKeys(keys);
	setColor(c);
	setDirection(dir);
}

void Snake::grow()
{
	//the snake get bigger by one
	body.push_back(Point(body[size - 1].getX, body[size - 1].getY, body[size - 1].getCH));
	size++;
}



void Snake::move()
{
	body[size - 1].draw(' ');
	for (int i = size - 1; i > 0; --i)
		body[i] = body[i - 1];


	body[0].move(direction);
	setTextColor(color);
	body[0].draw(body[0].getCH);
}
int Snake::getDirection(char key)
{
	for (int i = 0; i < size - 1; i++)
	{
		if (key == arrowKeys[i])
			return i;
	}
	return -1;//enom
}

bool Snake::isBitten(const Point& next) {//did a snake just bite me??? omg...

	for (int i = 0; i < size; i++)//check the whole body for bites:
	{
		if (next.getX() == body[i].getX() && next.getY() == body[i].getY())
			return true;//yes, that was definitly a snake. FUUUUUUUU$%#$%!!!
	}
	return false;//FEWHHH! that was close! 
}