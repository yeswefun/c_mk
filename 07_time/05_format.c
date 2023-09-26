// Created by lin on 2023/9/8.
#include <stdio.h>
#include <time.h>

typedef long long long_time_t;

long_time_t time_in_millis(void) {
    struct timeb time_buffer;
    ftime(&time_buffer);
    return time_buffer.time * 1000LL + time_buffer.millitm;
}

int main() {

    time_t ts = time(NULL);

    struct tm *t = localtime(&ts);

    puts(asctime(t));
    puts(ctime(&ts));

    // 2020-11-09 14:25:30
    char buffer[20];
    size_t size = 0;

    size = strftime(buffer, 20, "%Y-%m-%d %H:%M:%S", t);
    printf("%s\n", buffer);
    printf("%zu\n", size);

    size = strftime(buffer, 20, "%Y%m%d%H%M%S", t);
    printf("%s\n", buffer);
    printf("%zu\n", size);

    printf("***************\n");
    sprintf(buffer+14, "%03lld", time_in_millis() % 1000);
    printf("%s\n", buffer);

    return 0;
}

