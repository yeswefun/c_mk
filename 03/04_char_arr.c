// Created by lin on 2023/9/3.
#include <stdio.h>

int main() {

    char arr[3] = "abc";

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("arr[%d] = %c, %d\n", i, arr[i], arr[i]);
    }

    printf("arr = %s\n", arr); // C语言, 依据 '\0' 作为结束符

    char arr2[4] = "abc";
    printf("arr2 = %s\n", arr2);

    return 0;
}

