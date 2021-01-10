// =============================================================================================
// FOLF - A C++ library developed by a fox and a wolf for testing and making development easier!
// timeTool.hpp - Includes various time related functions of FOLF
// developed and distributed by FOLF-projects on GitHub
// see for licence details (MIT) at its official distribution:
// https://github.com/FOLF-projects/folf-namespace
// =============================================================================================
#pragma once

// includes various functions for benchmarking and common tasks
namespace folf
{
    // Includes various time related functions
    namespace timeTool {
        long double daysToHours(const long double *);
        long double daysToMinutes(const long double *);
        long double daysToSeconds(const long double *);
        long double hoursToDays(const long double *);
        long double hoursToMinutes(const long double *);
        long double hoursToSeconds(const long double *);
        long double minutesToDays(const long double *);
        long double minutesToHours(const long double *);
        long double minutesToSeconds(const long double *);
        long double minutesToMilliseconds(const long double *);
        long double secondsToHours(const long double *);
        long double secondsToMinutes(const long double *);
        long double secondsToMilliseconds(const long double *);
        long double secondsToMicroseconds(const long double *);
        long double millisecondsToMinutes(const long double *);
        long double millisecondsToSeconds(const long double *);
        long double millisecondsToMicroseconds(const long double *);
        long double microsecondsToSeconds(const long double *);
        long double microsecondsToMilliseconds(const long double *);
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
