// Created by lin on 2023/9/3.
#include <stdio.h>

// vla, C99
void print_arr(int r, int c, int arr[][c]) {
    printf("************\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("arr[%d][%d] = %d ", i, j, arr[i][j]);
        }
        printf("\n");
    }
}

void foo() {
    int a = 666;
    int b = 888;
    int c = 999;
    int d = a + b + c;
    printf("************ foo\n");
}

int main() {

    int arr[3][2];

    foo();
    print_arr(3, 2, arr);

    int arr2[4][2] = {1, 2, 3};
    print_arr(4, 2, arr2);

    int arr3[4][2] = {1, 2, 3, [2][0]=666, 77, 88};
    print_arr(4, 2, arr3);

    return 0;
}

