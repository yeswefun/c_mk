// Created by lin on 2023/9/3.
#include <stdio.h>

#define IS_HEX_CHAR(c) \
( (c) >= '0' &&  (c) <= '9') || \
( (c) >= 'A' &&  (c) <= 'F') || \
( (c) >= 'a' &&  (c) <= 'f')

int main() {

    printf("\'a\': %d\n", IS_HEX_CHAR('a'));

    return 0;
}

