// Created by lin on 2023/9/3.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_arr(int arr[], int size) {
    printf("*********************\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

void swap_arr(int arr[], int x, int y) {
    int tmp = arr[x];
    arr[x] = arr[y];
    arr[y] = tmp;
}

void shuffle_arr(int arr[], int size) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        int rand_index = rand() % size; // 已经交换过的，还有可能继续交换
        swap_arr(arr, i, rand_index);
    }
}


int main() {

    int arr[8];

    for (int i = 0; i < 8; i++) {
        arr[i] = i;
    }

    print_arr(arr, 8);

    shuffle_arr(arr, 8);

    print_arr(arr, 8);

    return 0;
}

