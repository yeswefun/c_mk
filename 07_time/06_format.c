// Created by lin on 2023/9/8.
#include <stdio.h>
#include <time.h>

int main() {

    time_t ts = time(NULL);

    struct tm *t = localtime(&ts);

    // 2020-11-09 14:25:30
    char buffer[20] = {0};
    size_t size = strftime(buffer, sizeof(buffer), "%F %T", t); // msvc
    printf("%s\n", buffer);
    printf("%zu\n", size); // 0

    return 0;
}

