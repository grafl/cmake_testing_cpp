cmake_minimum_required(VERSION 3.26.5)

project(cmake_testing_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

include(CTest)
enable_testing()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

add_executable(${PROJECT_NAME} main.cpp)

add_test(Test1, "${CMAKE_SOURCE_DIR}/bin/${PROJECT_NAME}" "FirstArgument")
add_test(Test2, "${CMAKE_SOURCE_DIR}/bin/${PROJECT_NAME}" "SecondArgument")

