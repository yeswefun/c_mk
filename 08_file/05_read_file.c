// Created by lin on 2023/9/7.
#include <stdio.h>
#include <errno.h>

int main() {

    FILE *fp = fopen("static/poet.txt", "r");
    if (!fp) {
        perror("error");
        return errno;
    }

    int c = getc(fp);
    while (c != EOF) {
        putchar(c);
        c = getc(fp);
    }

    fclose(fp);

    return 0;
}

