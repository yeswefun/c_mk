// Created by lin on 2023/9/9.
#include <stdio.h>
#include <time.h>
#include <unistd.h>

typedef long long long_time_t;

long_time_t time_in_millis(void) {
    struct timeb time_buffer;
    ftime(&time_buffer);
    return time_buffer.time * 1000LL + time_buffer.millitm;
}

void delay() {
    sleep(1);
}

int main() {

    time_t start = time(NULL);
    delay();
    time_t end = time(NULL);
    double diff = difftime(start, end);
    printf("%f\n", diff);

    long_time_t s = time_in_millis();
    delay();
    long_time_t e = time_in_millis();
    printf("%lld\n", (e - s));

    return 0;
}

