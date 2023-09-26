// Created by lin on 2023/9/3.
#include <stdio.h>
#include "include/09_util.h"
//#include <09_util.h>

/*
 在 CMakeLists.txt 指定 头文件路径，还胡参与编译的实现文件
 */
int main() {

    int result = add(1, 2);

    printf("result = %d\n", result);

    return 0;
}