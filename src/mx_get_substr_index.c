#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
    if (str == NULL || sub == NULL) return -2;
    int i = 0;
    while (str[i] != '\0') {
        if(str[i] == sub[0]) {
            int j = 0;
            int ii = i;
            while(sub[j] != '\0') {
                if (str[ii] == sub[j]) {
                    j++;
                    ii++;
                }
                else break;
            }
            if(j == mx_strlen(sub)) return i;
            else i++;
        }
        else i++;
    }
    return -1;
}

//int main() {
//    const char s1[30] = "What are thissist";
//    const char s2[15] = "ist";
//    printf("%d\n", mx_get_substr_index(s1, s2));
//
//    return 0;
//}
