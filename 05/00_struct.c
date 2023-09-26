#include <stdio.h>

// 定义结构体的同时定义结构体变量
struct Foo {
  int id;
  char sex;
  char *name;
} foo;

// 只用一次
struct {
  int id;
  char sex;
  char *name;
} bar;

// typedef
typedef struct {
  int id;
  char sex;
  char *name;
} Bar;

// 只定义结构体
struct User {
  char *name;
  int age;
  char *id;
};

void print_user(struct User u) {
    printf("************************\n");
    printf("name: %s\n", u.name);
    printf("age: %d\n", u.age);
    printf("id: %s\n", u.id);
}

void print_user2(struct User *p) {
    printf("************************\n");
    printf("name: %s\n", p->name);
    printf("age: %d\n", p->age);
    printf("id: %s\n", p->id);
}

int main() {

    struct Foo f1, f2;

    struct User u1, u2;

    struct User u3 = {
        "Jerry",
        18,
        "nobody"
    };
    print_user(u3);

    struct User u4 = {
        .age = 28,
        .name = "Java"
    };
    print_user(u4);

    struct User *p = &u3;
    print_user2(p);


    printf("************************\n");
    printf("%llu\n", sizeof(struct User)); // 24
    typedef struct User User;
    User u;

    return 0;
}
