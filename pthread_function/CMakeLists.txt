cmake_minimum_required(VERSION 3.10)

project(PTHREAD_FUNCTION)

set(CMAKE_C_STANDARD 99)

include_directories(../utils/include ./include)

set(SRC pthread_function_test.c ../utils/src/array_utils.c ./src/pthread_function.c)

add_executable(pthread_output ${SRC})

set_target_properties(pthread_output PROPERTIES RUNTIME_OUTPUT_DIRECTORY ../output)