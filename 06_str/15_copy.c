// Created by lin on 2023/9/7.
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>

int main() {

    char src[] = "Hello";

    char *dst = malloc(sizeof(char) * 16);
    if (!dst) {
        abort();
    }

    memcpy(dst, src, 16); // 有可能 小于 16

    printf("dst-> %s, src-> %s\n", dst, src);

    free(dst);

    return 0;
}

