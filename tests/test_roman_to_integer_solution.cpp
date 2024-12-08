
#include <gtest/gtest.h>
#include <include/roman_to_integer_solution.hpp>


using namespace easy;

class RomanToIntegerSolutionTest: public ::testing::Test {};

TEST_F(RomanToIntegerSolutionTest, testBasicCases) {
    EXPECT_EQ(RomanToIntegerSolution::romanToInt("III"), 3);
    EXPECT_EQ(RomanToIntegerSolution::romanToInt("IV"), 4);
    EXPECT_EQ(RomanToIntegerSolution::romanToInt("IX"), 9);
    EXPECT_EQ(RomanToIntegerSolution::romanToInt("LVIII"), 58);
    EXPECT_EQ(RomanToIntegerSolution::romanToInt("MCMXCIV"), 1994);
}

TEST_F(RomanToIntegerSolutionTest, testEdgeCases) {
    EXPECT_EQ(RomanToIntegerSolution::romanToInt("I"), 1);
    EXPECT_EQ(RomanToIntegerSolution::romanToInt("MMMCMXCIX"), 3999);
    EXPECT_EQ(RomanToIntegerSolution::romanToInt("D"), 500);
    EXPECT_EQ(RomanToIntegerSolution::romanToInt("C"), 100);
    EXPECT_EQ(RomanToIntegerSolution::romanToInt("M"), 1000);
}

TEST_F(RomanToIntegerSolutionTest, testComplexCases) {
    EXPECT_EQ(RomanToIntegerSolution::romanToInt("XCIX"), 99);
    EXPECT_EQ(RomanToIntegerSolution::romanToInt("CDXLIV"), 444);
    EXPECT_EQ(RomanToIntegerSolution::romanToInt("MMXXIV"), 2024);
    EXPECT_EQ(RomanToIntegerSolution::romanToInt("LXXXVIII"), 88);
    EXPECT_EQ(RomanToIntegerSolution::romanToInt("CMXL"), 940);
}

TEST_F(RomanToIntegerSolutionTest, testInvalidCases) {
    EXPECT_EQ(RomanToIntegerSolution::romanToInt(""), 0);
    EXPECT_EQ(RomanToIntegerSolution::romanToInt("IIII"), 4);
    EXPECT_EQ(RomanToIntegerSolution::romanToInt("VV"), 10);
}