#include "libmx.h"

int mx_strlen(const char *s);

void mx_str_reverse(char *s) {
    for(int i = 0; i < mx_strlen(s)/2; i++) {
        char temp = s[mx_strlen(s) - 1 - i];
        s[mx_strlen(s) - 1 - i] = s[i];
        s[i] = temp;
    }
}

//int main () {
//    char s[] = "hello its me";
//    mx_str_reverse(s);
//
//    printf("%s\n", s);
//    return 0;
//}
