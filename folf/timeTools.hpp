// =============================================================================================
// FOLF - A C++ library developed by a fox and a wolf for testing and making development easier!
// timeTool.hpp - Includes various time related functions of FOLF
// developed and distributed by FOLF-projects on GitHub
// see for licence details (MIT) at its official distribution:
// https://github.com/FOLF-projects/folf-namespace
// =============================================================================================
#pragma once

// macros
#define folf_daysToHours(days) days * (long long)24
#define folf_daysToMinutes(days) days * (long long)1440
#define folf_daysToSeconds(days) days * (long long)86400
#define folf_hoursToDays(hours) hours / (double)24
#define folf_hoursToMinutes(hours) hours * (long long)60
#define folf_hoursToSeconds(hours) hours * (long long)3600
#define folf_minutesToDays(minutes) minutes / (double)1440
#define folf_minutesToHours(minutes) minutes / (double)60
#define folf_minutesToSeconds(minutes) minutes * (long long)60
#define folf_minutesToMilliseconds(minutes) minutes * (long long)60000
#define folf_secondsToHours(seconds) seconds / (double)3600
#define folf_secondsToMinutes(seconds) seconds / (double)60
#define folf_secondsToMilliseconds(seconds) seconds * (long long)1000
#define folf_secondsToMicroseconds(seconds) seconds  * (long long)1000000
#define folf_millisecondsToMinutes(milliseconds) milliseconds / (double)60000
#define folf_millisecondsToSeconds(milliseconds) milliseconds / (double)1000
#define folf_millisecondsToMicroseconds(milliseconds) milliseconds * (long long)1000
#define folf_microsecondsToSeconds(microseconds) microseconds / (double)1000000
#define folf_microsecondsToMilliseconds(microseconds) microseconds / (double)1000
// returns a std::chrono::time_point, requires <chrono>
#define folf_getTimestamp std::chrono::time_point_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now()).time_since_epoch().count()

// includes various functions for benchmarking and common tasks
namespace folf::timeTools {
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
        // writes its lifetime into the console - used for benchmarking
        class timeBench {
        private:
            long double startTime{};
        public:
            // starts time benchmarking
            timeBench();
            // stops time benchmarking
            ~timeBench();
        };
    }
