
#ifndef BOARD


#define BOARD




enum { ROWS = 24, COLS = 80 }; //screen size

const char* board_example[ROWS] = {
	//	         10        20        30        40        50        60        70       79
	//	01234567890123456789012345678901234567890123456789012345678901234567890123456789
	"TASK:                                                              |## SCORE ###", // 0
	"                                                                   |P1:   |P2:  ", // 1
	"___________________________________________________________________#############", // 2
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
	"                                                              @                 ", // 17
	"                                                                                ", // 18
	"                                                                                ", // 19
	"                 #                                                              ", // 20
	"                                                                                ", // 21
	"                                                                                ", // 22
	"                                                                                ", // 23
																						//   01234567890123456789012345678901234567890123456789012345678901234567890123456789
};


class Board {

	char originalBoard[ROWS][COLS + 1];	// this is the ORIGINAL board that we got (we need COLS+1 because we handle it as null terminated char*)
	TheSnakesGame* theGame;
public:

	char board[ROWS][COLS + 1];	// this is the actual board we play on, i.e. changes on board are done here
	void setGame(TheSnakesGame* _theGame) {
		theGame = _theGame;
	}

	Board() {
		for (int i = 0; i < ROWS; i++)
			for (int j = 0; j < COLS; j++)
				originalBoard[i][j] = board_example[i][j];
	}

	void draw() {
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				board[i][j] = originalBoard[i][j];
				gotoxy(j, i);//reversed order cols=x rows=y
				cout << originalBoard[i][j];
			}
		}
	}


};
#endif // !1