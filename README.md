# C++ 从 0 到 1 学习项目（有 C 语言基础）

这个项目是给你从 C 过渡到 C++ 用的。

## 目录说明

- `src/main.cpp`: 项目入口，确认环境是否正常。
- `lessons/01_basics.cpp`: 基础类型、输出、类型转换。
- `lessons/02_string_vector.cpp`: `std::string` 和 `std::vector` 入门。
- `CMakeLists.txt`: CMake 构建配置（推荐方式）。

## 你的学习节奏（建议）

### 第 1 周：语法和标准库基础

1. 变量、引用、`const`、`auto`
2. 函数重载、默认参数
3. `std::string`、`std::vector`
4. `for` 范围循环

### 第 2 周：面向对象

1. 类和对象
2. 构造函数、析构函数
3. `public/private`
4. `this` 指针

### 第 3 周：资源管理与现代 C++

1. 指针和智能指针（`unique_ptr`, `shared_ptr`）
2. RAII 思想
3. 拷贝和移动语义（先理解概念）

### 第 4 周：实战小项目

1. 学生成绩管理系统（命令行）
2. 用类封装数据
3. 使用 `vector` 保存记录
4. 文件读写（可选）

## 运行方式 A（推荐，已安装 CMake）

```bash
cmake -S . -B build
cmake --build build
./build/main
./build/lesson01
./build/lesson02
```

## 运行方式 B（未安装 CMake 也能用）

macOS 常见是 `clang++`：

```bash
clang++ -std=c++17 src/main.cpp -o main
./main

clang++ -std=c++17 lessons/01_basics.cpp -o lesson01
./lesson01

clang++ -std=c++17 lessons/02_string_vector.cpp -o lesson02
./lesson02
```

## 下一步我可以继续帮你做

1. 增加 `03_class_intro.cpp`（类与对象）
2. 增加 `04_pointer_raii.cpp`（从 C 指针过渡到 C++ 资源管理）
3. 直接搭一个“学生管理系统”练手项目骨架
