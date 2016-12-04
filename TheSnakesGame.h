#ifndef _THESNAKESGAME_H_
#define _THESNAKESGAME_H_


#include "io_utils.h"
#include <vector>
using namespace std;
 

enum { ROWS = 24, COLS = 80 }; //screen size

class TheSnakesGame {
	
public:
	void setBoard(const char* boardToCopy[ROWS]); 
	void run(); // run 2 Snakes with Keyboard
};

#endif