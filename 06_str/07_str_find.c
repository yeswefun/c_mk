// Created by lin on 2023/9/6.
#include <stdio.h>
#include <string.h>

int main() {

    char *str = "hello world";

    char *result = strchr(str, 'l');

    char *result_r = strrchr(str, 'l');

    puts(result);
    puts(result_r);

    return 0;
}

