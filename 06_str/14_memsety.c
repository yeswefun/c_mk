// Created by lin on 2023/9/7.
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>

int main() {

    size_t size = sizeof(int) * 4;

    int *mem = malloc(size);
    if (!mem) {
        abort();
    }

    memset(mem, 0, size);

    for (int i = 0; i < 4; i++) {
        printf("%d\n", mem[i]);
    }

    free(mem);

    return 0;
}

