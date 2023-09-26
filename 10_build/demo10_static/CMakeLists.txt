
include_directories(include)

SET(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib)

add_library(add STATIC src/add.c)
add_library(sub STATIC src/sub.c)

#lib是存放库文件的目录，形如libxxx.so或libxxx.a形式的文件
link_directories(lib)

add_executable(static_cmd main.c)

target_link_libraries(
        static_cmd
        add
        sub
)