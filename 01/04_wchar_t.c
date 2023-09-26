// Created by lin on 2023/9/2.
#include <stdio.h>
#include <locale.h>

int main() {

    // C95 -> wchar_t ?
    wchar_t ni = L'你';
    printf("%d\n", ni);

    wchar_t ni_hex = L'\x4F60';
    printf("%d\n", ni_hex);

    // 宽字符如何输出
    setlocale(LC_ALL, "zh-CN");
    wprintf(L"[%lc]\n", ni);

    return 0;
}

