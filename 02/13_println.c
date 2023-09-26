// Created by lin on 2023/9/3.
#include <stdio.h>
#include <stdarg.h>

void printlnf(const char *format, ...) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    printf("\n");
    va_end(args);
}

#define PRINTLN(fomat, ...) printf(fomat"\n", ##__VA_ARGS__)

#define PRINT_TAG(value) PRINTLN(#value" : %d", value)

#define PRINTV(format, ...) printf("("__FILE__":%d) : [%s] " format "\n", __LINE__, __FUNCTION__, ##__VA_ARGS__)

int main() {

    printf("main: %d\n", 222);

    printlnf("main: %d", 333);

    PRINTLN("main: %d", 666);
    PRINTLN("main");

    int num = 666;
    PRINT_TAG(num);
    PRINT_TAG(888);
    PRINT_TAG(3 + 4);

    PRINTV("haha");
    PRINTV("haha %d", 666);


    return 0;
}

