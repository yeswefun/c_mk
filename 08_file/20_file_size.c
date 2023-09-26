// Created by lin on 2023/9/10.
#include <stdio.h>
#include <sys/stat.h>

long get_file_size(const char *file_path) {
// windows, long, 4字节, 不支持4GB以上的文件
//    struct _stat64 st64;
    struct stat st;
    stat(file_path, &st);
    return st.st_size;
}

int main() {

    long result = get_file_size("static/poet.txt");

    printf("result: %ld\n", result);

    return 0;
}

