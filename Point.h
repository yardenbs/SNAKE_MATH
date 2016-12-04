#ifndef _POINT_H_
#define _POINT_H_

#include <iostream>
#include "io_utils.h"

using namespace std;

class Point {
	int x, y;
	char ch;
public:
	Point(int _x = 1, int _y = 1, char _ch =' ' ) : x(_x), y(_y),ch(_ch) {}
	char getCH() const {
		return ch;
	}
	int getX() const {
		return x;
	}
	int getY() const {
		return y;
	}
	void set(int _x, int _y, char _ch) {
		ch = _ch;
		x = _x;
		y = _y;
	}
	void draw() {
		gotoxy(x, y);
		cout << ch;
		cout.flush();
	}
	void move();
	void move(int direction);
	Point next(int direction) {//find out what is the next point on the board
		Point p_next = *this;//represents the direction
		p_next.move(direction);
		return p_next;
	}
};


#endif