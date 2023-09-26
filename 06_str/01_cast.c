// Created by lin on 2023/9/6.
#include <stdio.h>
#include <stdlib.h>

int main() {

    int x = 0;

    x = atoi("1234"); // 1234
    printf("%d\n", x);

    x = atoi("-1234"); // -1234
    printf("%d\n", x);

    x = atoi(" 666abcd"); // 666
    printf("%d\n", x);

    x = atoi("0x10"); // 0
    printf("%d\n", x);

    return 0;
}

