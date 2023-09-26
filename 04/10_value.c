// Created by lin on 2023/9/5.
#include <stdio.h>

int main() {

    int a;
    a = 2;

    int *p = &a;
    *p = 6;

    int b = *p;

//    &a = p; // error, &a是变量地址, 是一个常量

//    *p + 1 = 3;

    int arr[3] = {0};
    int *pa = arr;
    *pa = 2;
    // ctrl + w 判断 优先级
//    *pa++ = 3; // 下面等价
    *(pa++) = 3;
    *(pa + 2) = 4;

    return 0;
}

