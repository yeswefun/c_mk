// Created by lin on 2023/9/3.
#include <stdio.h>

void passByMemory(int p) {
    printf("p = %d\n", p);
}

// 不经过内存，没有内存地址
void passByRegister(register int p) {
    printf("p = %d\n", p);
}

int main() {

    passByMemory(6);

    passByRegister(8);

    return 0;
}

