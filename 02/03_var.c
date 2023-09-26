// Created by lin on 2023/9/3.
#include <stdio.h>

// file scope
int g_num = 1;

void foo(void) {

    //静态变量
    // 作用域全局，内存不会因为函数退出而回收
    // 初始值为对应类型的默认值
    static int cnt;
    ++cnt;

//    auto int i; // 局部变量，必须先赋值，后使用
    // 自动变量
    // 块作用域
    // 没有初始值
    auto int i = 0;
    ++i;

    printf("cnt: %d, i = %d\n", cnt, i);
}

void bar() {
    int x = 666, y = 888;
}

void print_array(int size, int array[size]); // prototype scope

int main() { // function scope

//    auto int i = 6;
    int i = 6;

    { // block scope
        int j = 8;
    }

    foo();
    bar();
    foo();
    bar();
    foo();

    return 0;
}

void print_array(int size, int array[size]) {
    for (int i = 0; i < size; i++) {
        printf("%d\n", array[i]);
    }
}