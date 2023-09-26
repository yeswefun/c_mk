// Created by lin on 2023/9/3.
#include <stdio.h>

void printArr(int arr[], int len) {
    printf("************\n");
    for (int i = 0; i < len; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

int main() {

    int arr[] = {1, 2, 3};
    printArr(arr, sizeof(arr) / sizeof(arr[0]));

    int arr2[] = {1, 3, 5, 7, 9};
    printArr(arr2, sizeof(arr2) / sizeof(arr2[0]));

    return 0;
}

