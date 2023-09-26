// Created by lin on 2023/9/2.
#include <stdio.h>
#include <stdbool.h>

int main() {

    bool b = 3 > 2;
    printf("%d\n", b);
    printf("%d\n", true);
    printf("%d\n", false);

    int x = 0;
    int y = 0;
    scanf("%d", &x);
    scanf("%d", &y);
    printf("x = %d, y = %d\n", x, y);
    if (x > y) {
        printf("x\n");
    } else {
        printf("y\n");
    }

    int flag = x > y ? 1 : 0;
    printf("flag = %d\n", flag);

    return 0;
}

