// Created by lin on 2023/9/10.
#include <stdio.h>

#define RET_OK 0
#define RET_ERR 1

typedef struct {
  int id;
  char sex;
  char *name;
} User;

void print_user(const User *user) {
    printf("*********************\n");
    printf("id: %d\n", user->id);
    printf("name: %s\n", user->name);
    printf("sex: %c\n", user->sex);
}

int save_user(const char *file_path, const User *user) {
    FILE *fp = fopen(file_path, "wb");
    if (!fp) {
        perror("");
        return RET_ERR;
    }

    size_t expect_size = sizeof(User);
    size_t result_size = fwrite(user, expect_size, 1, fp);
//    if (expect_size != result_size) {
//        perror("");
//        return RET_ERR;
//    }

    fclose(fp);

    return RET_OK;
}

void load_user(const char *file_path, User *user) {
    FILE *fp = fopen(file_path, "rb");
    if (!fp) {
        perror("");
        return;
    }
    size_t expect_size = sizeof(User);
    size_t result_size = fread(user, expect_size, 1, fp);
//    if (expect_size != result_size) {
//        perror("");
//        return;
//    }
    fclose(fp);
}

int main() {

    User u = {6, 'm', "Java"};
    print_user(&u);

    int result = save_user("static/12_user.txt", &u);
    printf("result: %d\n", result);

    User u2 = {};
    load_user("static/12_user.txt", &u2);
    print_user(&u2);

    return 0;
}

