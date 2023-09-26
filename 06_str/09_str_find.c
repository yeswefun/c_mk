// Created by lin on 2023/9/6.
#include <stdio.h>
#include <string.h>

int main() {

    char *str = "hello world";

    char *sub_pos = strstr(str, "wor");
    puts(sub_pos);

    printf("%d\n", sub_pos - str);

    return 0;
}

