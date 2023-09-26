// Created by lin on 2023/9/5.
#include <stdio.h>

int main() {

    int arr[] = {1, 2, 3};

    int size = sizeof(arr) / sizeof(arr[0]);

    printf("*********************\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("*********************\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, *(arr + i));
    }

    printf("*********************\n");
    int *p1 = arr;
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, p1[i]);
    }

    printf("*********************\n");
    int *p2 = arr;
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, *(p2 + i));
    }

    // 常量指针
    int *const p3 = arr;

    return 0;
}

