// Created by lin on 2023/9/4.
#include <stdio.h>

int main() {

    int *p = (int *) 100;

    printf("%p\n", p);

    *p = 666; // crash

    return 0;
}

