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

class FindSquaredInt: public Level {

public:
	FindSquaredInt() : Level("Eat squared integer numbers only!") {}

	virtual bool isSol(const int num);

};



#endif // !PLAYGROUND
