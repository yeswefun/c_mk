// Created by lin on 2023/9/2.
#include <stdio.h>

int main() {

    int i;

    i = 8;

    int j = 6;
    j = 66;

    printf("i = %d, j = %d\n", i, j);

    printf("sizeof(i) = %llu, sizeof(j) = %llu\n", sizeof i, sizeof j);

    printf("&i = %p, &j = %p\n", &i, &j);

    return 0;
}

