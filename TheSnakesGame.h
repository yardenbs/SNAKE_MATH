#ifndef _THESNAKESGAME_H_
#define _THESNAKESGAME_H_

#include "io_utils.h"
#include "Snake.h"
#include"Banner.h"
#include"Rat.h"
#include"Menu.h"
#include"_board.h"
#include <time.h>

enum { ROWS = 24, COLS = 80 }; //screen size

class TheSnakesGame {
	Snake s[2];
	vector<Rat> rat;

	Menu menu;

public:
	void setBoard(const char* boardToCopy[ROWS]); 
	void run(); // run 2 Snakes with Keyboard
};

#endif