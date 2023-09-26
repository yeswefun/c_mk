// Created by lin on 2023/9/3.
#include <stdio.h>

//void foo(void) {} // C语言明确无参函数

void foo() {
    printf("foo\n");
}

int main() {

    foo(1);
    foo(1, 3.14);
    foo("haha");

    return 0;
}

