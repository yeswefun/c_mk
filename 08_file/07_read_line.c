// Created by lin on 2023/9/8.
#include <stdio.h>

int main() {

    char buffer[1024];

    while (1) {
        // gets_s(buffer, 10234) 1023 个字符，\0
        if (!gets(buffer)) { // 不包括 '\n'
            break;
        }
        puts(buffer);
        fflush(stdout);
    }

    return 0;
}

