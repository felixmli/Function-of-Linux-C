cmake_minimum_required(VERSION 3.10)

# 项目名称
project(Character_Function)

# 指定 C 标准
set(CMAKE_C_STANDARD 99)

# 指定头文件路径
include_directories(../utils/include ./include)

# 指定源文件路径
set(SRC character_function_test.c ../utils/src/array_utils.c ./src/character_function.c)

# 指定目标文件
add_executable(character_output ${SRC})

# 指定生成目标文件的路径
set_target_properties(character_output PROPERTIES RUNTIME_OUTPUT_DIRECTORY ../output)