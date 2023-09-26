// Created by lin on 2023/9/5.
#include <stdio.h>

void sum(int arr[], int length, int *sum) {
    *sum = 0;
    for (int i = 0; i < length; i++) {
        *sum += arr[i];
    }
}

int main() {

    int arr[] = {1, 2, 3};

    int result = 0;

    sum(arr, 3, &result);

    printf("result: %d\n", result);

    return 0;
}

