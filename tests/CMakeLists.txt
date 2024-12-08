project(Solution_tests)

enable_testing()

include(FetchContent)

FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/release-1.11.0.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

include(GoogleTest)

add_executable(runUnitTests

        test_two_sum_solution.cpp
        test_max_int_num_range_solution.cpp
        test_add_two_numbers_list_nodes.cpp
        test_length_of_longest_substring_solution.cpp
        test_find_median_sorted_arrays_solution.cpp
        test_minimum_limit_balls_in_bag_solution.cpp
        test_minimum_k_swaps_for_consecutive_ones_solution.cpp
        test_roman_to_integer_solution.cpp

        ${test_SRCS})

target_link_libraries(runUnitTests gtest gmock easy medium hard)
