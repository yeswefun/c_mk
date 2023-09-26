// Created by lin on 2023/9/3.
#include <stdio.h>
#include <string.h>

int main() {

    int arr[] = {1, 2, 3};
    int len = sizeof (arr) / sizeof arr[0];
    printf("len = %d\n", len);

    char arr2[] = "hello";

    // 字符串总长度
    int len2= sizeof (arr2) / sizeof (arr2[0]);
    printf("len2 = %d\n", len2);

    // 字符串有效长度
    size_t len3 = strlen(arr2);
    printf("len3 = %lld\n", len3);

    return 0;
}

