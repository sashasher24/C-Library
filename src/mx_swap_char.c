#include "libmx.h"

void mx_swap_char(char *s1, char *s2) {
    char str = *s2;
    *s2 = *s1;
    *s1 = str;
//    printf("%c", mx_swap_char(&str[0], &str[1]));
//    printf("%c", mx_swap_char(&str[1], &str[2]));
}
