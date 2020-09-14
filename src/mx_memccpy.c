#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
    char *dstn = (char *)dst;
    char *srcn = (char *)src;
    char *rtrn = 0;

    for(int i = 0; n > 0; i++) {
        dstn[i] = srcn[i];
        if(i == c) return dstn + 1;
        n--;
    }
    return rtrn;
}

//int main() {
//    char *msg = "This is the string: not copied";
//
//    char buffer[80];
//
//    mx_memset( buffer, '\0', 80 );
//    mx_memccpy( buffer, msg, ':', 80 );
//
//    printf( "%s\n", buffer );
//    return 0;
//}
