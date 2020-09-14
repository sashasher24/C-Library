#include "libmx.h"

char *mx_strncpy(char *dst, const char *src, int len) {
    int i;

    for(i = 0; i < len && src[i] != '\0'; i++) {
        dst[i] = src[i];
    }
    for(; i < len; i++) {
        dst[i] = '\0';
    }
    return dst;
}

//int main() {
//    char dst[8];
//    const char *src = "phras";
//    printf("%s\n", mx_strncpy(dst, src, 8));
//    return 0;
//}
