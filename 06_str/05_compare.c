// Created by lin on 2023/9/6.
#include <stdio.h>
#include <string.h>

int main() {

    char *s1 = "hello";
    char *s2 = "hellx";
    char *s3 = "hello";

    printf("%d\n", strcmp(s1, s2)); // -1
    printf("%d\n", strcmp(s1, s3)); // 0
    printf("%d\n", strncmp(s1, s2, 4)); // 0

    return 0;
}

