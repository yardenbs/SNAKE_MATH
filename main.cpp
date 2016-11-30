#include <windows.h>
#include <iostream>
using namespace std;

#include "TheSnakesGame.h"


int main() {
	TheSnakesGame game;
	game.setBoard();
	game.init();
	game.run();
}