


#include <include/max_int_num_range_solution.hpp>

namespace medium {

    int maxCount(std::vector<int>& banned, const int n, const int maxSum) {
        const std::unordered_set bannedSet(banned.begin(), banned.end());
        int sum = 0, count = 0;

        for (int i = 1; i <= n; ++i) {
            if (bannedSet.contains(i)) {
                continue;
            }

            if (sum + i > maxSum) {
                break;
            }

            sum += i;
            ++count;
        }

        return count;
    }

}
