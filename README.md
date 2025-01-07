# Function-of-Linux-C

This repository covers almost all the functions of Linux C.

## 使用教程

1. 创建并进入 `build` 目录：
    ```sh
    mkdir -p build
    cd build
    ```

2. 运行 CMake 和 Make：
    ```sh
    cmake ..
    make clean
    make -j4
    ```

3. 输出的结果在 [output] 目录下，使用以下命令执行生成的可执行文件：
    ```sh
    ./output
    ./output_multithreading
    ```

