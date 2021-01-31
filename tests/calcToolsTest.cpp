#include <gtest/gtest.h>

// testing for folf's calcTools header

// example test, TEST(TEST_SUITE, TEST_NAME) << "OPTIONAL TEST DESCRIPTION"
TEST(timeToolsTest, exampleTest)
{
    const unsigned long long primeSeven = 7;
    EXPECT_EQ(checkPrime(&primeSeven),true) << "Checks that 7 is a prime";
    
    const unsigned long long primeTwelve = 12;
    EXPECT_EQ(checkPrime(&primeTwelve),true) << "Checks that 12 is no prime";
  
    const unsigned long long maxNum = 1000000;
    const unsigned long long primeSum;
    primeSum(&maxNum, &primeSum)
    EXPECT_EQ(primeSum,3203324994357) << "Tests primeSum";
    
    const unsigned int numOne = 3;
    const unsigned int numTwo = 2;
    EXPECT_EQ(createVector(&numOne, &numTwo),(numOne - numTwo)) << "Tests vector function";
}
