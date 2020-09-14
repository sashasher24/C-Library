#include "libmx.h"

int mx_strlen( const char *s) {
    int i = 0;
    while (*s != '\0') {
        i++;
        s++;
    }
    return i;
}
//
//int main() {
//    const char s[] = "ajjjskd";
//    printf("%d", mx_strlen(s));
//    printf("%s", s);
//    return 0;
//}
