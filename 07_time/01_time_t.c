// Created by lin on 2023/9/8.
#include <stdio.h>
#include <time.h>

int main() {

    time_t ts;

    time(&ts);
    printf("%lld\n", ts); // 秒数

    ts = time(&ts);
    printf("%lld\n", ts);

    return 0;
}

