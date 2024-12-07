
#include <gtest/gtest.h>
#include <include/minimum_k_swaps_for_consecutive_ones_solution.hpp>

using namespace hard;

class MinimumKSwapsForConsecutiveOnesSolutionTest: public ::testing::Test {};


TEST(MinimumKSwapsForConsecutiveOnesSolutionTest, testBasicCases) {
    const std::vector nums1 = {1, 0, 0, 1, 0, 1};
    EXPECT_EQ(MinimumKSwapsForConsecutiveOnesSolution::minMoves(nums1, 2), 1);

    const std::vector nums2 = {1, 0, 0, 0, 0, 0, 1, 1};
    EXPECT_EQ(MinimumKSwapsForConsecutiveOnesSolution::minMoves(nums2, 3), 5);

    const std::vector nums3 = {1, 1, 0, 1};
    EXPECT_EQ(MinimumKSwapsForConsecutiveOnesSolution::minMoves(nums3, 2), 0);
}

TEST(MinimumKSwapsForConsecutiveOnesSolutionTest, testEdgeCases) {
    const std::vector nums1 = {1};
    EXPECT_EQ(MinimumKSwapsForConsecutiveOnesSolution::minMoves(nums1, 1), 0);

    const std::vector nums2 = {1, 1, 1, 1, 1};
    EXPECT_EQ(MinimumKSwapsForConsecutiveOnesSolution::minMoves(nums2, 3), 0);

    const std::vector nums3 = {0, 0, 0, 0, 0, 1};
    EXPECT_EQ(MinimumKSwapsForConsecutiveOnesSolution::minMoves(nums3, 1), 0);
}

TEST(MinimumKSwapsForConsecutiveOnesSolutionTest, testSpecialPatterns) {
    const std::vector nums1 = {1, 0, 1, 0, 1, 0, 1};
    EXPECT_EQ(MinimumKSwapsForConsecutiveOnesSolution::minMoves(nums1, 4), 4);

    const std::vector nums2 = {1, 1, 1, 0, 0, 1, 1};
    EXPECT_EQ(MinimumKSwapsForConsecutiveOnesSolution::minMoves(nums2, 4), 2);

    const std::vector nums3 = {0, 1, 1, 1, 0, 1, 1};
    EXPECT_EQ(MinimumKSwapsForConsecutiveOnesSolution::minMoves(nums3, 5), 2);
}

TEST(MinimumKSwapsForConsecutiveOnesSolutionTest, testLargeInputs) {
    std::vector nums(100000, 0);
    for (int i = 0; i < 100000; i += 10) {
        nums[i] = 1;
    }
    EXPECT_EQ(MinimumKSwapsForConsecutiveOnesSolution::minMoves(nums, 10), 225);

    const std::vector nums2(100000, 1);
    EXPECT_EQ(MinimumKSwapsForConsecutiveOnesSolution::minMoves(nums2, 50000), 0);
}
