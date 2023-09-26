// Created by lin on 2023/9/3.
#include <stdio.h>

//int sub(int, int);
int sub(int x, int y);

int main() {

    int result = sub(3, 2);

    printf("result: %d\n", result);

    return 0;
}

int sub(int x, int y) {
    return x - y;
}
