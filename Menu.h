#ifndef MENU
#define MENU
class TheSnakesGame;

enum{MEN_ROWS = 10, MEN_COLS = 25};

const char* main_menu[MEN_ROWS] = {
   //          10        20        30        40        50        60        70       79
   //01234567890123456789012345678901234567890123456789012345678901234567890123456789
	"@@@@@@@@@@@@@@@@@@@@@@@@@", // 0
	"@       MAIN MENUE:     @", // 1
	"@       **********      @", // 2
	"@                       @", // 3
	"@   (1) How to play?    @", // 4
	"@   (2) Start Game!     @", // 5
	"@   (9)    Exit         @", // 6
	"@                       @", // 7
	"@                       @", // 8
	"@@@@@@@@@@@@@@@@@@@@@@@@@", // 9
//   01234567890123456789012345678901234567890123456789012345678901234567890123456789
};

const char* pause_menu[MEN_ROWS] = {
   //          10        20        30        40        50        60        70       79
   //01234567890123456789012345678901234567890123456789012345678901234567890123456789
	"@@@@@@@@@@@@@@@@@@@@@@@@@", // 0
	"@       MAIN MENU:      @", // 1
	"@       **********      @", // 2
	"@ (1)    Exit           @", // 3
	"@ (2) Go to Main Menue  @", // 4
	"@ (3)   Resume Game     @", // 5
	"@ (4)  Restart Level    @", // 6
	"@ (5) Begin new Level   @", // 7
	"@ (6)  Start new Game   @", // 8
	"@@@@@@@@@@@@@@@@@@@@@@@@@", // 9
//   01234567890123456789012345678901234567890123456789012345678901234567890123456789
};

/*
const char* instructions_menu[MEN_ROWS] = {
	//          10        20        30        40        50        60        70       79
	//01234567890123456789012345678901234567890123456789012345678901234567890123456789
	"@@@@@@@@@@@@@@@@@@@@@@@@@", // 0
	"@       MAIN MENU:     @", // 1
	"@       **********      @", // 2
	"@                       @", // 3
	"@   (1) How to play?    @", // 4
	"@   (2) Start Game!     @", // 5
	"@   (9)    Exit         @", // 6
	"@                       @", // 7
	"@                       @", // 8
	"@@@@@@@@@@@@@@@@@@@@@@@@@", // 9
								 //   01234567890123456789012345678901234567890123456789012345678901234567890123456789
};
*/


class Menu {
	//data  members:
	TheSnakesGame* theGame;
public:
	void setGame(TheSnakesGame* _theGame) {
		theGame = _theGame;
	}
	//functions:
	void draw(const char** menue_) {
		gotoxy(25, 5);//center of the board...

		for (int i = 0; i < MEN_ROWS; i++)//start after the top banner
		{
			for (int j = 0; j < MEN_COLS; j++)
				cout << menue_[i][j];
			gotoxy(25, 5 + i);
		}
	}

};


#endif // !MENUE
#pragma once
