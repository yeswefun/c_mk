// Created by lin on 2023/9/5.
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void shuffle(int *p, int size) {
    srand(time(NULL));
    for (int i = size - 1; i > 0; i--) {
        int rand_index = rand() % i;
        swap(p + i, p + rand_index);
    }
}

void print(int *p, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d, ", p[i]);
    }
    printf("\n");
}

int *partition(int *low, int *high) {
    int pivot = *(low + (high - low) / 2); // 避免溢出
    int *p = low;
    int *q = high;
    while (1) {
        while (*p < pivot)
            p++;
        while (*q > pivot)
            q--;
        if (p >= q)
            break;
        swap(p, q);
    }
    return q; // q == p
}

void quickSort(int *low, int *high) {
    if (low >= high) {
        return;
    }
    int *p = partition(low, high);
    quickSort(low, p - 1);
    quickSort(p + 1, high);
}

#define CNT 16

int main() {

    int *p = malloc(sizeof(int) * CNT);
    if (!p) {
        return 1;
    }

    for (int i = 0; i < CNT; i++) {
        p[i] = i;
    }

    print(p, CNT);
    shuffle(p, CNT);
    print(p, CNT);

    quickSort(p, p + CNT);
    print(p, CNT);

    return 0;
}

