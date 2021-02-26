cmake_minimum_required(VERSION 3.0.0)
project(cmakeboost VERSION 0.1.0)

include(CTest)
enable_testing()

SET(BOOST ROOT "/home/dell/softwares/boost_1_75_0")
include_directories(/home/dell/softwares/boost_1_75_0)
link_directories(/home/dell/softwares/boost_1_75_0)
add_executable(cmakeboost main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
