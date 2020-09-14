#include "libmx.h"

int mx_strcmp(const char *s1, const char *s2) {
    int i = 0;
    while (s1[i] != '\0' || s2[i] != '\0') {
        if(s1[i] == s2[i]) {
            i++;
        }
        else return (s1[i] - s2[i]);
    }
    return 0;
}

//int main() {
//    const char s1[] = "hello";
//    const char s2[] = "hei";
//    printf("%d", mx_strcmp(s1, s2));
//    return 0;
//}
