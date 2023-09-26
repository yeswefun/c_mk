// Created by lin on 2023/9/5.
#include <stdio.h>

int sum(int arr[], int length) {
    int ret = 0;
    for (int i = 0; i < length; i++) {
        ret += arr[i];
    }
    return ret;
}

// double

// struct

int main() {

    int arr[] = {1, 2, 3};

    int result = sum(arr, 3);

    printf("result: %d\n", result);

    return 0;
}

