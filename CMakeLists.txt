cmake_minimum_required(VERSION 3.10)

# 项目名称
project(FunctionOfLinuxC)

# 添加子目录
add_subdirectory(process_string_function)
add_subdirectory(multithreading_function)
add_subdirectory(character_function)
add_subdirectory(data_exchange_function)

# # 清除所有构建文件
# add_custom_target(clean
#     COMMAND ${CMAKE_COMMAND} -E remove_directory ${CMAKE_BINARY_DIR}
# )