// Created by lin on 2023/9/8.
#include <stdio.h>

int main() {

    char buffer[1024];

    while (1) {
        if (!fgets(buffer, 1024, stdin)) { // 包括 '\n'
            break;
        }
        //puts(buffer); // 加上 '\n'
        printf("%s", buffer);
        fflush(stdout);
    }

    return 0;
}

