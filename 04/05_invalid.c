// Created by lin on 2023/9/4.
#include <stdio.h>

int main() {

    int a = 666;

    int *p = &a;

    printf("%p, %d\n", p, *p);

    p = NULL;

    return 0;
}

