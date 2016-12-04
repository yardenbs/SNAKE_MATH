#include "Snake.h"
#include "TheSnakesGame.h"


Snake::Snake(int _size, const Point& _position, Color _c, const char* _keys, const int _dir)
{
	setColor(_c);
	this->size = _size;
	this->setDirection(_dir);
	this->setArrowKeys(_keys);
	body = new Point[_size];

	for (int i = 0; i < _size; i++)
	{
		body[i].set(_position.getX(), _position.getY(), _position.getCH());
	}


}

Snake::Snake(const Snake& s)
{
	setColor(s.color);
	size = s.size;
	body = new Point[size];
	for (int i = 0; i < size; i++)
	{
		body[i] = s.body[i];
	}
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
