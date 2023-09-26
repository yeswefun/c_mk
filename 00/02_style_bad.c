//
// Created by lin on 2023/9/2.
//
#include <stdio.h>

int main() {

    int a = 0;
    int i = 0;

    while (i < 6) {
        a = a + i;
        i++;
    }

    printf("a = %d\n", a);

    return 0;
}