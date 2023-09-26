// Created by lin on 2023/9/9.
#include <stdio.h>

#define BUFFER_SIZE 32

void echo() {
    int buffer[BUFFER_SIZE] = {0}; // char -> int
    while (1) {
        size_t bytes_read = fread(buffer, sizeof(buffer[0]), BUFFER_SIZE, stdin); // 尽可能读取 32 个字符，回车也不会立即返回
//        print_int_array
        if (bytes_read < BUFFER_SIZE) {
            if (feof(stdin)) {
                puts("EOF");
                fwrite(buffer, sizeof(char), bytes_read, stdout);
            } else if (ferror(stdin)) {
                perror("read");
            }
            break;
        }
        fwrite(buffer, sizeof(buffer[0]), BUFFER_SIZE, stdout);
        fflush(stdout);
    }
}

int main() {

    echo();

    return 0;
}

