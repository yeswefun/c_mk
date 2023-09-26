// Created by lin on 2023/9/10.
#include <stdio.h>

int main() {

    int result = -1;

    result = rename("static/harry_potter_2.txt", "static/demo.txt");
    printf("%d\n", result);

    result = rename("static/harry_potter_2.txt", "static/demo.txt");
    printf("%d\n", result);

    return 0;
}

