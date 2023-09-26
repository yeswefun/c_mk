#include <stdio.h>
#include <tinycthread.h>

int sayHello(const char *name) {
    printf("thread[%#x]: Hello %s\n", thrd_current(), name);
    return 0;
}

int main() {

    thrd_t t;
    int ret = thrd_create(&t, sayHello, "C");
    if (ret == thrd_success) {
        printf("main thread[%#x] create new thread[%#x]\n", thrd_current(), t);
    } else {
        printf("main thread[%#x]\n", thrd_current());
    }

    thrd_sleep(&(struct timespec){.tv_sec = 0, .tv_nsec = 100000000}, NULL);

    return 0;
}
