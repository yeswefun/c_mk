// Created by lin on 2023/9/8.
#define _XOPEN_SOURCE

#include <stdio.h>
#include <time.h>

int main() {


    time_t ts = time(NULL);
    struct tm t;

    char buf[20];
//    char *unparsed_string = strptime(buf, "%Y-%m-%d %H:%M:%S", &t); // posix 对 C 标准库的扩展
    puts(buf);

    return 0;
}

