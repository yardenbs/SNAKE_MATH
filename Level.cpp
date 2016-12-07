#include "Level.h"


bool FindPrimes::isSol(const int num){
	int primes[]{ 2, 3, 5, 7,     11,     13,     17,     19,     23,     29,
		31,     37,     41,     43,    47,     53,     59,     61,     67,    71,
		73,     79,     83,     89,     97,   101,    103,    107,    109,    113,
		127,    131,    137,    139,    149,    151,    157,    163,    167
	};

	for (int i = 0; i < sizeof(primes) / sizeof(primes[0]); i++)
	{
		if (num == primes[i])
			return true;
	}
	return false;
}



