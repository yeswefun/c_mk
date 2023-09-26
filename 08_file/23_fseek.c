// Created by lin on 2023/9/10.
#include <stdio.h>

int main() {

    FILE *fp = fopen("static/poet.txt", "rb");

    printf("pos = %ld\n", ftell(fp));   // 0

//    128 -> 1024
#define BUFFER_SIZE 1024
    char buf[BUFFER_SIZE];
    fread(buf, 1, BUFFER_SIZE, fp);
    printf("pos = %ld\n", ftell(fp));   // 1004

    fseek(fp, 10, SEEK_SET); // absolute, start
    printf("pos = %ld\n", ftell(fp));

    fseek(fp, 10, SEEK_CUR); // relative
    printf("pos = %ld\n", ftell(fp));

    fseek(fp, -10, SEEK_END); // absolute, end
    printf("pos = %ld\n", ftell(fp));


    fclose(fp);

    return 0;
}

