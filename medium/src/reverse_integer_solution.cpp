
#include <include/reverse_integer_solution.hpp>

namespace medium {

    int ReverseIntegerSolution::reverse(const int x) {
        if (x == 0) {
            return 0;
        }

        const bool isNegative = x < 0;
        std::string stringNumber = std::to_string(std::abs(static_cast<long long>(x)));
        std::reverse(stringNumber.begin(), stringNumber.end());

        long long reversedNum = std::stoll(stringNumber);

        if (isNegative) {
            reversedNum = -reversedNum;
        }

        if (reversedNum > std::numeric_limits<int>::max() || reversedNum < std::numeric_limits<int>::min()) {
            return 0;
        }

        return static_cast<int>(reversedNum);
    }

}
