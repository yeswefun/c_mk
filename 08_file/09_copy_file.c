// Created by lin on 2023/9/7.
#include <stdio.h>
#include <time.h>
#include <errno.h>
#include <string.h>

#define CP_OK 0
#define CP_ILLEGAL_ARGS -1
#define CP_SRC_OPEN_ERR -2
#define CP_SRC_READ_ERR -3
#define CP_DST_OPEN_ERR -4
#define CP_DST_WRITE_ERR -5
#define CP_UNKNOWN_ERR -6

#define LOGE(format, ...) \
if (errno != 0) {         \
    fprintf(stderr, format, ##__VA_ARGS__); \
    fprintf(stderr, ": %s\n", strerror(errno)); \
}

int copy_file1(const char *src, const char *dst) {
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

#define BUFFER_SIZE 1024

int copy_file2(const char *src, const char *dst) {
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

    // 遇到 '\n' 结束
    // 读取到 511 个字符后结束
    char buffer[BUFFER_SIZE];
    char *line;

    while (1) {
        line = fgets(buffer, BUFFER_SIZE, fp_src);
        if (!line) {
            if (ferror(fp_src)) {
                result = CP_SRC_READ_ERR;
            } else if (feof(fp_src)) {
                result = CP_OK;
            } else {
                result = CP_UNKNOWN_ERR;
            }
            break;
        }

        if (fputs(line, fp_dst) == EOF) { // 写入失败
            result = CP_DST_WRITE_ERR;
            break;
        }
    }

    fclose(fp_src);
    fclose(fp_dst);

    return result;
}

void run(int (*fn)(const char *, const char *), const char *src, const char *dst) {
    clock_t start = clock();
    int result = fn(src, dst);
    clock_t end = clock();
    printf("%f\n", (end - start) * 1.0 / CLOCKS_PER_SEC);
    printf("%d\n", result);
    if (result != 0) {
        LOGE("error: dst == %s\n", dst);
    }
}

/*
0.389000
0
0.061000
0
 */
int main() {

//    setlocale(LC_ALL, "zh_CN.utf-8"); // 中文文件名称

    run(copy_file1, "static/harry_potter.txt", "static/harry_potter_1.txt");

    run(copy_file2, "static/harry_potter.txt", "static/harry_potter_2.txt");

    return 0;
}

