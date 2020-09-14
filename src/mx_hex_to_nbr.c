#include "libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    long long res = 0;
    long long num;
    int count = 0;
    for (int i = 0; hex[i] != '\0'; i++) {
        count++;
    }

    int pos = count - 1;
    for (int i = 0; hex[i] != '\0'; i++) {
//        pos = count;
        if (hex[i] >= '0' && hex[i] <= '9') {
            num = hex[i] - 48;
        }
        if (hex[i] >= 'A' && hex[i] <= 'F') {
            num = hex[i] - 55;
        }
        if (hex[i] >= 'a' && hex[i] <= 'f') {
            num = hex[i] - 87;
        }
        int poss = pos;
        while (poss != 0) {
            num = num * 16;
            poss--;
        }
        res = res + num;
        pos --;
    }
    return res;
}

//int main() {
//    printf("%lld", mx_hex_to_nbr("ffffffffffff"));
//    return 0;
//}
