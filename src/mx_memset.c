#include "libmx.h"

char *mx_strcpy(char *dst, const char *src);

void *mx_memset(void *b, int c, size_t len) {
    unsigned char cc = c;
    unsigned char *bb = b;

    for(size_t i = 0; i <= len; i++) {
        bb[i] = cc;
    }

    return b;
}

//int main() {
//    char str[50] = "GeeksForGeeks is for programming geeks.";
//    mx_memset(str + 13, '.', 8);
//
//    printf("%s", str);
//    return 0;
//}
