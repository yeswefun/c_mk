// Created by lin on 2023/9/3.
#include <stdio.h>

void sum_arr(int r, int c, int arr[][c], int result[]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            result[i] += arr[i][j];
        }
    }
}

int main() {

    int arr[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    int ret[3] = {};
    sum_arr(3, 2, arr, ret);

    for (int i = 0; i < 3; i++) {
        printf("%d\n", ret[i]);
    }

    return 0;
}
