
#pragma once

#include <string>
#include <unordered_map>

// The link to this problem can be found here: https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

namespace medium {

    class LengthOfLongestSubstringSolution {
    public:
        LengthOfLongestSubstringSolution() = default;

        [[nodiscard]] static int lengthOfLongestSubstring(const std::string& s);
    };

}
