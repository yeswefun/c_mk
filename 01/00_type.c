#include <stdio.h>
#include <string.h>

void print_size(char *tag, size_t size) {
//    printf("%-16s %zu\n", tag, size);
    printf("%-16s %llu\n", tag, size);
}

int main() {

    char c = 'a';

    short s = 1;

    int i = 2;

    long l = 3;

    long long ll = 4;

    float f = 3.14f;

    double d = 2.71828;

    print_size("char", sizeof c);
    print_size("short", sizeof s);
    print_size("int", sizeof i);
    print_size("long", sizeof l);
    print_size("long long", sizeof ll);
    print_size("float", sizeof f);
    print_size("doble", sizeof d);

    printf("************************\n");
    char *s1 = "abc";
    char *s2 = "abcd";
    print_size("s1", sizeof s1);
    print_size("s2", sizeof s2);

    print_size("s1", strlen(s1));
    print_size("s2", strlen(s2));

    return 0;
}
