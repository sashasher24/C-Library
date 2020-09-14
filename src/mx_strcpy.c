#include "libmx.h"

char *mx_strcpy(char *dst, const char *src) {
    while (*src != '\0') {
        *dst = *src;
        dst++;
        src++;
    }
    return dst;
}

//int main() {
//    char *sour = "phrase to copy";
//    char *dest = (char *)malloc(strlen(sour));
//    mx_strcpy(dest, sour);
//    printf("%s", dest);
//    return 0;
//}
