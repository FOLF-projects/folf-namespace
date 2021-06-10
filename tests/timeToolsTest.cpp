#include <gtest/gtest.h>
#include <folf/timeTools.hpp>

// testing for folf's timeTools header
TEST(timeToolsTest, timeConversionTest)
{
    EXPECT_EQ((unsigned int)folf::timeTools::daysToHours(3248), 77952);
    EXPECT_FLOAT_EQ(folf::timeTools::daysToHours(45.93), 1102.32);
    EXPECT_EQ(folf::timeTools::daysToMinutes(3248), 4677120);
    EXPECT_FLOAT_EQ(folf::timeTools::daysToMinutes(45.93), 66139.2);
    EXPECT_EQ(folf::timeTools::daysToSeconds(3248), 280627200);
    EXPECT_EQ(folf::timeTools::daysToSeconds(45.93), 3968352);
    EXPECT_FLOAT_EQ(folf::timeTools::hoursToDays(3248), 135.33333);
    EXPECT_FLOAT_EQ(folf::timeTools::hoursToDays(45.93), 1.91375);
    EXPECT_EQ(folf::timeTools::hoursToMinutes(3248), 194880);
    EXPECT_FLOAT_EQ(folf::timeTools::hoursToMinutes(45.93), 2755.8);
    EXPECT_EQ(folf::timeTools::hoursToSeconds(3248), 11692800);
    EXPECT_EQ(folf::timeTools::hoursToSeconds(45.93), 165348);
    EXPECT_FLOAT_EQ(folf::timeTools::minutesToDays(3248), 2.2555556);
    EXPECT_FLOAT_EQ(folf::timeTools::minutesToDays(45.93), 0.031895833);
    EXPECT_FLOAT_EQ(folf::timeTools::minutesToHours(3248), 54.133333);
    EXPECT_FLOAT_EQ(folf::timeTools::minutesToHours(45.93), 0.7655);
    EXPECT_EQ(folf::timeTools::minutesToSeconds(3248), 194880);
    EXPECT_FLOAT_EQ(folf::timeTools::minutesToSeconds(45.93), 2755.8);
    EXPECT_EQ(folf::timeTools::minutesToMilliseconds(3248), 194880000);
    EXPECT_EQ(folf::timeTools::minutesToMilliseconds(45.93), 2755800);
    EXPECT_FLOAT_EQ(folf::timeTools::secondsToHours(3248), 0.90222222);
    EXPECT_FLOAT_EQ(folf::timeTools::secondsToHours(45.93), 0.012758333);
    EXPECT_FLOAT_EQ(folf::timeTools::secondsToMinutes(3248), 54.133333);
    EXPECT_FLOAT_EQ(folf::timeTools::secondsToMinutes(45.93), 0.7655);
    EXPECT_EQ(folf::timeTools::secondsToMilliseconds(3248), 3248000);
    EXPECT_EQ(folf::timeTools::secondsToMilliseconds(45.93), 45930);
    EXPECT_EQ(folf::timeTools::secondsToMicroseconds(324), 324000000);
    EXPECT_EQ(folf::timeTools::secondsToMicroseconds(45.93), 45930000);
    EXPECT_FLOAT_EQ(folf::timeTools::millisecondsToMinutes(3248), 0.054133333);
    EXPECT_FLOAT_EQ(folf::timeTools::millisecondsToMinutes(45.93), 0.0007655);
    EXPECT_FLOAT_EQ(folf::timeTools::millisecondsToSeconds(3248), 3.248);
    EXPECT_FLOAT_EQ(folf::timeTools::millisecondsToSeconds(45.93), 0.04593);
    EXPECT_EQ(folf::timeTools::millisecondsToMicroseconds(3248), 3248000);
    EXPECT_EQ(folf::timeTools::millisecondsToMicroseconds(45.93), 45930);
    EXPECT_FLOAT_EQ(folf::timeTools::microsecondsToSeconds(3248), 0.003248);
    EXPECT_FLOAT_EQ(folf::timeTools::microsecondsToSeconds(145.93), 0.00014593);
    EXPECT_FLOAT_EQ(folf::timeTools::microsecondsToMilliseconds(3248), 3.248);
    EXPECT_FLOAT_EQ(folf::timeTools::microsecondsToMilliseconds(45.93), 0.04593);
}
