// Created by lin on 2023/9/11.
#include <stdio.h>

#include <add.h>
#include <sub.h>

int main() {

    int ret = 0;

    ret = add(1, 2);
    printf("add, ret = %d\n", ret);

    ret = sub(1, 2);
    printf("sub, ret = %d\n", ret);

    return 0;
}

