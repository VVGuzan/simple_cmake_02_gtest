# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
  # SOURCE_DIR "/home/vovk/cpp_nsu/CMake/examples/googletest-main"
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(hello_testing_app hello_test.cpp) # testing

target_link_libraries(hello_testing_app PRIVATE GTest::gtest_main mymulsum)

include(GoogleTest)
gtest_discover_tests(hello_testing_app)

# # by default this one will be ON
# option(ENABLE_MPI "Configure for MPI parallelization" ON)

# if(ENABLE_MPI)
#   find_package(MPI REQUIRED COMPONENTS Fortran)
# else()
#   message(STATUS "no problem, building without MPI")
# endif()
