#cmake_minimum_required(VERSION 3.19)
#project(00 C)
#set(CMAKE_C_STANDARD 11)
#add_executable(00 00_hi.c)

cmake_minimum_required(VERSION 3.19)

get_filename_component(Project_Name ${CMAKE_CURRENT_SOURCE_DIR} NAME)
string(REPLACE " " "_" Project_Name ${Project_Name})
project(${Project_Name} C)


set(CMAKE_C_STANDARD 11)


file(GLOB file_list "${CMAKE_CURRENT_SOURCE_DIR}/*.c")
foreach (file ${file_list})
    get_filename_component(file_name ${file} NAME)
    add_executable(${file_name} ${file})
endforeach ()
