// Created by lin on 2023/9/6.
#include <stdio.h>

// start from 0
typedef enum {
  JPG,
  PNG,
  GIF,
  BMP,
  UNKNOWM
} ImageFormat;

ImageFormat GuessFormat(char *file_path) {
    ImageFormat file_format = UNKNOWM;
    FILE *fp = fopen(file_path, "rb"); // unix-like, b 不需要
    if (fp) {
        char buffer[8] = {0};
        size_t bytes_count = fread(buffer, 1, 8, fp);
        if (bytes_count == 8) {
            /*
                bmp: 42 4D
                png: 89 50 4E 47 0D 0A 1A 0A
                jpeg: FF D8 FF E0
             */
            if (*((short *) buffer) == 0x4D42) { // 改变步长, 字节序
                file_format = BMP;
            } else if (*((long long *) buffer) == 0x0A1A0A0D474E5089) {
                file_format = PNG;
            } else if (*((int *) buffer) == 0xE0FFD8FF) {
                file_format = JPG;
            }
        }
        fclose(fp);
    }
    return file_format;
}

/*
 Working Directory
    $ProjectFileDir$
 */
int main() {

    printf("%d\n", GuessFormat("images/102.jpg"));
    printf("%d\n", GuessFormat("images/103.png"));

    return 0;
}

