#include "libmx.h"

double mx_pow(double n, unsigned int pow) {
    double m = 1;
    if (pow == 0) return 1;
    while (pow != 0) {
        m = m*n;
        pow--;
    }
    return m;
}

//int main() {
//    printf("%f", mx_pow(225,25));
//    printf("%c", '\n');
//    printf("%f", pow(225,25));
//    return 0;
//}
