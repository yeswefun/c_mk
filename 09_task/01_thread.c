#include <stdio.h>
#include <tinycthread.h>

int sayHello(const char *name) {
    printf("thread[%#x]: Hello %s\n", thrd_current(), name);
    return 1;
}

int main() {

    thrd_t t;
    int ret = thrd_create(&t, sayHello, "C");
    if (ret == thrd_success) {
        printf("main thread[%#x] create new thread[%#x]\n", thrd_current(), t);
    } else {
        printf("main thread[%#x]\n", thrd_current());
    }

    int res;
    thrd_join(t, &res);
    printf("res: %d\n", res);

    return 0;
}
