// Created by lin on 2023/9/6.
#include <stdio.h>
#include <string.h>

int main() {

    char *str = "hello world";

    printf("%llu\n", strlen(str));

    //printf("%llu\n", strnlen_s(str, 128)); // C11
    printf("%llu\n", strnlen(str, 128)); // posix, gcc

    return 0;
}

