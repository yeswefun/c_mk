// Created by lin on 2023/9/10.
#include <stdio.h>
#include <tinycthread.h>

int flag = 0;

int a = 0;
int x = 0;

int T1(void *arg) {
    a = 2;
    flag = 1;
    a = a + 3;
    return 0;
}

int T2(void *arg) {
    while (!flag) {}
    x = a * a;
    return 0;
}

int main() {

    thrd_t t1, t2;

    thrd_create(&t1, T1, NULL);
    thrd_create(&t2, T2, NULL);

    thrd_join(t1, NULL);
    thrd_join(t2, NULL);

    printf("x = %d\n", x);
    printf("flag = %d\n", flag);

    return 0;
}

