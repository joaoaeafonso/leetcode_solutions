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

add_executable(runUnitTests test_two_sum_solution.cpp test_max_int_num_range_solution.cpp ${test_SRCS})
target_link_libraries(runUnitTests gtest gmock easy medium)
