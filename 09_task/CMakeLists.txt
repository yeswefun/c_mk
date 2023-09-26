#cmake_minimum_required(VERSION 3.19)
#project(09_task C)
#
#set(CMAKE_C_STANDARD 11)
#
#add_executable(09_task main.c)


cmake_minimum_required(VERSION 3.19)

get_filename_component(Project_Name ${CMAKE_CURRENT_SOURCE_DIR} NAME)
string(REPLACE " " "_" Project_Name ${Project_Name})
project(${Project_Name} C)


set(CMAKE_C_STANDARD 11)

# 指定头文件目录
include_directories("tinycthread/include")

file(GLOB file_list "${CMAKE_CURRENT_SOURCE_DIR}/*.c")
foreach (file ${file_list})
    get_filename_component(file_name ${file} NAME)
    add_executable(${file_name} ${file} tinycthread/tinycthread.c)
    # 指定编译命令行参数
    #target_compile_definitions(${file_name} PUBLIC DEBUG)
    if (UNIX OR LINUX)
        target_link_libraries(${name} pthread)
    endif()
endforeach ()
