#include "libmx.h"

char *mx_strtrim(const char *str);
bool mx_isspace(char c);
int mx_strlen( const char *s);

char *mx_del_extra_spaces(const char *str) {
    int j;
    int ii;

    char *strn = mx_strtrim(str);

    for(int i = 0; strn[i] != '\0'; i++) {
        ii = i;
        j = 0;
        while (mx_isspace(strn[ii])) {
            ii++;
            j++;
        }
        if(j > 1) {
            for (int m = i; strn[m] != '\0'; m++) {
                strn[m ] = strn[m + j - 1];
            }
        }
    }
    if(strn[mx_strlen(strn) - 1] == ' ') {
        strn[mx_strlen(strn) - 1] = '\0';
    }

    return strn;
}

//int main() {
//    const char *name = " \f  My name...    is  \r Neo   \t\n ";
////    printf("%s\n", name);
//    printf("%s", mx_del_extra_spaces(name));
//    return 0;
//}
