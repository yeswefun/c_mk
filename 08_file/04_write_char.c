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
//        putchar(c);
        putc(c, stdout);
        fflush(stdout);
    }

    return 0;
}

