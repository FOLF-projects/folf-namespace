// time class source
#include "folf.h"

// multiplicator/divisor for 1 = 60 (and extended to full double size, otherwise it doesnt work on windows)
// 1 / 60 = 60
// multiplicator/divisor for 1 = 24 (and extended to full double size, otherwise it doesnt work on windows)
// 1 / 24 = 24
// multiplicator/divisor for 1 = 1000
// 1 / 1000 = 0,001


folf::timeCalcualtion::timeCalcualtion()
{
}
folf::timeCalcualtion::~timeCalcualtion()
{
}
double folf::timeCalcualtion::daysToHours(double* days)
{
	return *days * 24;

}
double folf::timeCalcualtion::daysToMinutes(double* days)
{
	return *days * 1440;
}
double folf::timeCalcualtion::daysToSeconds(double* days)
{
	return *days * 86400;

}
double folf::timeCalcualtion::hoursToDays(double* hours)
{
	return *hours / 24;
}
double folf::timeCalcualtion::hoursToMinutes(double* hours)
{
	return *hours * 60;
}
double folf::timeCalcualtion::hoursToSeconds(double* hours)
{
	return *hours * 3600;
}
double folf::timeCalcualtion::minutesToDays(double* minutes)
{
	return *minutes / 1440;
}
double folf::timeCalcualtion::minutesToHours(double* minutes)
{
	return *minutes / 60;
}
double folf::timeCalcualtion::minutesToSeconds(double* minutes)
{
	return *minutes * 60;
}
double folf::timeCalcualtion::minutesToMilliseconds(double* minutes)
{
	return *minutes * 60000;
}
double folf::timeCalcualtion::secondsToHours(double* seconds)
{
	return *seconds / 3600;
}
double folf::timeCalcualtion::secondsToMinutes(double* seconds)
{
	return *seconds / 60;
}
double folf::timeCalcualtion::secondsToMilliseconds(double* seconds)
{
	return *seconds * 1000;
}
double folf::timeCalcualtion::secondsToMicroseconds(double* seconds)
{
	return *seconds * 1000000;
}
double folf::timeCalcualtion::millisecondsToMinutes(double* milliseconds)
{
	return *milliseconds / 60000;
}
double folf::timeCalcualtion::millisecondsToSeconds(double* milliseconds)
{
	return *milliseconds / 1000;
}
double folf::timeCalcualtion::millisecondsToMicroseconds(double* milliseconds)
{
	return *milliseconds / 1000;
}
double folf::timeCalcualtion::microsecondsToSeconds(double* microseconds)
{
	return *microseconds / 1000000;
}
double folf::timeCalcualtion::microsecondsToMilliseconds(double* microseconds)
{
	return *microseconds / 1000;
}