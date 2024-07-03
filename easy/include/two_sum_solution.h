
#pragma once

#include <vector>
#include <cmath>
#include <unordered_map>

namespace easy {
    class TwoSum {
    public:
        [[nodiscard]] std::vector<int> twoSum(std::vector<int>& nums, int target) const;

    private:
        int m_lowerLimitValue = std::pow(-10, 9);
        int m_higherLimitValue = std::pow(10, 9);
    };
}