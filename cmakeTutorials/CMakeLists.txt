cmake_minimum_required(VERSION 3.13)
project(learn)

set(CMAKE_CXX_STANDARD 17)


set(BOOST_ROOT "/home/dell/softwares/boost_1_75_0")
#Add header file search path
include_directories(/home/dell/softwares/boost_1_75_0)
#Add library file search path
link_directories(/home/dell/softwares/boost_1_75_0)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(multiplier)
target_include_directories(${PROJECT_NAME} PRIVATE multiplier)
target_link_libraries(${PROJECT_NAME} multiplier)

