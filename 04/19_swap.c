// Created by lin on 2023/9/5.
#include <stdio.h>
#include <malloc.h>
#include <string.h>

void swap(void *x, void *y, size_t size) {
    void *tmp = malloc(size);
    if (tmp) {
        memcpy(tmp, x, size);
        memcpy(x, y, size);
        memcpy(y, tmp, size);
        free(tmp);
    }
}

#define SWAP(a, b, type) {type tmp = a; a = b, b = tmp; }

int main() {

    int x = 1, y = 2;
    printf("x = %d, y = %d\n", x, y);
    swap(&x, &y, sizeof(int));
    printf("x = %d, y = %d\n", x, y);
    SWAP(x, y, int);
    printf("x = %d, y = %d\n", x, y);

    double d = 3.1415926, f = 2.71828;
    printf("d = %f, f = %f\n", d, f);
    swap(&d, &f, sizeof(double));
    printf("d = %f, f = %f\n", d, f);
    SWAP(d, f, double);
    printf("d = %f, f = %f\n", d, f);

    return 0;
}

