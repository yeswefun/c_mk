// Created by lin on 2023/9/2.
#include <stdio.h>

#define COLOR_RED 0xff0000

int main() {

    const int R = 0xFF0000;
    const int G = 0x00FF00;
    const int B = 0x0000FF;

//error: assignment of read-only variable 'R'
//    R = 666;

    // 运行时常量 - 有内存地址
    int *p = (int *) &R;
    *p = 16;
    printf("R = %d\n", R);

    // 编译时常量 - 没有内存地址
    printf("COLOR_RED = %d\n", COLOR_RED);

#undef COLOR_RED
//    Use of undeclared identifier 'COLOR_RED'
//    printf("COLOR_RED = %d\n", COLOR_RED);

    return 0;
}

