// Created by lin on 2023/9/7.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char str[] = "C, 1972; C++, 1983; Java, 1995; Rust, 2010; Kotlin, 2011";

    typedef struct {
      char *name;
      int year;
    } Lang;

    const char *lang_break = ";";
    const char *year_break = ",";

    int lang_cap = 3;
    int lang_size = 0;
    Lang *langList = malloc(sizeof(Lang) * lang_cap);
    if (!langList) {
        abort();
    }

    char *next = strtok(str, year_break); // 查找到 , 然后替换为 NULL
    while (next) {
        Lang lang;
        if (*next == ' ') { // 第一个 C 前面没有空格
            ++next;
        }
        lang.name = next;

        next = strtok(NULL, lang_break); // 之前剩余的字符串
        if (next) {
            lang.year = atoi(next);

            if (lang_size + 1 >= lang_cap) {
                lang_cap *= 2;
                langList = realloc(langList, sizeof(Lang) * lang_cap);
            }

            langList[lang_size++] = lang;

            next = strtok(NULL, year_break);
        }
    }

    printf("size: %d\n", lang_size);
    printf("cap: %d\n", lang_cap);

    for (int i = 0; i < lang_size; i++) {
        printf("%s, %d\n", langList[i].name, langList[i].year);
    }

    return 0;
}

