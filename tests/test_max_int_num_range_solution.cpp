
#include <gtest/gtest.h>
#include <include/max_int_num_range_solution.hpp>

using namespace medium;

class MaxIntNumRangeSolutionTest: public MaxIntNumRangeSolution, public ::testing::Test {
    protected:
        std::shared_ptr<MaxIntNumRangeSolution> m_solutionPtr;
};

TEST_F(MaxIntNumRangeSolutionTest, NoBannedNumbersWithinMaxSum) {
    m_solutionPtr = std::make_shared<MaxIntNumRangeSolution>();

    constexpr std::vector<int> banned = {};
    constexpr int n = 10;
    constexpr int maxSum = 15;

    EXPECT_EQ(m_solutionPtr->maxCount(banned, n, maxSum), 5);
}

TEST_F(MaxIntNumRangeSolutionTest, SomeBannedNumbers) {
    m_solutionPtr = std::make_shared<MaxIntNumRangeSolution>();

    const std::vector banned = {2, 3};
    constexpr int n = 10;
    constexpr int maxSum = 15;
    EXPECT_EQ(m_solutionPtr->maxCount(banned, n, maxSum), 3);
}

TEST_F(MaxIntNumRangeSolutionTest, AllNumbersBanned) {
    m_solutionPtr = std::make_shared<MaxIntNumRangeSolution>();

    const std::vector banned = {1, 2, 3, 4, 5};
    constexpr int n = 5;
    constexpr int maxSum = 15;
    EXPECT_EQ(m_solutionPtr->maxCount(banned, n, maxSum), 0);
}

TEST_F(MaxIntNumRangeSolutionTest, MaxSumSmallerThanFirstNumber) {
    m_solutionPtr = std::make_shared<MaxIntNumRangeSolution>();

    constexpr std::vector<int> banned = {};
    constexpr int n = 10;
    constexpr int maxSum = 0;
    EXPECT_EQ(m_solutionPtr->maxCount(banned, n, maxSum), 0);
}

TEST_F(MaxIntNumRangeSolutionTest, LargeRangeSmallMaxSum) {
    m_solutionPtr = std::make_shared<MaxIntNumRangeSolution>();

    constexpr std::vector<int> banned = {};
    constexpr int n = 1000;
    constexpr int maxSum = 5;
    EXPECT_EQ(m_solutionPtr->maxCount(banned, n, maxSum), 2);
}

TEST_F(MaxIntNumRangeSolutionTest, BannedNumbersOutsideRange) {
    m_solutionPtr = std::make_shared<MaxIntNumRangeSolution>();

    const std::vector banned = {100, 101, 102};
    constexpr int n = 10;
    constexpr int maxSum = 15;
    EXPECT_EQ(m_solutionPtr->maxCount(banned, n, maxSum), 5);
}

TEST_F(MaxIntNumRangeSolutionTest, NoBannedNumbersLargeMaxSum) {
    m_solutionPtr = std::make_shared<MaxIntNumRangeSolution>();

    constexpr std::vector<int> banned = {};
    constexpr int n = 10;
    constexpr int maxSum = 100;
    EXPECT_EQ(m_solutionPtr->maxCount(banned, n, maxSum), 10);
}

TEST_F(MaxIntNumRangeSolutionTest, LargeInputWithBannedNumbers) {
    m_solutionPtr = std::make_shared<MaxIntNumRangeSolution>();

    const std::vector banned = {2, 4, 6, 8, 10};
    constexpr int n = 20;
    constexpr int maxSum = 50;
    EXPECT_EQ(m_solutionPtr->maxCount(banned, n, maxSum), 7);
}
