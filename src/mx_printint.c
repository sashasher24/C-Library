#include "libmx.h"

void mx_printint(int n) {

    if(n < 0) {
        mx_printchar('-');
        n = -n;
    }

    if (n > 10) {
        mx_printint(n/10);
    }

    mx_printchar(n % 10 + '0');

}
//
//int main() {
//    mx_printint(1245);
//    return 0;
//}
