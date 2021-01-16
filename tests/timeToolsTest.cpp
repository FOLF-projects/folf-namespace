#include <gtest/gtest.h>
#include <folf/timeTools.hpp>

// testing for folf's timeTools header

TEST(timeToolsTest, timeConversionTest)
{
    EXPECT_EQ(folf_daysToHours(3248), 77952);
    EXPECT_FLOAT_EQ(folf_daysToHours(45.93), 1102.32);
    EXPECT_EQ(folf_daysToMinutes(3248), 4677120);
    EXPECT_FLOAT_EQ(folf_daysToMinutes(45.93), 66139.2);
    EXPECT_EQ(folf_daysToSeconds(3248), 280627200);
    EXPECT_EQ(folf_daysToSeconds(45.93), 3968352);
    EXPECT_FLOAT_EQ(folf_hoursToDays(3248), 135.33333);
    EXPECT_FLOAT_EQ(folf_hoursToDays(45.93), 1.91375);
    EXPECT_EQ(folf_hoursToMinutes(3248), 194880);
    EXPECT_FLOAT_EQ(folf_hoursToMinutes(45.93), 2755.8);
    EXPECT_EQ(folf_hoursToSeconds(3248), 11692800);
    EXPECT_EQ(folf_hoursToSeconds(45.93), 165348);
    EXPECT_FLOAT_EQ(folf_minutesToDays(3248), 2.2555556);
    EXPECT_FLOAT_EQ(folf_minutesToDays(45.93), 0.031895833);
    EXPECT_FLOAT_EQ(folf_minutesToHours(3248), 54.133333);
    EXPECT_FLOAT_EQ(folf_minutesToHours(45.93), 0.7655);
    EXPECT_EQ(folf_minutesToSeconds(3248), 194880);
    EXPECT_FLOAT_EQ(folf_minutesToSeconds(45.93), 2755.8);
    EXPECT_EQ(folf_minutesToMilliseconds(3248), 194880000);
    EXPECT_EQ(folf_minutesToMilliseconds(45.93), 2755800);
    EXPECT_FLOAT_EQ(folf_secondsToHours(3248), 0.90222222);
    EXPECT_FLOAT_EQ(folf_secondsToHours(45.93), 0.012758333);
    EXPECT_FLOAT_EQ(folf_secondsToMinutes(3248), 54.133333);
    EXPECT_FLOAT_EQ(folf_secondsToMinutes(45.93), 0.7655);
    EXPECT_EQ(folf_secondsToMilliseconds(3248), 3248000);
    EXPECT_EQ(folf_secondsToMilliseconds(45.93), 45930);
    EXPECT_EQ(folf_secondsToMicroseconds(324), 324000000);
    EXPECT_EQ(folf_secondsToMicroseconds(45.93), 45930000);
    EXPECT_FLOAT_EQ(folf_millisecondsToMinutes(3248), 0.054133333);
    EXPECT_FLOAT_EQ(folf_millisecondsToMinutes(45.93), 0.0007655);
    EXPECT_FLOAT_EQ(folf_millisecondsToSeconds(3248), 3.248);
    EXPECT_FLOAT_EQ(folf_millisecondsToSeconds(45.93), 0.04593);
    EXPECT_EQ(folf_millisecondsToMicroseconds(3248), 3248000);
    EXPECT_EQ(folf_millisecondsToMicroseconds(45.93), 45930);
    EXPECT_FLOAT_EQ(folf_microsecondsToSeconds(3248), 0.003248);
    EXPECT_FLOAT_EQ(folf_microsecondsToSeconds(145.93), 0.00014593);
    EXPECT_FLOAT_EQ(folf_microsecondsToMilliseconds(3248), 3.248);
    EXPECT_FLOAT_EQ(folf_microsecondsToMilliseconds(45.93), 0.04593);
}
