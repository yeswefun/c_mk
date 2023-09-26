// Created by lin on 2023/9/2.
#include <stdio.h>

int main() {

#define FLAG_LEFT   0x1     // 0x0001
#define FLAG_TOP    0x2     // 0x0010
#define FLAG_RIGHT  0x4     // 0x0100
#define FLAG_BOTTOM 0x8     // 0x1000

    int and = FLAG_LEFT & FLAG_RIGHT;   // 0x0000
    int or = FLAG_LEFT | FLAG_BOTTOM;   // 0x1001

    printf("and = %#x\n", and);
    printf("or = %#x\n", or);

    printf("************\n");
    printf("%d\n", 1 << 0); // 1 * 2^0
    printf("%d\n", 1 << 1); // 1 * 2^1
    printf("%d\n", 1 << 2); // 1 * 2^2
    printf("%d\n", 1 << 3); // 1 * 2^3

    // 6 * 2
    printf("%d\n", 6 << 1);

    // 6 / 2
    printf("%d\n", 6 >> 1);

    return 0;
}

