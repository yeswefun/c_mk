// Created by lin on 2023/9/2.
#include <stdio.h>

int main() {

    // =
    int a = 1;
    int b;
    int c;

    // =
    c = b = a;
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    // +
    c = a + b;
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    // ++, --
    int i = 0;
    printf("i = %d\n", i);

    printf("i = %d\n", ++i);
    printf("i = %d\n", i++);
    printf("i = %d\n", i);

    return 0;
}

