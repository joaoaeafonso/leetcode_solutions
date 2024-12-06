
add_library(
        hard

        include/find_median_sorted_arrays.hpp

        src/find_median_sorted_arrays.cpp

)

target_include_directories(hard PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
