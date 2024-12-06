
#include <include/two_sum_solution.hpp>

namespace easy {
    std::vector<int> TwoSum::twoSum(const std::vector<int>& nums, const int target) const {
        if( nums.size() < 2 || static_cast<int>(nums.size()) > std::pow(10, 4) ) {
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
            if (int complement = target - nums[i]; num_map.contains(complement)) {
                return {num_map[complement], i};
            }
            num_map[nums[i]] = i;
        }

        return {};
    }
}
