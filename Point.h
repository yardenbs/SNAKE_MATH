#ifndef _POINT_H_
#define _POINT_H_

#include <iostream>
#include "io_utils.h"

using namespace std;

class Point {
	int x, y;//maybe we should init these to something???
public:
	int getX() const {
		return x;
	}
	int getY() const {
		return y;
	}
	void set(int _x, int _y) {
		x = _x;
		y = _y;
	}
	void draw(char ch) {
		gotoxy(x, y);
		cout << ch;
		cout.flush();
	}
	void move();
	void move(int direction);
	Point next(int direction) {//find out what is the next point on the board
		Point next = *this;//represents the direction
		next.move(direction);
		return next;
	}	
};

#endif