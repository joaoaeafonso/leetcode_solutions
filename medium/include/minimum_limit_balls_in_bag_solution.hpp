
#pragma once

#include <vector>

// The link to this problem can be found here: https://leetcode.com/problems/minimum-limit-of-balls-in-a-bag/description/

namespace medium {

    class MinimumLimitBallsInBagSolution {
        public:
            MinimumLimitBallsInBagSolution() = default;

            static int minimumSize(const std::vector<int>& nums, int maxOperations);

        private:
            static bool canSplitBagInHalf(const std::vector<int> &nums, int maxOperations, int penalty);
    };

}