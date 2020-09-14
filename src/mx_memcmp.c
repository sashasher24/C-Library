#include "libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n){
    int i = 0;
    unsigned char *s1n = (unsigned char *)s1;
    unsigned char *s2n = (unsigned char *)s2;

    if(mx_strlen(s1) == 0 && mx_strlen(s2) == 0) return 0;

    while (n > 0) {
        if(s1n[i] == s2n[i]) {
            i++;
            n--;
        }
        else return (s1n[i] - s2n[i]);
    }
    return 0;
}

//int main () {
//    char str1[15];
//    char str2[15];
//    int ret;
//
//    memcpy(str1, "abcdef", 6);
//    memcpy(str2, "alCDF", 6);
//
////    ret =
//
//    printf("%d", memcmp(str1, str2, 5));
//
////    if(ret > 0) {
////        printf("str2 is less than str1");
////    } else if(ret < 0) {
////        printf("str1 is less than str2");
////    } else {
////        printf("str1 is equal to str2");
////    }
//
//    return(0);
//}
