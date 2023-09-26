// Created by lin on 2023/9/10.
#include <stdio.h>

#if defined(__APPLE__) || defined(__linux__)
#include <unistd.h>
#elif defined(_WIN32)
#include <io.h>
#endif

void redirectToStdout(const char *file_path) {

    static int stdout_no = -1;

    if (file_path) {
        if (stdout_no == -1) {
            stdout_no = dup(fileno(stdout));
        }

        fflush(stdout);

        freopen(file_path, "a", stdout);
    } else {
        if (stdout_no != -1) {
            fflush(stdout);
            dup2(stdout_no, fileno(stdout)); // 让 stdout 重新指向 标准输出流
            close(stdout_no);
            stdout_no = -1;
        }
    }
}

/*
 * 没有清空输出缓存
 */
int main() {

    puts("1");

    redirectToStdout("static/output_16.log"); // file
    puts("2");
    redirectToStdout(NULL); // stdout
    puts("3");

    redirectToStdout("static/output_16.log"); // file
    puts("4");
    redirectToStdout(NULL); // stdout
    puts("end");

    return 0;
}

