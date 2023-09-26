#include <stdio.h>
#include <time.h>

#include <sys/timeb.h>

//#ifdef __unix__
//#include <>
//#endif

int main() {

    // 从 Epoch 开始计算的时间
    // 绝对时间，与时区没有关系
    time_t t;

    // 进程所消耗的处理器的时间
    // 与时区没有关系
    clock_t c;

    // 时间日期
    // 与时区有关系
    struct tm;

    // C11, nano seconds
    struct timespec;

    // micro seconds
    struct timeval;

    // millis seconds
    struct timeb;

    return 0;
}
