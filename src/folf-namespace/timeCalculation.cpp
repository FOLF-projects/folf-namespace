// timeCalculation namespace functions
#include "folf.hpp"

long double folf::timeCalculation::daysToHours(long double* days)
{
	return *days * 24;
}
long double folf::timeCalculation::daysToMinutes(long double* days)
{
	return *days * 1440;
}
long double folf::timeCalculation::daysToSeconds(long double* days)
{
	return *days * 86400;
}
long double folf::timeCalculation::hoursToDays(long double* hours)
{
	return *hours / 24;
}
long double folf::timeCalculation::hoursToMinutes(long double* hours)
{
	return *hours * 60;
}
long double folf::timeCalculation::hoursToSeconds(long double* hours)
{
	return *hours * 3600;
}
long double folf::timeCalculation::minutesToDays(long double* minutes)
{
	return *minutes / 1440;
}
long double folf::timeCalculation::minutesToHours(long double* minutes)
{
	return *minutes / 60;
}
long double folf::timeCalculation::minutesToSeconds(long double* minutes)
{
	return *minutes * 60;
}
long double folf::timeCalculation::minutesToMilliseconds(long double* minutes)
{
	return *minutes * 60000;
}
long double folf::timeCalculation::secondsToHours(long double* seconds)
{
	return *seconds / 3600;
}
long double folf::timeCalculation::secondsToMinutes(long double* seconds)
{
	return *seconds / 60;
}
long double folf::timeCalculation::secondsToMilliseconds(long double* seconds)
{
	return *seconds * 1000;
}
long double folf::timeCalculation::secondsToMicroseconds(long double* seconds)
{
	return *seconds * 1000000;
}
long double folf::timeCalculation::millisecondsToMinutes(long double* milliseconds)
{
	return *milliseconds / 60000;
}
long double folf::timeCalculation::millisecondsToSeconds(long double* milliseconds)
{
	return *milliseconds / 1000;
}
long double folf::timeCalculation::millisecondsToMicroseconds(long double* milliseconds)
{
	return *milliseconds / 1000;
}
long double folf::timeCalculation::microsecondsToSeconds(long double* microseconds)
{
	return *microseconds / 1000000;
}
long double folf::timeCalculation::microsecondsToMilliseconds(long double* microseconds)
{
	return *microseconds / 1000;
}
