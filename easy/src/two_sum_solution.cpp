
#include <include/two_sum_solution.h>

namespace easy {

    std::vector<int> TwoSum::twoSum(std::vector<int>& nums, int target) const {
        if( nums.size() < 2 || nums.size() > std::pow(10, 4) ) {
            return {};
        }

        if (target < m_lowerLimitValue || target > m_higherLimitValue) {
            return {};
        }

        if( nums.size() == 2 ) {
            if( nums.front() + nums.back() == target ) {
                return {0, 1};
            }
            return {};
        }

        std::unordered_map<int, int> num_map;
        for (int i = 0; i < nums.size(); ++i) {

            int complement = target - nums[i];
            if (num_map.contains(complement)) {
                return {num_map[complement], i};
            }

            num_map[nums[i]] = i;
        }

        return {};
    }

}