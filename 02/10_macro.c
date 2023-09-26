// Created by lin on 2023/9/3.
#include <stdio.h>

#define MAX(a, b) a>b?a:b

#define MUL(a, b) a * b
#define MUL_FIX(a, b) ((a) * (b))

int main() {

    int max = MAX(1, 3);
    printf("max = %d\n", max);

    int max2 = MAX(1, MAX(3, 4));
    printf("max2 = %d\n", max2); // 1

    int result = MUL(2, 3);
    printf("result: %d\n", result);

    int result2 = MUL(2, 3 + 4);
    printf("result2: %d\n", result2);

    int result3 = MUL_FIX(2, 3 + 4);
    printf("result3: %d\n", result3);

    return 0;
}

