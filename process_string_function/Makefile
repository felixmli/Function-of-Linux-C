#使用的编译器为gcc
CC = gcc
#指定头文件路径
CFLAGS = -I../utils/include -I./include
#指定源文件路径
SRC = process_string_function_test.c ../utils/src/array_utils.c ./src/process_string_function.c
#将SRC中的.c替换为.o
OBJ = $(SRC:.c=.o)
#指定目标文件
TARGET = output

#指定目标文件
all: $(TARGET)

#生成目标文件 $@表示目标文件 $^表示所有依赖文件
$(TARGET): $(OBJ)
	$(CC) -o $@ $^

#生成.o文件 $<表示第一个依赖文件
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#清除所有.o文件和目标文件
clean:
	rm -f $(OBJ) $(TARGET)