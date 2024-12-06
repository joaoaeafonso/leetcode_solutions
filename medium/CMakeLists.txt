
add_library(medium

        include/max_int_num_range_solution.hpp
        include/add_two_numbers_list_nodes_solution.hpp

        src/max_int_num_range_solution.cpp
        src/add_two_numbers_list_nodes_solution.cpp
)

target_include_directories(medium PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
