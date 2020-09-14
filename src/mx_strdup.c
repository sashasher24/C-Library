#include "libmx.h"

char *mx_strcpy(char *dst, const char *src);
int mx_strlen( const char *s);
char *mx_strnew(const int size);

char *mx_strdup(const char *str) {
    char *dup = mx_strnew(mx_strlen(str));
    if( dup == NULL) return NULL;
    mx_strcpy(dup, str);
//    printf("%s", dup);
    return dup;
}

//int main() {
//    const char *str = "hello";
////    printf("%s", mx_strdup(str));
////    printf("%s", dup);
//    return 0;
//}
