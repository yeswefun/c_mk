// Created by lin on 2023/9/7.
#include <stdio.h>

int main() {

    // EOF
    // ctrl + d, linux
    // ctrl + z, windows
    while (1) {
        int c = getchar();
        if (c == EOF) {
            break;
        } else if (c == '\n') {
            continue;
        }
        printf("%c\n", c);
        fflush(stdout); // 不要等到缓冲满了才打印输出
    }

    return 0;
}

