// =============================================================================================
// FOLF - A C++ library developed by a fox and a wolf for testing and making development easier!
// timeTool.hpp - Includes various time related functions of FOLF
// developed and distributed by FOLF-projects on GitHub
// see for licence details (MIT) at its official distribution:
// https://github.com/FOLF-projects/folf-namespace
// =============================================================================================
#pragma once

// macro functions
#define daysToHours(days) days * (long long)24
#define daysToMinutes(days) days * (long long)1440
#define daysToSeconds(days) days * (long long)86400
#define hoursToDays(hours) hours / (double)24
#define hoursToMinutes(hours) hours * (long long)60
#define hoursToSeconds(hours) hours * (long long)3600
#define minutesToDays(minutes) minutes / (double)1440
#define minutesToHours(minutes) minutes / (double)60
#define minutesToSeconds(minutes) minutes * (long long)60
#define minutesToMilliseconds(minutes) minutes * (long long)60000
#define secondsToHours(seconds) seconds / (double)3600
#define secondsToMinutes(seconds) seconds / (double)60
#define secondsToMilliseconds(seconds) seconds * (long long)1000
#define secondsToMicroseconds(seconds) seconds  * (long long)1000000
#define millisecondsToMinutes(milliseconds) milliseconds / (double)60000
#define millisecondsToSeconds(milliseconds) milliseconds / (double)1000
#define millisecondsToMicroseconds(milliseconds) milliseconds * (long long)1000
#define microsecondsToSeconds(microseconds) microseconds / (double)1000000
#define microsecondsToMilliseconds(microseconds) microseconds / (double)1000


// includes various functions for benchmarking and common tasks
namespace folf
{
    // Includes various time related functions
    namespace timeTools {
        // sleep for the given number of milliseconds
        void sleepFor(long double);
        // a simple timer with additional features
        class timer
        {
        private:
            unsigned int startTime{};
            unsigned short int timeToWait{};
        public:
            explicit timer(unsigned short int);
            virtual ~timer() = default;
            [[nodiscard]] bool done() const;
            void reset();
        };
        // returns the current chrono timestamp
        unsigned int getTimestamp();
        // writes its lifetime into the console - used for benchmarking
        class timeBench {
        private:
            long double startTime;
        public:
            // starts time benchmarking
            timeBench();
            // stops time benchmarking
            ~timeBench();
        };
    }
}
