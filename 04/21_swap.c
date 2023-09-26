// Created by lin on 2023/9/5.
#include <stdio.h>

// gcc
//#define SWAP(a, b) {typeof(a) tmp = a; a = b, b = tmp; }
#define SWAP(a, b) do {typeof(a) tmp = a; a = b, b = tmp; } while(0)

int main() {

    int x = 1, y = 2;

    printf("x = %d, y = %d\n", x, y);

    if (x)
        SWAP(x, y); // 分号 导致 前面的 if 与 后面的 else 没有关系
    else
        printf("x == 0\n");

    printf("x = %d, y = %d\n", x, y);

    return 0;
}

