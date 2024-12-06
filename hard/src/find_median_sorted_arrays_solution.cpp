

#include <include/find_median_sorted_arrays_solution.hpp>

namespace hard {
    double FindMedianSortedArraysSolution::findMedianSortedArrays(const std::vector<int> &nums1, const std::vector<int> &nums2) {
        const std::vector<int>& A = nums1.size() < nums2.size() ? nums1 : nums2;
        const std::vector<int>& B = nums1.size() < nums2.size() ? nums2 : nums1;

        const int m = static_cast<int>(A.size());
        const int n = static_cast<int>(B.size());
        const int total = m + n;

        int low = 0, high = m;

        while (low <= high) {
            const int partitionA = (low + high) / 2;
            const int partitionB = (total + 1) / 2 - partitionA;

            const int maxLeftA = partitionA == 0 ? std::numeric_limits<int>::min() : A[partitionA - 1];
            const int minRightA = partitionA == m ? std::numeric_limits<int>::max() : A[partitionA];

            const int maxLeftB = partitionB == 0 ? std::numeric_limits<int>::min() : B[partitionB - 1];
            const int minRightB = partitionB == n ? std::numeric_limits<int>::max() : B[partitionB];

            if (maxLeftA <= minRightB && maxLeftB <= minRightA) {
                if (total % 2 == 0) {
                    return (std::max(maxLeftA, maxLeftB) + std::min(minRightA, minRightB)) / 2.0;
                } else {
                    return std::max(maxLeftA, maxLeftB);
                }
            } else if (maxLeftA > minRightB) {
                high = partitionA - 1;
            } else {
                low = partitionA + 1;
            }
        }

        // Should never arrive here
        return 0.0f;
    }
}
