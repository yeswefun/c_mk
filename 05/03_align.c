// Created by lin on 2023/9/6.
#include <stdio.h>
#include <stddef.h>

typedef struct {
    char a;     // 1
    char b;     // 1
    int c;      // 4
    short d;    // 2
    double e;   // 8
} Foo;

typedef struct {
  char a;     // 1
  char b;     // 1
  short d;    // 2
  int c;      // 4
  double e;   // 8
} Bar;

// 对整个结构体的对齐控制
#pragma pack(2)
typedef struct {
  char a;     // 1
  char b;     // 1
  int c;      // 4
  short d;    // 2
  double e;   // 8
} Foo2;

typedef struct {
  char a;     // 1
  char b;     // 1
// 对整个结构体的单个字段对齐控制
  __attribute((aligned(2))) int c;      // 4, gcc
//  _Alignas(4) int c; // 4, C11
  short d;    // 2
  double e;   // 8
} Foo3;

int main() {

    Foo foo = {
        'a', 'b', 16, 32, 1
    };

    printf("%llu\n", offsetof(Foo, c)); // 相对于首地址偏移的字节数

    return 0;
}

