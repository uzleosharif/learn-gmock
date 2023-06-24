cmake_minimum_required(VERSION 3.15)
project(mock-learn CXX)

find_package(GTest REQUIRED)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} gtest::gtest)
