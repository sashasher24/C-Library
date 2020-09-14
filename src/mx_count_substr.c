#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    int count = 0;

    if (sub == NULL) return 0;
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
            if(j == mx_strlen(sub)) {
                count++;
                i++;
            }
        }
        else i++;
    }
    return count;
}

//int main() {
//    const char s1[30] = "yo, yo, yo, Neo";
//    const char s2[15] = "Neo";
//    printf("%d\n", mx_count_substr(s1, s2));
//
//    return 0;
//}
