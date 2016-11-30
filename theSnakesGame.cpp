#include "TheSnakesGame.h"


#define _CRT_SECURE_NO_WARNINGS



void TheSnakesGame::setBoard() {
	//copy board sent to us into originalBoard, setArrowKeys, setColor
	
	theboard.setGame(this);
	theboard.draw();
	s[0].setArrowKeys("wsad");
	s[1].setArrowKeys("ikjl");
	s[0].setColor(Color::WHITE);
	s[1].setColor(Color::YELLOW);
	s[0].setGame(this);
	s[1].setGame(this);
	cookie.setGame(this);
	cookie.setGame(this);

}

bool TheSnakesGame::isWall(const Point& p) {
	
	return theboard.board[p.getY()][p.getX()] == '+';
}

bool TheSnakesGame::isCookie(const Point& p) {




	return true;
}

void TheSnakesGame::init() {
	//copy original board to actual board (board) and set Snakes Start point
	

	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			if (cookie.isPos(j, i))
			{
				gotoxy(j, i);
				cookie.print();
			}
}


void TheSnakesGame::run() {
	char key = 0;
	int dir;
	do {
		if (_kbhit()) {
			key = _getch();
			if ((dir = s[0].getDirection(key)) != -1) {
				s[0].setDirection(dir);
			}
			else if ((dir = s[1].getDirection(key)) != -1) {
				s[1].setDirection(dir);
			}
		}
		s[0].move();
		s[1].move();
		Sleep(100);
	} while (key != ESC);
}
