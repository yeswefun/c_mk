// Created by lin on 2023/9/6.
#include <stdio.h>

#define CMD_INT 0
#define CMD_DOUBLE 1
#define CMD_STRING 2

typedef union {
  int a;
  double b;
  char *c;
} cmd_data;

typedef struct {
  int type;
  cmd_data data;
} cmd;

void process(cmd *p) {
    switch (p->type) {
        case CMD_INT:
            printf("int: %d\n", p->data.a);
            break;
        case CMD_DOUBLE:
            printf("double: %f\n", p->data.b);
            break;
        case CMD_STRING:
            printf("string: %s\n", p->data.c);
            break;
        default:
            fprintf(stderr, "*** unknown cmd type: %d\n", p->type);
    }
}

int main() {

    cmd command;

    command.type = CMD_INT;
    command.data.a = 6;
    process(&command);

    command.type = CMD_DOUBLE;
    command.data.b = 3.1415926;
    process(&command);

    command.type = CMD_STRING;
    command.data.c = "Java";
    process(&command);

    command.type = 666;
    process(&command);

    return 0;
}

