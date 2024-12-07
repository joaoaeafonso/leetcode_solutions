
#include <gtest/gtest.h>
#include <include/find_median_sorted_arrays_solution.hpp>

using namespace hard;

class FindMedianSortedArraysSolutionTest : public ::testing::Test {};

TEST_F(FindMedianSortedArraysSolutionTest, testOddCombinedLength) {
    const std::vector nums1 = {1, 3};
    const std::vector nums2 = {2};
    constexpr double expected = 2.0;

    EXPECT_DOUBLE_EQ(FindMedianSortedArraysSolution::findMedianSortedArrays(nums1, nums2), expected);
}

TEST_F(FindMedianSortedArraysSolutionTest, testEvenCombinedLength) {
    const std::vector nums1 = {1, 2};
    const std::vector nums2 = {3, 4};
    constexpr double expected = 2.5;

    EXPECT_DOUBLE_EQ(FindMedianSortedArraysSolution::findMedianSortedArrays(nums1, nums2), expected);
}

TEST_F(FindMedianSortedArraysSolutionTest, testOneEmptyArray) {
    constexpr std::vector<int> nums1 = {};
    const std::vector nums2 = {1, 2, 3, 4};
    constexpr double expected = 2.5;

    EXPECT_DOUBLE_EQ(FindMedianSortedArraysSolution::findMedianSortedArrays(nums1, nums2), expected);
}

TEST_F(FindMedianSortedArraysSolutionTest, testArraysWithDuplicates) {
    const std::vector nums1 = {1, 1, 1};
    const std::vector nums2 = {1, 1};
    constexpr double expected = 1.0;

    EXPECT_DOUBLE_EQ(FindMedianSortedArraysSolution::findMedianSortedArrays(nums1, nums2), expected);
}

TEST_F(FindMedianSortedArraysSolutionTest, testSingleElementInEachArray) {
    const std::vector nums1 = {1};
    const std::vector nums2 = {2};
    constexpr double expected = 1.5;

    EXPECT_DOUBLE_EQ(FindMedianSortedArraysSolution::findMedianSortedArrays(nums1, nums2), expected);
}

TEST_F(FindMedianSortedArraysSolutionTest, testLargeNumbers) {
    const std::vector nums1 = {1000000};
    const std::vector nums2 = {1000001};
    constexpr double expected = 1000000.5;

    EXPECT_DOUBLE_EQ(FindMedianSortedArraysSolution::findMedianSortedArrays(nums1, nums2), expected);
}

TEST_F(FindMedianSortedArraysSolutionTest, testSingleLargeArray) {
    constexpr std::vector<int> nums1 = {};
    const std::vector nums2 = {1, 2, 3, 4, 5};
    constexpr double expected = 3.0;

    EXPECT_DOUBLE_EQ(FindMedianSortedArraysSolution::findMedianSortedArrays(nums1, nums2), expected);
}

TEST_F(FindMedianSortedArraysSolutionTest, testUnequalArraySizes) {
    const std::vector nums1 = {1, 3, 8};
    const std::vector nums2 = {7, 9};
    constexpr double expected = 7.0;

    EXPECT_DOUBLE_EQ(FindMedianSortedArraysSolution::findMedianSortedArrays(nums1, nums2), expected);
}

TEST_F(FindMedianSortedArraysSolutionTest, testComplexExample) {
    const std::vector nums1 = {0, 0, 0, 0, 0};
    const std::vector nums2 = {-1, 0, 0, 0, 0, 0, 1};
    constexpr double expected = 0.0;

    EXPECT_DOUBLE_EQ(FindMedianSortedArraysSolution::findMedianSortedArrays(nums1, nums2), expected);
}
