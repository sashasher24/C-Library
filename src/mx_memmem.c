#include "libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
    int i = 0;
    int l;
    const char *bign = (const char *)big;
    const char *small = (const char *)little;
    
    if (big_len < little_len || little_len == 0 || big_len == 0) return NULL;

    while (big_len > 0) {
        if(bign[i] == small[0]) {
            l = little_len;
            int j = 0;
            int ii = i;
            while(l > 0) {
                if (bign[ii] == small[j]) {
                    j++;
                    ii++;
                    l--;
                }
                else break;
            }
            if(j == mx_strlen(small)) return (void *)small;
            else i++;
        }
        else {
            i++;
            big_len--;
        }
    }
    return NULL;
}

//int main() {
//    const char s1[30] = "What are thissist";
//    const char s2[15] = "isk";
//    printf("%s", mx_memmem(s1, 17, s2, 3));
//    return 0;
//}
