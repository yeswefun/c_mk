// Created by lin on 2023/9/7.
#include <stdio.h>
#include <string.h>

int main() {

    char src[] = "Hello";

    // dst, src, cnt
    memcpy(src+1, src, 4);

    printf("src-> %s\n", src);

    return 0;
}

