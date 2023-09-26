// Created by lin on 2023/9/7.
#include <stdio.h>
#include <errno.h>

int main() {

    FILE *fp = fopen("static/poet2.txt", "r");
    if (!fp) {
        perror("error");
        return errno;
    }

//    char buf[BUFSIZ];
//    setbuf(fp, buf);
//    setbuf(fp, NULL); // 关闭缓冲

    /*
        #define _IOFBF 0x0000
            全量缓冲
        #define _IOLBF 0x0040
            按行缓冲
        #define _IONBF 0x0004
            禁用缓冲
     */
    char buf[1024]; // 确保该变量的生命周期大于或等于 fp
    setvbuf(fp, buf, _IOLBF, 1024);

    printf("open file\n");

    fflush(stdout); // 缓冲没有满时

    fclose(fp);

    return 0;
}

