
add_library(
        hard

        include/find_median_sorted_arrays_solution.hpp
        include/minimum_k_swaps_for_consecutive_ones_solution.hpp

        src/find_median_sorted_arrays_solution.cpp
        src/minimum_k_swaps_for_consecutive_ones_solution.cpp

)

target_include_directories(hard PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
