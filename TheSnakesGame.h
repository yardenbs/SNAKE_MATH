#ifndef _THESNAKESGAME_H_
#define _THESNAKESGAME_H_

#include "io_utils.h"
#include "Snake.h"
#include "cookie.h"
#include "_board.h"
enum { ROWS = 24, COLS = 80 }; //screen size

class TheSnakesGame {
	enum {ESC = 27};
	Snake s[2];
	Board theboard;
	Cookie cookie;

	char originalBoard[ROWS][COLS + 1];	// this is the ORIGINAL board that we got (we need COLS+1 because we handle it as null terminated char*)
	
	char board[ROWS][COLS + 1];	// this is the actual board we play on, i.e. changes on board are done here
	
	void handleObjectCreationFromBoard(int row, int col); // '@' , '#' are the start points of the two Snakes

public:
	void setBoard(); //copy board sent to us into originalBoard, setArrowKeys, setColor

	void init(); //copy original board to actual board (board) and set Snakes Start point

	bool isWall(const Point& p);//utilizes the next of the point to return answer

	bool isCookie(const Point& p);

	void run(); // run 2 Snakes with Keyboard
};

#endif