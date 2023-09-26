// Created by lin on 2023/9/5.
#include <stdio.h>

void swap(int x, int y) {
    int tmp = x;
    x = y;
    y = tmp;
}

void swap2(int *x, int *y) {
    int *tmp = x;
    x = y;
    y = tmp;
}

void swap3(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main() {

    int a = 1;
    int b = 2;

    printf("a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("a = %d, b = %d\n", a, b);

    printf("a = %d, b = %d\n", a, b);
    swap2(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    printf("a = %d, b = %d\n", a, b);
    swap3(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

