#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
    char *sn = (char *)s;

    while (n > 0) {
        if(*sn == c) return sn;
        sn++;
        n--;
    }
    return NULL;
}

//int main () {
//    const char str[] = "http://www.tutorialspoint.com";
//    const char ch = '.';
//    char *ret;
//
//    ret = mx_memchr(str, ch, strlen(str));
//
//    printf("String after |%c| is - |%s|\n", ch, ret);
//
//    return(0);
//}
