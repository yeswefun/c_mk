// Created by lin on 2023/9/4.
#include <stdio.h>

int main() {

    int x = 6;
    int y = 8;
    printf("x = %d\n", x);

    int * const p = &x;
    *p = 666;
//    p = &y;

    printf("x = %d\n", x);


    return 0;
}

