
#include <gtest/gtest.h>
#include <include/minimum_limit_balls_in_bag_solution.hpp>


using namespace medium;

class MinimumLimitBallsInBagSolutionTest: public ::testing::Test {};

TEST_F(MinimumLimitBallsInBagSolutionTest, testBasicFunctionality) {
    const std::vector nums = {9, 2, 6, 8};
    constexpr int maxOperations = 4;
    EXPECT_EQ(MinimumLimitBallsInBagSolution::minimumSize(nums, maxOperations), 4);
}

TEST_F(MinimumLimitBallsInBagSolutionTest, testLargeNumber) {
    const std::vector nums = {1000000000};
    constexpr int maxOperations = 1;
    EXPECT_EQ(MinimumLimitBallsInBagSolution::minimumSize(nums, maxOperations), 500000000);
}

TEST_F(MinimumLimitBallsInBagSolutionTest, testAllElementsSame) {
    const std::vector nums = {5, 5, 5, 5};
    constexpr int maxOperations = 3;
    EXPECT_EQ(MinimumLimitBallsInBagSolution::minimumSize(nums, maxOperations), 5);
}

TEST_F(MinimumLimitBallsInBagSolutionTest, testSingleElement) {
    const std::vector nums = {7};
    constexpr int maxOperations = 3;
    EXPECT_EQ(MinimumLimitBallsInBagSolution::minimumSize(nums, maxOperations), 2);
}

TEST_F(MinimumLimitBallsInBagSolutionTest, testNoOperationsAllowed) {
    const std::vector nums = {4, 7, 9};
    constexpr int maxOperations = 0;
    EXPECT_EQ(MinimumLimitBallsInBagSolution::minimumSize(nums, maxOperations), 9);
}

TEST_F(MinimumLimitBallsInBagSolutionTest, testEmptyVector) {
    constexpr std::vector<int> nums = {};
    constexpr int maxOperations = 5;
    EXPECT_EQ(MinimumLimitBallsInBagSolution::minimumSize(nums, maxOperations), 0);
}

TEST_F(MinimumLimitBallsInBagSolutionTest, testOperationsExceedSize) {
    const std::vector nums = {1, 2, 3};
    constexpr int maxOperations = 100;
    EXPECT_EQ(MinimumLimitBallsInBagSolution::minimumSize(nums, maxOperations), 1);
}

TEST_F(MinimumLimitBallsInBagSolutionTest, testLargeInputVector) {
    const std::vector nums(10000, 100);
    constexpr int maxOperations = 5000;
    EXPECT_EQ(MinimumLimitBallsInBagSolution::minimumSize(nums, maxOperations), 100);
}

TEST_F(MinimumLimitBallsInBagSolutionTest, testPenaltyEqualsMax) {
    const std::vector nums = {1, 2, 3, 4, 5};
    constexpr int maxOperations = 0;
    EXPECT_EQ(MinimumLimitBallsInBagSolution::minimumSize(nums, maxOperations), 5);
}
