# 库的构建规则
cmake_minimum_required(VERSION 3.10)
project(unitlib)

# 将 unitlib.cpp 编译成静态库
add_library(unitlib src/unitlib.cpp)

# 把 include 目录暴露给依赖这个库的主程序
target_include_directories(unitlib PUBLIC include)
