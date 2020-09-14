#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub);
int mx_strlen( const char *s);
char *mx_strdup(const char *str);
int mx_count_substr(const char *str, const char *sub);

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    int len;
    int j;
    char *nstr;

    if(!sub || !str || !replace) return NULL;

    nstr = mx_strdup(str);

    int count = mx_count_substr(str, sub);

    while(count != 0) {
        int i = mx_get_substr_index(nstr, sub);
        j = 0;
        len = mx_strlen(sub);

        if (i >= 0) {
            for (; len != 0; i++, j++) {
                nstr[i] = replace[j];
                len--;
            }
        }
        count --;
    }

    return nstr;
}

//int main() {
//    printf("%s", mx_replace_substr("McDonalds", "alds", "uts"));
////    printf("%s", mx_replace_substr("Ururu turu", "ru", "ta"));
//    return 0;
//}
