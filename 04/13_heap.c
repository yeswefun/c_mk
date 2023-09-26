// Created by lin on 2023/9/5.
#include <stdio.h>
#include <stdlib.h>

#define CNT 3

int main() {

    int arr[] = {0, 0, 0}; // 栈内存

    int *p = malloc(sizeof(int) * CNT); // 堆内存

    if (p) {
        free(p);
        p = NULL;
    }

    return 0;
}

