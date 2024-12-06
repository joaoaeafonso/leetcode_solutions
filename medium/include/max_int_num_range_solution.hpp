
#pragma once

#include <vector>
#include <algorithm>
#include <unordered_set>

// The link to this problem can be found here: https://leetcode.com/problems/maximum-number-of-integers-to-choose-from-a-range-i/description/

namespace medium {

    class MaxIntNumRangeSolution {
        public:
            [[nodiscard]] int maxCount(std::vector<int>& banned, int n, int maxSum);
    };

}
