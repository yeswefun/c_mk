//
// Created by lin on 2023/9/2.
//
#include <stdio.h>

/**
 *
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char **argv) {

    int sum = 0;
    int i = 0;

    while (i < 6) {
        sum = sum + i;
        i++;
    }

    printf("sum = %d\n", sum);

    return 0;
}