// Created by lin on 2023/9/8.
#include <stdio.h>
#include <time.h>

int main() {

    time_t ts;
    time(&ts);

    // time_t -> struct tm
    struct tm *t = localtime(&ts);
    printf("%d\n", t->tm_year);
    printf("%d\n", t->tm_mon);
    printf("%d\n", t->tm_mday);
    printf("%d\n", t->tm_hour);
    printf("%d\n", t->tm_min);
    printf("%d\n", t->tm_sec);


    // time_t -> struct tm
    struct tm *gmt = gmtime(&ts);
    printf("*********************\n");
    printf("%d\n", gmt->tm_year);
    printf("%d\n", gmt->tm_mon);
    printf("%d\n", gmt->tm_mday);
    printf("%d\n", gmt->tm_hour);
    printf("%d\n", gmt->tm_min);
    printf("%d\n", gmt->tm_sec);

    return 0;
}

