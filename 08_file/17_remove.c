// Created by lin on 2023/9/10.
#include <stdio.h>

int main() {

    int result = -1;

    result = remove("static/harry_potter_1.txt");
    printf("%d\n", result);

    result = remove("static/harry_potter_x.txt");
    printf("%d\n", result);

    return 0;
}
