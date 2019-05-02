cmake_minimum_required(VERSION 3.12)

project(TestGtest CXX C)

set (CMAKE_CXX_STANDARD 14)

enable_testing()
add_subdirectory(src-test)