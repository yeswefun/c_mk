#include <stdio.h>
#include <ctype.h>

int isDigit(char c) {
    return c >= '0' && c <= '9';
}

int main() {

    printf("%d\n", isDigit('0'));
    printf("%d\n", isdigit('0'));
    printf("%d\n", isspace(' '));
    printf("%d\n", isalpha('0'));
    printf("%d\n", isalnum('0'));
    printf("%d\n", ispunct('0'));

    printf("%c\n", toupper('a'));
    printf("%c\n", tolower('A'));

    return 0;
}
