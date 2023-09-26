// Created by lin on 2023/9/3.
#include <stdio.h>
#include <stdarg.h>

/*
    argc, varargs0, varargs1, ...
 */
void handle(int argc, ...) {
    va_list  args;
    va_start(args, argc);
    for (int i = 0; i < argc; i++) {
        int arg = va_arg(args, int);
        printf("%d: %d\n", i, arg);
    }
    va_end(args);
}

int main() {

    handle(3, 11, 22, 33);

    return 0;
}

