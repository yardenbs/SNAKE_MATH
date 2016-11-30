
#ifndef _BANNER_
#define _BANNER_
#include "TheSnakesGame.h"
class Banner {

	int score1, score2;
	TheSnakesGame* theGame;
	enum score_pose
	{
		poseX1 = 75,
		poseY1 = 0,
		poseX2 = 75,
		poseY2 = 1,
	};


public:
	Banner(int _score1 = 0, int _score2 = 0) : score1(_score1), score2(_score2) {}

	void setGame(TheSnakesGame* _theGame) {
		theGame = _theGame;
	}
	void draw() {
		gotoxy(poseX1, poseY1);
		cout << score1;
		cout.flush();
		gotoxy(poseX2, poseY2);
		cout << score2;
		cout.flush();
		//need to print task
	}
};



#endif
