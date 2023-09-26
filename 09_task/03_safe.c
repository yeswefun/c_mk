// Created by lin on 2023/9/10.
#include <stdio.h>
#include <tinycthread.h>

int count = 0;

int counter(void *arg) {
    printf("counter\n");
    for (int i = 0; i < 100000; i++) {
        count++; // 并非原子操作
        /*
         int tmp = count;
         tmp = tmp + 1;
         count = tmp;
         */
    }
    return 0;
}

int main() {

    thrd_t t1, t2;

    thrd_create(&t1, counter, NULL);
    thrd_create(&t2, counter, NULL);

    thrd_join(t1, NULL);
    thrd_join(t2, NULL);

    printf("%d\n", count);

    return 0;
}

