#include "libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    char temp[50];
    int i = 0;

    while (nbr != 0) {
        int rem = nbr%16;

        if(rem > 10) {
            temp[i] = 87 + rem;
        }
        else if (rem < 10) {
            temp[i] = 48 + rem;
        }
        nbr = nbr/16;
        i++;
    }
    char *hex = mx_strnew(i-1);

    for (int j = i - 1, l=0; j >= 0; j--, l++) {
        hex[l] = temp[j];

    }
    return hex;
}

//int main()
//{
//// mx_nbr_to_hex(1128);
//    printf("%s", mx_nbr_to_hex(52));
//    return 0;
//}
