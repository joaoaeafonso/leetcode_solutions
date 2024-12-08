
#pragma once
#include <string>
#include <unordered_map>

// The link to this problem can be found here: https://leetcode.com/problems/roman-to-integer/description/

namespace easy {
    class RomanToIntegerSolution {
        public:
            RomanToIntegerSolution() = default;

            static int romanToInt(const std::string& s);
    };
}
