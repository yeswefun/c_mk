// Created by lin on 2023/9/3.
#include <stdio.h>

int sum(int n) {
    if (n < 1) {
        return n;
    }
    return n + sum(n - 1);
}

/*
    规则: f(n) = f(n - 1) + f(n - 2)

    初值: f(0) = 0, f(1) = 1
 */
unsigned int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {

    int result = sum(3);

    printf("result: %d\n", result);

    for (int i = 0; i < 10; i++) {
        printf("f(%d) = %d\n", i, fibonacci(i));
    }

    return 0;
}

