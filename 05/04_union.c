// Created by lin on 2023/9/6.
#include <stdio.h>

union T {
    char a;
    short b;
    int c;
    long d;
    double e;   // 8
    char *name; // 8
};

int main() {

    printf("%llu\n", sizeof(union T));

    union T t = {'a'};
    printf("t.a = %c\n", t.a);

    t.c = 32;
    printf("t.c = %d\n", t.c);

    t.a = 'b';
    printf("t.a = %c\n", t.a);


    t.name = "Python";
    printf("t.name = %s\n", t.name);


    return 0;
}

