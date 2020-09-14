#include "libmx.h"

int mx_strlen(const char *s);

char *mx_strcat(char *restrict s1, const char *restrict s2) {
    int len1 = mx_strlen(s1);
    int len2 = mx_strlen(s2);
    for(int i = len1; i <= len1 + len2; i++) {
        s1[i] = s2[i - len1];
    }
    return s1;
}

//int main()
//{
//    char str1[] = "This is ";
//    char str2[] = "programiz.com";
//    printf("%s", mx_strcat(str1, str2));
//    return 0;
//}
