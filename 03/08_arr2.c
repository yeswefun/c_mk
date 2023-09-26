// Created by lin on 2023/9/3.
#include <stdio.h>

int main() {

    int arr[3][2];

    printf("%d\n", sizeof(arr) / sizeof(arr[0]));

    printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {

        for (int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++) {
            arr[i][j] = 0;
            printf("arr[%d][%d] = %d ", i, j, arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}

