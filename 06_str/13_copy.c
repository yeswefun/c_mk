// Created by lin on 2023/9/7.
#include <stdio.h>
#include <string.h>

int main() {

    char src[] = "Hello";

    char dst[16] = "C:";

    strcpy(dst+strlen(dst), src);

    printf("dst-> %s, src-> %s\n", dst, src);

    return 0;
}

