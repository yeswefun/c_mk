// Created by lin on 2023/9/6.
#include <stdio.h>
#include <stdlib.h>

int main() {

    double x = 0;

    x = atof("12.34");
    printf("%f\n", x);

    x = atof("-12e34");
    printf("%f\n", x);

    x = atof("   1.234abcd"); // 1.234
    printf("%f\n", x);

    x = atof("0x10"); // 0.0, gcc
    printf("%f\n", x);

    x = atof("0x10p3.9"); // 0.0, gcc
    printf("%f\n", x);

    return 0;
}

