// Created by lin on 2023/9/10.
#include <stdio.h>
#include <sys/stat.h>

int is_directory(const char *file_path) {
// windows, long, 4字节, 不支持4GB以上的文件
//    struct _stat64 st64;
    struct stat st;
    stat(file_path, &st);
    return st.st_mode & S_IFDIR;
}

int main() {

    int result = 0;

    result = is_directory("static/poet.txt"); // 0
    printf("%d\n", result);

    result = is_directory("static/"); // 非0
    printf("%d\n", result);

    return 0;
}

