
#include <gtest/gtest.h>
#include <include/length_of_longest_substring_solution.hpp>


using namespace medium;

class LengthOfLongestSubstringSolutionTest : public ::testing::Test {};

TEST_F(LengthOfLongestSubstringSolutionTest, testEmptyString) {
    const std::string s;
    constexpr int expected = 0;
    EXPECT_EQ(LengthOfLongestSubstringSolution::lengthOfLongestSubstring(s), expected);
}

TEST_F(LengthOfLongestSubstringSolutionTest, testSingleCharacter) {
    const std::string s = "a";
    constexpr int expected = 1;
    EXPECT_EQ(LengthOfLongestSubstringSolution::lengthOfLongestSubstring(s), expected);
}

TEST_F(LengthOfLongestSubstringSolutionTest, testAllUniqueCharacters) {
    const std::string s = "abcdef";
    constexpr int expected = 6;
    EXPECT_EQ(LengthOfLongestSubstringSolution::lengthOfLongestSubstring(s), expected);
}

TEST_F(LengthOfLongestSubstringSolutionTest, testAllRepeatingCharacters) {
    const std::string s = "aaaaaa";
    constexpr int expected = 1;
    EXPECT_EQ(LengthOfLongestSubstringSolution::lengthOfLongestSubstring(s), expected);
}

TEST_F(LengthOfLongestSubstringSolutionTest, testRegularCase) {
    const std::string s = "abcabcbb";
    constexpr int expected = 3;
    EXPECT_EQ(LengthOfLongestSubstringSolution::lengthOfLongestSubstring(s), expected);
}

TEST_F(LengthOfLongestSubstringSolutionTest, testRepeatingCharactersAtStart) {
    const std::string s = "bbabc";
    constexpr int expected = 3;
    EXPECT_EQ(LengthOfLongestSubstringSolution::lengthOfLongestSubstring(s), expected);
}

TEST_F(LengthOfLongestSubstringSolutionTest, testRepeatingCharactersAtEnd) {
    const std::string s = "abcbb";
    constexpr int expected = 3;
    EXPECT_EQ(LengthOfLongestSubstringSolution::lengthOfLongestSubstring(s), expected);
}

TEST_F(LengthOfLongestSubstringSolutionTest, testSubstringInTheMiddle) {
    const std::string s = "pwwkew";
    constexpr int expected = 3;
    EXPECT_EQ(LengthOfLongestSubstringSolution::lengthOfLongestSubstring(s), expected);
}

TEST_F(LengthOfLongestSubstringSolutionTest, testStringWithSpaces) {
    const std::string s = "a b c a b c b b";
    constexpr int expected = 3;
    EXPECT_EQ(LengthOfLongestSubstringSolution::lengthOfLongestSubstring(s), expected);
}

TEST_F(LengthOfLongestSubstringSolutionTest, testStringWithSpecialCharacters) {
    const std::string s = "!@#$$%^&*()";
    constexpr int expected = 7;
    EXPECT_EQ(LengthOfLongestSubstringSolution::lengthOfLongestSubstring(s), expected);
}

TEST_F(LengthOfLongestSubstringSolutionTest, testLongString) {
    const std::string s = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    constexpr int expected = 62;
    EXPECT_EQ(LengthOfLongestSubstringSolution::lengthOfLongestSubstring(s), expected);
}

TEST_F(LengthOfLongestSubstringSolutionTest, testOverlappingSubstrings) {
    const std::string s = "abba";
    constexpr int expected = 2;
    EXPECT_EQ(LengthOfLongestSubstringSolution::lengthOfLongestSubstring(s), expected);
}
