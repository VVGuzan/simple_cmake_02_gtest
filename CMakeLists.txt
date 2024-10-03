# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(hello_test_proj VERSION 0.2.1 LANGUAGES CXX)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

# generate a library from sources
add_library(mymulsum STATIC mylib.cpp)
target_include_directories(mymulsum PUBLIC .) # PRIVATE

# as a separate target
add_subdirectory(tests)

add_executable(hello_app hello-world.cpp) # app
# add_executable(hello_test_app hello_test.cpp) # testing

target_link_libraries(hello_app mymulsum)