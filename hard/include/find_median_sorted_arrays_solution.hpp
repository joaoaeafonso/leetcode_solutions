
#pragma once

#include <vector>
#include <limits>
#include <stdexcept>

// The link to this problem can be found here: https://leetcode.com/problems/median-of-two-sorted-arrays/

namespace hard {

    class FindMedianSortedArraysSolution {
        public:
            FindMedianSortedArraysSolution() = default;

            [[nodiscard]] static double findMedianSortedArrays(const std::vector<int>& nums1, const std::vector<int>& nums2);
    };

}
