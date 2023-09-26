// Created by lin on 2023/9/6.
#include <stdio.h>
#include <string.h>

int main() {

    char *str = "C, 1972; C++, 1983; Java, 1995; Rust, 2010; Kotlin, 2011";

    char *break_set = ",;";

    int count = 0;
    char *p = str;

    do {
        p = strpbrk(p, break_set);
        if (p) {
            puts(p);
            p++;
            count++;
        }
    } while (p);

    printf("cmt: %d\n", count);

    return 0;
}

