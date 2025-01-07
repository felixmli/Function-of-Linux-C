# 使用的编译器为gcc
CC = gcc
# 指定头文件路径
CFLAGS = -I../utils/include -I./include
# 指定源文件路径
SRC = multithreading_function_test.c ../utils/src/array_utils.c ./src/multithreading_function.c
# 指定目标文件
TARGET = ../output

# 指定目标文件
all: $(TARGET)

# 生成目标文件 $@表示目标文件 $^表示所有依赖文件
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

# 清除目标文件
clean:
	rm -f $(TARGET)