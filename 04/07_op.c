// Created by lin on 2023/9/4.
#include <stdio.h>

int main() {

    char x = 6;
    printf("sizeof(char): %llu\n", sizeof(char));

    char *p = &x;

    printf("%p\n", p);
    printf("%p\n", p+1);
    printf("%p\n", p+2);
    printf("%p\n", p+3);

    return 0;
}

