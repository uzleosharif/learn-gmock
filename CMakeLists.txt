cmake_minimum_required(VERSION 3.15)
project(learn-mock CXX)

find_package(GTest REQUIRED)

add_executable(${PROJECT_NAME} main.cpp SDLCHandlerUnitTest.cpp)
target_link_libraries(${PROJECT_NAME} gtest::gtest)
