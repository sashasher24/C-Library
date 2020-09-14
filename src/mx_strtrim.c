#include "libmx.h"

int mx_strlen( const char *s);
bool mx_isspace(char c);


char *mx_strtrim(const char *str) {
    int i = 0;
    char *s = (char *)malloc(mx_strlen(str));

    while(mx_isspace(str[i])) {
        i++;
    }
    if (i > 0) {
        for (int j = 0; j < mx_strlen(str); j++, i++) {
            s[j] = str[i];
        }
    }

    i = mx_strlen(str) - 1;

    while(mx_isspace(str[i])) {                // hhffjjffllffjjdd
        i--;
    }
    if(i < mx_strlen(str) - 1) {
        s[i - 2] = '\0';
    }
    return s;
}

//int main() {
//    const char *str = " \f My name... is Neo  \t\n ";
////    printf("%s\n", str);
//    printf("%s", mx_strtrim(str));
//
//    return 0;
//}
