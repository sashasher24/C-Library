#include "libmx.h"

int mx_factorial_iter(int n) {
    int res = 1;
    if (n > 0 ) {
        for (int i = 2; i <= n; i++) {
            res = res * i;
            if(res > 2147483647) {
                return 0;
            }
        }
    }
    else res = 0;

    return res;
}


//int main()
//{
//    printf("%d\n", mx_factorial_iter(8));
//    // printf("%d\n", mx_factorial_rec(0));
//    // printf("%d\n", mx_factorial_rec(1));
//    // printf("%d\n", mx_factorial_rec(5));
//    // printf("%d\n", mx_factorial_rec(1));
//    // printf("%d\n", mx_factorial_rec(2));
//    return 0;
//}
