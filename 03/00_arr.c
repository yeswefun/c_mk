#include <stdio.h>

#define SIZE 6

int main() {

    int arr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        arr[i] = i;
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("***************\n");
    int arr2[SIZE] = {1, 2, 3};
    for (int i = 0; i < SIZE; i++) {
        printf("arr2[%d] = %d\n", i, arr2[i]);
    }

    printf("***************\n");
    int arr3[] = {1, 2, 3};
    for (int i = 0; i < sizeof(arr3)/sizeof(arr3[0]); i++) {
        printf("arr3[%d] = %d\n", i, arr3[i]);
    }

    printf("***************\n");
    // C99
    char carr[SIZE] = {[2] = 'x', 'y', 'z' };
    for (int i = 0; i < SIZE; i++) {
        printf("carr[%d] = %d, [%c]\n", i, carr[i], carr[i]);
    }

    return 0;
}
