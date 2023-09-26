// Created by lin on 2023/9/3.
#include <stdio.h>

#define DEBUG

void dump(char *msg) {
#ifdef DEBUG
    puts(msg);
#endif
}

int main() {

    dump("main start");

    printf("main\n");

    dump("main end");

    printf("%ld\n", __STDC_VERSION__);

#if __STDC_VERSION__ >= 201112
    puts("C11");
#elif __STDC_VERSION__ >= 199901
    puts("C99");
#else
    puts("maybe C90?");
#endif

    return 0;
}

