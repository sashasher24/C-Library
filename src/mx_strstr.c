#include "libmx.h"

int mx_strlen(const char *s);
char *mx_strdup(const char *str);

char *mx_strstr(const char *haystack, const char *needle) {
    int i = 0;
    char *hay = mx_strdup(haystack);
    char *ned = mx_strdup(needle);

    if(needle == NULL) return hay;
    while (hay[i] != '\0') {
        if(hay[i] == ned[0]) {
            int j = 0;
            int ii = i;
            while(needle[j] != '\0') {
                if (hay[ii] == ned[j]) {
                    j++;
                    ii++;
                }
                else break;
            }
            if(j == mx_strlen(ned)) return ned;
            else i++;
        }
        else i++;
    }
    return NULL;
}

//int main() {
//    const char s1[30] = "What are thissist";
//    const char s2[15] = "isk";
//    printf("%d", mx_strstr(s1, s2));
//    return 0;
//}
