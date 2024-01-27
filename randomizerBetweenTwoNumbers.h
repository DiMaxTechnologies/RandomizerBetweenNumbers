#include <time.h>
#include <stdlib.h>

int randomizeBetween(int begin, int end, bool includeEnd=false) {
	srand(static_cast<unsigned int>(time(0)));
	
	int bias = 0;
	if (includeEnd) {
		bias = 1;
	}

	return (rand() % (end - begin + bias)) + begin;
}
