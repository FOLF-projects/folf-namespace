#include <gtest/gtest.h>
#include <folf/timeTools.hpp>

// testing for folf's timeTools header

TEST(timeToolsTest, timeConversionTest)
{
    EXPECT_EQ(daysToHours(3248), 77952);
    EXPECT_FLOAT_EQ(daysToHours(45.93), 1102.32);
    EXPECT_EQ(daysToMinutes(3248), 4677120);
    EXPECT_FLOAT_EQ(daysToMinutes(45.93), 66139.2);
    EXPECT_EQ(daysToSeconds(3248), 280627200);
    EXPECT_EQ(daysToSeconds(45.93), 3968352);
    EXPECT_FLOAT_EQ(hoursToDays(3248), 135.33333);
    EXPECT_FLOAT_EQ(hoursToDays(45.93), 1.91375);
    EXPECT_EQ(hoursToMinutes(3248), 194880);
    EXPECT_FLOAT_EQ(hoursToMinutes(45.93), 2755.8);
    EXPECT_EQ(hoursToSeconds(3248), 11692800);
    EXPECT_EQ(hoursToSeconds(45.93), 165348);
    EXPECT_FLOAT_EQ(minutesToDays(3248), 2.2555556);
    EXPECT_FLOAT_EQ(minutesToDays(45.93), 0.031895833);
    EXPECT_FLOAT_EQ(minutesToHours(3248), 54.133333);
    EXPECT_FLOAT_EQ(minutesToHours(45.93), 0.7655);
    EXPECT_EQ(minutesToSeconds(3248), 194880);
    EXPECT_FLOAT_EQ(minutesToSeconds(45.93), 2755.8);
    EXPECT_EQ(minutesToMilliseconds(3248), 194880000);
    EXPECT_EQ(minutesToMilliseconds(45.93), 2755800);
    EXPECT_FLOAT_EQ(secondsToHours(3248), 0.90222222);
    EXPECT_FLOAT_EQ(secondsToHours(45.93), 0.012758333);
    EXPECT_FLOAT_EQ(secondsToMinutes(3248), 54.133333);
    EXPECT_FLOAT_EQ(secondsToMinutes(45.93), 0.7655);
    EXPECT_EQ(secondsToMilliseconds(3248), 3248000);
    EXPECT_EQ(secondsToMilliseconds(45.93), 45930);
    EXPECT_EQ(secondsToMicroseconds(324), 324000000);
    EXPECT_EQ(secondsToMicroseconds(45.93), 45930000);
    EXPECT_FLOAT_EQ(millisecondsToMinutes(3248), 0.054133333);
    EXPECT_FLOAT_EQ(millisecondsToMinutes(45.93), 0.0007655);
    EXPECT_FLOAT_EQ(millisecondsToSeconds(3248), 3.248);
    EXPECT_FLOAT_EQ(millisecondsToSeconds(45.93), 0.04593);
    EXPECT_EQ(millisecondsToMicroseconds(3248), 3248000);
    EXPECT_EQ(millisecondsToMicroseconds(45.93), 45930);
    EXPECT_FLOAT_EQ(microsecondsToSeconds(3248), 0.003248);
    EXPECT_FLOAT_EQ(microsecondsToSeconds(145.93), 0.00014593);
    EXPECT_FLOAT_EQ(microsecondsToMilliseconds(3248), 3.248);
    EXPECT_FLOAT_EQ(microsecondsToMilliseconds(45.93), 0.04593);
}
