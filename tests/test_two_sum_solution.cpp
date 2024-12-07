
#include <gtest/gtest.h>
#include <src/two_sum_solution.cpp>

using namespace easy;

class TwoSumSolutionTest: public ::testing::Test { };

TEST_F(TwoSumSolutionTest, testSizeFourVectorWithOKResult) {
    const auto twoSumInstance = std::make_shared<TwoSum>();

    const auto real = std::vector{2, 7, 11, 15};

    const auto real_result = twoSumInstance->twoSum(real, 9);
    const auto expected = std::vector{0, 1};

    EXPECT_EQ(real_result, expected);
}

TEST_F(TwoSumSolutionTest, testSizeFourVectorWithNOKResult) {
    const auto twoSumInstance = std::make_shared<TwoSum>();

    const auto real = std::vector{2, 7, 11, 15};

    const auto real_result = twoSumInstance->twoSum(real, 3);
    constexpr auto expected = std::vector<int>{};

    EXPECT_EQ(real_result, expected);
}

TEST_F(TwoSumSolutionTest, testSizeThreeVectorWithOKResult) {
    const auto twoSumInstance = std::make_shared<TwoSum>();

    const auto real = std::vector{3, 2, 4};

    const auto real_result = twoSumInstance->twoSum(real, 6);
    const auto expected = std::vector{1, 2};
    EXPECT_EQ(real_result, expected);
}

TEST_F(TwoSumSolutionTest, testSizeTwoVectorWithOKResult) {
    const auto twoSumInstance = std::make_shared<TwoSum>();

    const auto real = std::vector{3, 3};

    const auto real_result = twoSumInstance->twoSum(real, 6);
    const auto expected = std::vector{0, 1};

    EXPECT_EQ(real_result, expected);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}