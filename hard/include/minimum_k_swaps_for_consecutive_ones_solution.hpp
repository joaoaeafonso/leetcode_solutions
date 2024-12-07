
#pragma once
#include <vector>
#include <climits>

// The link to this problem can be found here: https://leetcode.com/problems/minimum-adjacent-swaps-for-k-consecutive-ones/description/

namespace hard {

    class MinimumKSwapsForConsecutiveOnesSolution {
        public:
            MinimumKSwapsForConsecutiveOnesSolution() = default;

            static int minMoves(const std::vector<int>& nums, int k);
    };

}
