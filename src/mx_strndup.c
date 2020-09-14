#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    char *dup = mx_strnew(mx_strlen(s1));
    size_t i;

    if( dup == NULL) return NULL;
    for(i = 0; i < n &&  s1[i] != '\0'; i++) {
        dup[i] = s1[i];
    }
    dup[i] = '\0';
    return dup;
}

//int main() {
//    const char *str = "hello";
//    printf("%s", mx_strndup(str, 3));
////    printf("%s", dup);
//    return 0;
//}
