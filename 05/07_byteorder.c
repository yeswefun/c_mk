// Created by lin on 2023/9/6.
#include <stdio.h>

int isBigEndian() {
    union {
      char c[2];
      short s;
    } value = {.s = 0x0100};
    return value.c[0] == 1;
}

int isBigEndian2() {
    short s = 0x0100;
    char *p = (char *) &s;
    return p[0] == 1;
}

int toggleEndian(int original) {

    const int sizeof_int = sizeof(int);

    union {
      char c[4];
      int i;
    } value = {.i = original};

    for (int i = 0; i < sizeof_int / 2; i++) {
        char tmp = value.c[i];
        value.c[i] = value.c[sizeof_int - 1 - i];
        value.c[sizeof_int - 1 - i] = tmp;
    }

    return value.i;
}

int toggleEndian2(int original) {
    char *p = (char *) &original;
    //int sizeof_char_ptr = sizeof(char *); // 这是错的
    int sizeof_int = sizeof(int);
    for (int i = 0; i < sizeof_int / 2; i++) {
        char tmp = p[i];
        p[i] = p[sizeof_int - 1 - i];
        p[sizeof_int - 1 - i] = tmp;
    }
    return original;
}

int main() {

    printf("%d\n", isBigEndian());
    printf("%d\n", isBigEndian2());

    int i = 0x01020304;
    printf("%#x\n", i);
    printf("%#x\n", toggleEndian(i));
    printf("%#x\n", toggleEndian2(i));

    return 0;
}

