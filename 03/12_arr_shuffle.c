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
    for (int i = size - 1; i > 0; i--) {
        int rand_index = rand() % i;
        swap_arr(arr, i, rand_index);
    }
}

int main() {

    int size = 16;
    int arr[size];

    for (int i = 0; i < size; i++) {
        arr[i] = i;
    }

    print_arr(arr, size);

    shuffle_arr(arr, size);

    print_arr(arr, size);

    return 0;
}

