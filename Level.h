#ifndef LEVEL

#define LEVEL
#include <string.h>
#include <iostream>
using namespace std;

class Level {
	char* task;
public:
	Level(const char* _task) {
		_task = new char[strlen(_task) + 1];
		strcpy(task, _task);
	}
	virtual bool isSol(const int num) = 0;
	const char* getTask() { return task; };
	~Level() {
		delete[] task;//should we make destructor in sub-classes????
	}

};


class FindPrimes : public Level {

public:
	FindPrimes() : Level("Eat prime numbers only!") {}

	virtual bool isSol(const int num);

};

class DividesBy7 : public Level {

public:
	DividesBy7() : Level("Eat numbers that divide by 7!"){}

	virtual bool isSol(const int num) { return num % 7 == 0; }

};

class DividesBy4 : public Level {

public:
	DividesBy4() : Level("Eat numbers that divide by 4!") {}

	virtual bool isSol(const int num) { return num % 4 == 0; }


};

class Div7Remain3 : public Level {

public:
	Div7Remain3() : Level("Eat numbers that have a remainder of 3 when divided by 7!") {}

	virtual bool isSol(const int num) { return num % 7 == 3; }

};

class OneSixtyNine : public Level {

public:
	OneSixtyNine() : Level("Eat 13 squared!") {}

	virtual bool isSol(const int num) { return num == 169; }

};

#endif // !PLAYGROUND
