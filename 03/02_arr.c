// Created by lin on 2023/9/3.
#include <stdio.h>

int main() {

    int size = 6;

//    int arr[size] = {1, 2, 3}; // error
    int arr[size];

    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}

