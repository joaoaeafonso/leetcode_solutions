

#include <include/roman_to_integer_solution.hpp>

namespace easy {

    int RomanToIntegerSolution::romanToInt(const std::string& s) {
        std::unordered_map<char, int> romanValuesMap = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int result = 0;
        const int inputSize = static_cast<int>(s.size());

        for (int i = 0; i < inputSize; ++i) {
            if (i < inputSize - 1 && romanValuesMap[s[i]] < romanValuesMap[s[i + 1]]) {
                result -= romanValuesMap[s[i]];
            } else {
                result += romanValuesMap[s[i]];
            }
        }

        return result;
    }
}
