
#include <algorithm>
#include <include/minimum_limit_balls_in_bag_solution.hpp>

namespace medium {

    int MinimumLimitBallsInBagSolution::minimumSize(const std::vector<int> &nums, const int maxOperations) {
        if (nums.empty()) {
            return 0;
        }
        
        int left = 1, right = *std::ranges::max_element(nums);
        int result = right;

        while (left <= right) {
            if (const int mid = left + (right - left) / 2; canSplitBagInHalf(nums, maxOperations, mid)) {
                result = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return result;
    }

    bool MinimumLimitBallsInBagSolution::canSplitBagInHalf(const std::vector<int> &nums, const int maxOperations, const int penalty) {
        int operations = 0;
        for (const int num : nums) {
            if (num > penalty) {
                operations += (num - 1) / penalty;
                if (operations > maxOperations) {
                    return false;
                }
            }
        }
        return true;
    }
}
