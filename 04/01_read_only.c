// Created by lin on 2023/9/4.
#include <stdio.h>

int main() {

    int x = 6;
    printf("x = %d\n", x);

    const int *p1 = &x;
//    *p1 = 8;

    int const *p2 = &x;
//    *p2 = 9;

    return 0;
}

