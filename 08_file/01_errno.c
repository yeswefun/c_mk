// Created by lin on 2023/9/7.
#include <stdio.h>
#include <string.h>

int main() {

    for (int i = 0; i < 16; i++) {
        puts(strerror(i));
    }

    return 0;
}

