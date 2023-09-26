
include_directories(include)

SET(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib)

add_library(add SHARED src/add.c)
add_library(sub SHARED src/sub.c)

#lib是存放库文件的目录，形如libxxx.so或libxxx.a形式的文件
link_directories(lib)

add_executable(dynamic_cmd main.c)

target_link_libraries(
        dynamic_cmd
        add
        sub
)