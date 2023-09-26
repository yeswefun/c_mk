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

// --------------------------------------- 核心

/*
    low                         high
    3   2   7   1   8   5   9   4
 */
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int p = low;
    for (int i = low; i < high; i++) {
        if (arr[i] < pivot) {
            swap_arr(arr, i, p);
            p++;
        }
    }
    // 3    2   1   [4]   8   5   9   7
    swap_arr(arr, p, high);
    return p;
}

void sort_arr(int arr[], int low, int high) {
    if (low >= high)
        return;
    int p = partition(arr, low, high);
    sort_arr(arr, low, p - 1);
    sort_arr(arr, p + 1, high);
}
// --------------------------------------- 核心


/*
    lomuto partition
 */
int main() {

    int size = 16;
    int arr[size];
    for (int i = 0; i < size; i++) {
        arr[i] = i;
    }

    print_arr(arr, size);
    shuffle_arr(arr, size);
    print_arr(arr, size);

    sort_arr(arr, 0, size - 1);
    print_arr(arr, size);

    return 0;
}

