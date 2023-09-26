// Created by lin on 2023/9/5.
#include <stdio.h>
#include <stdlib.h>

void initPointer(int **ptr, int length, int defaultValue) {
    *ptr = malloc(sizeof(int) * length);
    for (int i = 0; i < length; i++) {
        (*ptr)[i] = defaultValue; // 优先级问题, *ptr[i]
    }
}

void destroyPointer(int **ptr) {
    if (*ptr) {
        free(*ptr);
        *ptr = NULL;
    }
}

int main() {

    int *p;

    initPointer(&p, 6, -1);
    printf("%p\n", p);

    for (int i = 0; i < 6; i++) {
        printf("p[%d] = %d\n", i, p[i]);
    }

    destroyPointer(&p);
    printf("%p\n", p);

    return 0;
}

