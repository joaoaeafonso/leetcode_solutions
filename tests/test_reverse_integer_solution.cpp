
#include <gtest/gtest.h>
#include <include/reverse_integer_solution.hpp>

using namespace medium;

class ReverseIntegerSolutionTest: public ::testing::Test { };

TEST_F(ReverseIntegerSolutionTest, assertPositiveNumbers) {
    EXPECT_EQ(ReverseIntegerSolution::reverse(1234), 4321);
    EXPECT_EQ(ReverseIntegerSolution::reverse(1), 1);
    EXPECT_EQ(ReverseIntegerSolution::reverse(10), 1);
}

TEST_F(ReverseIntegerSolutionTest,  assertNegativeNumbers) {
    EXPECT_EQ(ReverseIntegerSolution::reverse(-1234), -4321);
    EXPECT_EQ(ReverseIntegerSolution::reverse(-1), -1);
    EXPECT_EQ(ReverseIntegerSolution::reverse(-10), -1);
}

TEST_F(ReverseIntegerSolutionTest,  assertTrailingZeros) {
    EXPECT_EQ(ReverseIntegerSolution::reverse(120), 21);
    EXPECT_EQ(ReverseIntegerSolution::reverse(100), 1);
    EXPECT_EQ(ReverseIntegerSolution::reverse(-100), -1);
}

TEST_F(ReverseIntegerSolutionTest,  assertOverflowCases) {
    EXPECT_EQ(ReverseIntegerSolution::reverse(1534236469), 0); // Overflows
    EXPECT_EQ(ReverseIntegerSolution::reverse(-2147483648), 0); // INT_MIN case
    EXPECT_EQ(ReverseIntegerSolution::reverse(2147483647), 0); // INT_MAX case
}

TEST_F(ReverseIntegerSolutionTest,  assertZero) {
    EXPECT_EQ(ReverseIntegerSolution::reverse(0), 0);
}