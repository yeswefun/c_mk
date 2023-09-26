// Created by lin on 2023/9/5.
#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p;

    p = malloc(sizeof(int) * 6);
    printf("%p\n", p);

    for (int i = 0; i < 6; i++) {
        printf("p[%d] = %d\n", i, p[i]);
    }

    if (p) {
        free(p);
        p = NULL;
    }
    printf("%p\n", p);

    return 0;
}

