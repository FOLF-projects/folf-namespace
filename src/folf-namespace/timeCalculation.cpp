// time class source
#include "folf.h"

double folf::timeCalculation::daysToHours(double* days)
{
	return *days * 24;

}
double folf::timeCalculation::daysToMinutes(double* days)
{
	return *days * 1440;
}
double folf::timeCalculation::daysToSeconds(double* days)
{
	return *days * 86400;

}
double folf::timeCalculation::hoursToDays(double* hours)
{
	return *hours / 24;
}
double folf::timeCalculation::hoursToMinutes(double* hours)
{
	return *hours * 60;
}
double folf::timeCalculation::hoursToSeconds(double* hours)
{
	return *hours * 3600;
}
double folf::timeCalculation::minutesToDays(double* minutes)
{
	return *minutes / 1440;
}
double folf::timeCalculation::minutesToHours(double* minutes)
{
	return *minutes / 60;
}
double folf::timeCalculation::minutesToSeconds(double* minutes)
{
	return *minutes * 60;
}
double folf::timeCalculation::minutesToMilliseconds(double* minutes)
{
	return *minutes * 60000;
}
double folf::timeCalculation::secondsToHours(double* seconds)
{
	return *seconds / 3600;
}
double folf::timeCalculation::secondsToMinutes(double* seconds)
{
	return *seconds / 60;
}
double folf::timeCalculation::secondsToMilliseconds(double* seconds)
{
	return *seconds * 1000;
}
double folf::timeCalculation::secondsToMicroseconds(double* seconds)
{
	return *seconds * 1000000;
}
double folf::timeCalculation::millisecondsToMinutes(double* milliseconds)
{
	return *milliseconds / 60000;
}
double folf::timeCalculation::millisecondsToSeconds(double* milliseconds)
{
	return *milliseconds / 1000;
}
double folf::timeCalculation::millisecondsToMicroseconds(double* milliseconds)
{
	return *milliseconds / 1000;
}
double folf::timeCalculation::microsecondsToSeconds(double* microseconds)
{
	return *microseconds / 1000000;
}
double folf::timeCalculation::microsecondsToMilliseconds(double* microseconds)
{
	return *microseconds / 1000;
}