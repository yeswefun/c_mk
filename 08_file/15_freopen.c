// Created by lin on 2023/9/10.
#include <stdio.h>

int main() {

    freopen("static/output.log", "a", stdout); // 此时 stdout 描述的是 output.log

    puts("hello world - 15_redirect");

    fclose(stdout);

    return 0;
}

