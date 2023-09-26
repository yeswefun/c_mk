// Created by lin on 2023/9/8.
#include <stdio.h>

#if defined(_WIN32)
#include <sys/timeb.h>
#elif defined(__unix__)
#include <sys/time.h>
#endif

typedef long long long_time_t;

long_time_t time_in_millis(void) {
#if defined(_WIN32) // MinGW, Windows
    struct timeb time_buffer;
    ftime(&time_buffer);
    return time_buffer.time * 1000LL + time_buffer.millitm;
#elif defined(__unix__)
    struct timeval time_value;
    gettimeofday(&time_value, NULL);
    return time_value.tv_sec * 1000LL + time_value.tv_usec / 1000;
#elif defined(__STDC__) && __STDC_VERSION__ == 201112L
    struct timespec timespec_value;
    timespec_get(&timespec_value, TIME_UTC);
    return timespec_value.tv_sec * 1000LL + timespec_value.tv_nsec / 1000000;
#else
    time_t ts = time(NULL);
    return ts;
#endif
}

int main() {
    long_time_t ts = time_in_millis();

    printf("%lld\n", ts);

    return 0;
}

