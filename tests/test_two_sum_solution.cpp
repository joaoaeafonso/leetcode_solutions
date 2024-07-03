
#include <gtest/gtest.h>
#include <src/two_sum_solution.cpp>

using namespace easy;

class TwoSumSolutionTest: TwoSum { };

TEST(TwoSumSolutionTest, testSizeFourVectorWithOKResult) {
    const auto twoSumInstance = std::make_shared<TwoSum>();

    auto real = std::vector{2, 7, 11, 15};

    const auto real_result = twoSumInstance->twoSum(real, 9);
    const auto expected = std::vector{0, 1};

    EXPECT_EQ(real_result, expected);
}

TEST(TwoSumSolutionTest, testSizeFourVectorWithNOKResult) {
    const auto twoSumInstance = std::make_shared<TwoSum>();

    auto real = std::vector{2, 7, 11, 15};

    const auto real_result = twoSumInstance->twoSum(real, 3);
    const auto expected = std::vector<int>{};

    EXPECT_EQ(real_result, expected);
}

TEST(TwoSumSolutionTest, testSizeThreeVectorWithOKResult) {
    const auto twoSumInstance = std::make_shared<TwoSum>();

    auto real = std::vector{3, 2, 4};

    const auto real_result = twoSumInstance->twoSum(real, 6);
    const auto expected = std::vector{1, 2};
    EXPECT_EQ(real_result, expected);
}

TEST(TwoSumSolutionTest, testSizeTwoVectorWithOKResult) {
    const auto twoSumInstance = std::make_shared<TwoSum>();

    auto real = std::vector{3, 3};

    const auto real_result = twoSumInstance->twoSum(real, 6);
    const auto expected = std::vector{0, 1};

    EXPECT_EQ(real_result, expected);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}