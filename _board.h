#ifndef _BOARD

#define _BOARD

#include "TheSnakesGame.h"


const char* board_example[ROWS] = {
   //          10        20        30        40        50        60        70       79
   //01234567890123456789012345678901234567890123456789012345678901234567890123456789
	"       TASK:                                                                    ", // 0
	"P2:                                                                     P1:     ", // 1
	"________________________________________________________________________________", // 2
	"                                                                                ", // 3
	"                                                                                ", // 4
	"                                                                                ", // 5
	"                                                                                ", // 6
	"                                                                                ", // 7
	"                                                                                ", // 8
	"                                                                                ", // 9
	"                                                                                ", // 10
	"                                                                                ", // 11
	"                                                                                ", // 12
	"                                                                                ", // 13
	"                                                                                ", // 14
	"                                                                                ", // 15
	"                                                                                ", // 16
	"                                                                                ", // 17
	"                                                                                ", // 18
	"                                                                                ", // 19
	"                                                                                ", // 20
	"                                                                                ", // 21
	"                                                                                ", // 22
	"                                                                                ", // 23
//   01234567890123456789012345678901234567890123456789012345678901234567890123456789
};


class Board {

	char board[ROWS][COLS + 1];	// this is the actual board we play on, i.e. changes on board are done here

	TheSnakesGame* theGame;

public:
	void setGame(TheSnakesGame* _theGame) {
		theGame = _theGame;
	}

	Board() {
		for (int i = 0; i < ROWS; i++)
			for (int j = 0; j < COLS; j++)
				board[i][j] = board_example[i][j];
	}

	void draw() {//print yourself board!
		for (int i = 0; i < ROWS; i++)
			for (int j = 0; j < COLS; j++)
				cout<< board[i][j];
	}

};



#endif // !_BOARD

