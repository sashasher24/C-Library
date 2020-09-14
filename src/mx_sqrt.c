#include "libmx.h"

int mx_sqrt(int x) {
    if( x > 0) {
        if( x == 1) return 1;
        for(int i = 1; i <= 46340; ++i) {
            if (i*i == x) return i;
        }
    }
    return 0;
}

//int main() {
//    printf("%d", mx_sqrt(-5));
//    return 0;
//}
