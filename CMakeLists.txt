# 根目录的构建规则
cmake_minimum_required(VERSION 3.10)
project(UnitConverter)

# 添加库的构建目录
add_subdirectory(unitlib)

# 编译主程序
add_executable(unit_converter src/main.cpp)

# 将主程序和 unitlib 库链接起来
target_link_libraries(unit_converter unitlib)
