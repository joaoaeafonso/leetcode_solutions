

#include <include/minimum_k_swaps_for_consecutive_ones_solution.hpp>


namespace hard {
    int MinimumKSwapsForConsecutiveOnesSolution::minMoves(const std::vector<int> &nums, const int k) {
        std::vector<int> ones;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                ones.push_back(i);
            }
        }

        const int vectorOneSize = static_cast<int>(ones.size());
        std::vector relativePositions(vectorOneSize, 0);

        for (int i = 0; i < vectorOneSize; i++) {
            relativePositions[i] = ones[i] - i;
        }

        std::vector prefixSum(vectorOneSize + 1, 0);
        for (int i = 0; i < vectorOneSize; i++) {
            prefixSum[i + 1] = prefixSum[i] + relativePositions[i];
        }

        int minMoves = INT_MAX;
        for (int i = 0; i + k <= vectorOneSize; i++) {
            const int mid = i + k / 2;
            const int median = relativePositions[mid];

            const int leftCost = median * (mid - i) - (prefixSum[mid] - prefixSum[i]);
            const int rightCost = (prefixSum[i + k] - prefixSum[mid + 1]) - median * (i + k - mid - 1);

            minMoves = std::min(minMoves, leftCost + rightCost);
        }

        return minMoves;
    }
}
