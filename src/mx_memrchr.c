#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    const char *sn = (const char *)s;
    int size = mx_strlen(sn);
    int i = size - 1;

    while (n > 0) {
        if(sn[i] == c) {
            sn += i;
            return (void *)sn;
        }
        i--;
        n--;
    }
    return NULL;
}

//int main () {
//    const char str[] = "http://www.tutorialspoint.com";
//    const char ch = '.';
//    char *ret;
//
//    ret = mx_memrchr(str, ch, strlen(str));
//
//    printf("String after |%c| is - |%s|\n", ch, ret);
//
//    printf("%s", mx_memrchr("Trinity", 'i', 7));
//
//    return(0);
//}
