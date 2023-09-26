// Created by lin on 2023/9/7.

#define __STDC_WANT_LIB_EXT1__ 1

#include <stdio.h>
#include <sec_api/string_s.h>

int main() {

#ifdef __STDC_WANT_LIB_EXT1__
    puts("support C11 safe version");
#else
    puts("Not Supported");
#endif

    char dst[2];

    int error_no = strcpy_s(dst, 2, "Too Long");

    printf("%d\n", error_no);

    if (error_no) {
        perror("出错了呀");
    }

    return 0;
}

