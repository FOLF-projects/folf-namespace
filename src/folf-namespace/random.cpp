// random namespace functions
#include "folf.h"

int folf::random::randomNum(int *maxNum) {
	std::srand((unsigned)time(0));
	return std::rand() % *maxNum;
}
bool folf::random::isChance(int *chanceDenominator) {
	if (folf::random::randomNum(chanceDenominator) == 0) {
		return true;
	}
	return false;
}
