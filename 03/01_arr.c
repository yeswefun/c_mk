// Created by lin on 2023/9/3.
#include <stdio.h>

#define SIZE 6

int g_arr[SIZE];

int main() {

    int arr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("***************\n");
    for (int i = 0; i < SIZE; i++) {
        printf("g_arr[%d] = %d\n", i, g_arr[i]);
    }
    return 0;
}

