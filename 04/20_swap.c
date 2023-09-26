// Created by lin on 2023/9/5.
#include <stdio.h>

// gcc
#define SWAP(a, b) {typeof(a) tmp = a; a = b, b = tmp; }

int main() {

    int x = 1, y = 2;

    typeof(x) z = x + y;
    printf("z = %d\n", z);

    printf("x = %d, y = %d\n", x, y);
    SWAP(x, y);
    printf("x = %d, y = %d\n", x, y);

    double d = 3.1415926, f = 2.71828;
    printf("d = %f, f = %f\n", d, f);
    SWAP(d, f);
    printf("d = %f, f = %f\n", d, f);

    return 0;
}

