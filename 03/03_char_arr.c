// Created by lin on 2023/9/3.
#include <stdio.h>

int main() {

    char arr[] = "Hello World";

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("arr[%d] = %c, %d\n", i, arr[i], arr[i]);
    }

    printf("arr = %s\n", arr);

    return 0;
}

