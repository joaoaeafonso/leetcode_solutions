
add_library(
        easy

        include/two_sum_solution.hpp
        include/roman_to_integer_solution.hpp

        src/two_sum_solution.cpp
        src/roman_to_integer_solution.cpp

)

target_include_directories(easy PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
