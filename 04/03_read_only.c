// Created by lin on 2023/9/4.
#include <stdio.h>

int main() {

    int x = 6;
    int y = 8;

    const int *const p1 = &x;

    int const *const p2 = &y;

//    *p1 = 666;
//    p1 = &y;

//    *p2 = 888;
//    p2 = &x;

    return 0;
}

