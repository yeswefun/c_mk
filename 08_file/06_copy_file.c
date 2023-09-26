// Created by lin on 2023/9/7.
#include <stdio.h>

#define CP_OK 0
#define CP_ILLEGAL_ARGS -1
#define CP_SRC_OPEN_ERR -2
#define CP_SRC_READ_ERR -3
#define CP_DST_OPEN_ERR -4
#define CP_DST_WRITE_ERR -5
#define CP_UNKNOWN_ERR -6

int copy_file(const char *src, const char *dst) {
    if (!src || !dst) {
        return CP_ILLEGAL_ARGS;
    }

    FILE *fp_src = fopen(src, "r"); // 在 windows 上拷贝非文本文件，需要加上 b
    if (!fp_src) {
        return CP_SRC_OPEN_ERR;
    }

    FILE *fp_dst = fopen(dst, "w"); // 在 windows 上拷贝非文本文件，需要加上 b
    if (!fp_dst) {
        fclose(fp_src);
        return CP_DST_OPEN_ERR;
    }

    int result;
    while (1) {
        int c = fgetc(fp_src);
        if (c == EOF) {
            if (ferror(fp_src)) {
                result = CP_SRC_READ_ERR;
            } else if (feof(fp_src)) {
                result = CP_OK;
            } else {
                result = CP_UNKNOWN_ERR;
            }
            break;
        }
        if (fputc(c, fp_dst) == EOF) {
            result = CP_DST_WRITE_ERR;
            break;
        }
    }

    fclose(fp_src);
    fclose(fp_dst);

    return result;
}

int main() {

    int result = 0;

//    result = copy_file("static/poet.txt", "static/poet_06.txt");
//    printf("%d\n", result);

// 拷贝失败, rb, wb
//    result = copy_file("static/2020.png", "static/2020_06.png");
//    printf("%d\n", result);

    return 0;
}

