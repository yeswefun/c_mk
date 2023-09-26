// Created by lin on 2023/9/6.
#include <stdio.h>

typedef struct {
  int id;
  char *name;
} Company;

typedef struct {
  int id;
  char *name;

  Company *company;

  struct {
    int id;
    char *name;
  } role;

} User;

int main() {

    Company company = {
        1,
        "YesWeFun"
    };

    User user = {
        6,
        "Java",

        &company,

        .role.id = 2,
        .role.name = "打杂",

        .role = {
            .id = 6,
            .name = "扫地"
        }
    };

    printf("user.id = %d\n", user.id);
    printf("user.name = %s\n", user.name);
    printf("user.company.id = %d\n", user.company->id);
    printf("user.company.name = %s\n", user.company->name);
    printf("user.role.id = %d\n", user.role.id);
    printf("user.role.name = %s\n", user.role.name);

    return 0;
}

