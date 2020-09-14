#include "libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
    char *dstn = (char *)dst;
    char *srcn = (char *)src;

    while(n > 0) {
        *dstn = *srcn;
        dstn++;
        srcn++;
        n--;
    }

    return dst;
}

//int main()
//{
//    char source[] = "World";
//    char destination[] = "Hello ";
//    printf("Original String: %s\n", destination);
//
//    mx_memcpy (destination, source, sizeof(source));
//
//    printf("Modified String: %s\n", destination);
//
//    return 0;
//}
