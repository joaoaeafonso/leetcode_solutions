
add_library(easy include/two_sum_solution.h src/two_sum_solution.cpp)

# Include directories for the mqtt library
target_include_directories(easy PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})