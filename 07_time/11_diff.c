// Created by lin on 2023/9/9.
#include <stdio.h>
#include <time.h>
#include <unistd.h>

void delay() {
    sleep(1);
}

int main() {

    // 处理器的时间
    clock_t start = clock();
    delay();
    clock_t end = clock();

    printf("%f\n", (end - start) * 1.0 / CLOCKS_PER_SEC);

    return 0;
}

