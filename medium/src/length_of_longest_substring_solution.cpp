
#include <include/length_of_longest_substring_solution.hpp>

namespace medium {
    int LengthOfLongestSubstringSolution::lengthOfLongestSubstring(const std::string& s) {
        int maxLength = 0;
        std::unordered_map<char, int> charIndexMap;

        for (int left = 0, right = 0; right < s.length(); ++right) {
            char currentChar = s[right];

            if (charIndexMap.contains(currentChar)) {
                left = std::max(left, charIndexMap[currentChar] + 1);
            }

            charIndexMap[currentChar] = right;
            maxLength = std::max(maxLength, right - left + 1);
        }
        return maxLength;
    }
}
