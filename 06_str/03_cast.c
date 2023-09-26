// Created by lin on 2023/9/6.
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int main() {

    char const *const s = "1 200000000000000000000000000000000 -3 5abc bye";
    printf("%s\n", s);

    char const *start = s;
    char *end = NULL;

    while (1) {

        errno = 0; // 清空错误

        const long i = strtol(start, &end, 10);

        if (start == end) {
            break;
        }

        // 字符串默认以 NULL 为结束符 \0
        // (int)(end - start): 字符串长度
        // start: 字符串起点
        printf("%.*s\t -> %ld", (int)(end - start), start, i);

        if (errno == ERANGE) { // 溢出
            perror("出错了呀");
        }

        putchar('\n');

        start = end; // 往后挪
    }

    printf("left: %s\n", end);

    return 0;
}

