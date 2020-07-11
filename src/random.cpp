// random namespace functions
#include "folf.hpp"
#include "pch.hpp"

int folf::random::randomNum(int *maxNum) {
	std::srand((unsigned)time(0)); // generates a semi-random number based on the current time
	return std::rand() % *maxNum; // lowers the number to the specified range
}
bool folf::random::isChance(int *chanceDenominator) {
	if (folf::random::randomNum(chanceDenominator) == 0) {
		return true;
	}
	return false;
}
