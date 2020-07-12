// timeUtils namespace functions
#include "folf.hpp"
#if defined(_WIN32)
	#include <windows.h>
#elif (__linux__)
	#include <unistd.h>
#endif

long double folf::timeUtils::daysToHours(long double* days)
{
	return *days * 24;
}
long double folf::timeUtils::daysToMinutes(long double* days)
{
	return *days * 1440;
}
long double folf::timeUtils::daysToSeconds(long double* days)
{
	return *days * 86400;
}
long double folf::timeUtils::hoursToDays(long double* hours)
{
	return *hours / 24;
}
long double folf::timeUtils::hoursToMinutes(long double* hours)
{
	return *hours * 60;
}
long double folf::timeUtils::hoursToSeconds(long double* hours)
{
	return *hours * 3600;
}
long double folf::timeUtils::minutesToDays(long double* minutes)
{
	return *minutes / 1440;
}
long double folf::timeUtils::minutesToHours(long double* minutes)
{
	return *minutes / 60;
}
long double folf::timeUtils::minutesToSeconds(long double* minutes)
{
	return *minutes * 60;
}
long double folf::timeUtils::minutesToMilliseconds(long double* minutes)
{
	return *minutes * 60000;
}
long double folf::timeUtils::secondsToHours(long double* seconds)
{
	return *seconds / 3600;
}
long double folf::timeUtils::secondsToMinutes(long double* seconds)
{
	return *seconds / 60;
}
long double folf::timeUtils::secondsToMilliseconds(long double* seconds)
{
	return *seconds * 1000;
}
long double folf::timeUtils::secondsToMicroseconds(long double* seconds)
{
	return *seconds * 1000000;
}
long double folf::timeUtils::millisecondsToMinutes(long double* milliseconds)
{
	return *milliseconds / 60000;
}
long double folf::timeUtils::millisecondsToSeconds(long double* milliseconds)
{
	return *milliseconds / 1000;
}
long double folf::timeUtils::millisecondsToMicroseconds(long double* milliseconds)
{
	return *milliseconds * 1000;
}
long double folf::timeUtils::microsecondsToSeconds(long double* microseconds)
{
	return *microseconds / 1000000;
}
long double folf::timeUtils::microsecondsToMilliseconds(long double* microseconds)
{
	return *microseconds / 1000;
}
void folf::timeUtils::sleepFor(long double milliSeconds)
{
	// two versions are needed due to diffrent sleep() functions on windows and linux
	#if defined(_WIN32)
		Sleep(milliSeconds);
	#elif (__linux__)
		usleep(folf::timeUtils::millisecondsToMicroseconds(&milliSeconds));
	#endif
}