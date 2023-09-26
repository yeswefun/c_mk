#include <stdio.h>

int main() {

    int a = 666;

    int *p = &a;

    printf("%p, %p, %d\n", p, &p, *p);
    printf("%#x, %#x, %d\n", p, &p, *p);

    printf("sizeof(p): %llu\n", sizeof(p));

    int **pp = &p;
    printf("sizeof(pp): %llu\n", sizeof(pp));
    printf("%#x, %#x, %#x\n", p, pp, &pp);

    return 0;
}
