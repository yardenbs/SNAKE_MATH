#ifndef _THESNAKESGAME_H_
#define _THESNAKESGAME_H_


#include "io_utils.h"
<<<<<<< HEAD
#include <vector>
using namespace std;
 
=======
#include <time.h>
>>>>>>> 60b7589563aa852dec577ce45729047e7a7e9ede

enum { ROWS = 24, COLS = 80 }; //screen size

class TheSnakesGame {
	
public:
	void setBoard(const char* boardToCopy[ROWS]); 
	void run(); // run 2 Snakes with Keyboard
};

#endif