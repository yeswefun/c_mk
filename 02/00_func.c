#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int main() {

    int result = add(1, 2);

    printf("result: %d\n", result);

    return 0;
}
