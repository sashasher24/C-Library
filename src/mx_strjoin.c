#include "libmx.h"

char *mx_strjoin(char const *s1, char const *s2) {
    char *new;
    const int len = mx_strlen(s1)+mx_strlen(s2);

    if(!s1) {
        new = mx_strnew(mx_strlen(s2));
        new = mx_strcat(new, s2);
    }
    else if(!s2) {
        new = mx_strnew(mx_strlen(s1));
        new = mx_strcat(new, s1);
    } else {
        char cs1[len];
//        new = mx_strnew(len);
        mx_strcat(cs1,s1);
        mx_strcat(cs1, s2);
        new = mx_strdup(cs1);
    }
    return new;
}

//int main()
//{
//    // char str1[]= "this";
//    // char str2[]= "dodge ";
//    // char str3= NULL;
//    const char str1[] = "This is ";
//    const char str2[] = "programiz.com";
//    const char str3;
//    printf("%s", mx_strjoin(str1, str2));
//    return 0;
//}
