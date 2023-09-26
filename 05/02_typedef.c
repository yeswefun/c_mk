// Created by lin on 2023/9/6.
#include <stdio.h>

struct Foo;
typedef struct Foo Foo;
typedef struct Foo {
  int id;
  char *name;
  Foo *self;
} Foo;

typedef struct User {
  int id;
  char *name;
//  User *p; // 还没有定义
  struct User *p;
} User;

int main() {

    Foo foo = {
        6,
        "Kotlin",
        NULL
    };
    foo.self = &foo;

    printf("foo.id = %d\n", foo.id);
    printf("foo.name = %s\n", foo.name);
    printf("foo.self = %p, &foo = %p\n", foo.self, &foo);

    User u;
    u.id = 8;
    u.name = "Java";
    u.p = &u;
    printf("u.id = %d\n", u.id);
    printf("u.name = %s\n", u.name);
    printf("u.p = %p, &u = %p\n", u.p, &u);

    return 0;
}

