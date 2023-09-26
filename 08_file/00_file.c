#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {

    FILE *fp = fopen("static/poet2.txt", "r");
    if (!fp) {
        perror("error");
        puts(strerror(errno));
        return errno;
    }

    printf("open file\n");

    fclose(fp);

    return 0;
}
