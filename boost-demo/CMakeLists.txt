
cmake_minimum_required(VERSION 3.0)
project(boost-demo)
set(SOURCE src/main.cpp)
set(BOOST_ROOT "/dev/boost_1_75_0")
include_directories(include)
add_executable(${PROJECT_NAME} ${SOURCE})