// Created by lin on 2023/9/2.
#include <stdio.h>

int main() {

    char a = 'a'; // 97
    char z = 'z'; // 122
    printf("z - a = %d\n", (z - a));

    char A = 'A'; // 65
    char Z = 'Z'; // 90
    printf("Z - A = %d\n", (Z - A));

    printf("A + 32 = %c\n", (A + 32));
    printf("a - 32 = %c\n", (a - 32));

    char char_0 = '0'; // 48
    printf("'0' = %d\n", char_0);

    char c = '\0'; // 0
    printf("'\\0' = %d\n", c);

    char char_1_escape_oct = '\61'; // \ 后面是 八进制数，49 的八进制 61
    printf("%c\n", char_1_escape_oct);

    char char_1_escape_hex = '\x31'; // \x 后面是 十六进制，49 的十六进制 31
    printf("%c\n", char_1_escape_hex);

    return 0;
}

