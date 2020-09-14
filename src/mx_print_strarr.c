#include "libmx.h"

void mx_printstr(const char *s);
void mx_printchar (char c);
int mx_strlen( const char *s);

void mx_print_strarr(char **arr, const char *delim) {
    if (arr && delim) {
        for(int i = 0; arr[i] != '\0'; i++) {
            if (arr[i + 1] == '\0') {
                mx_printstr(arr[i]);
            } else {
                mx_printstr(arr[i]);
                mx_printchar((char)delim);
            }
        }
        mx_printchar('\n');
    }
}

//int main() {
//    char *arrr[] = {"hello", "hi", "bye", '\0'};
//    const char *delim = '/';
//    mx_print_strarr(arrr, delim);
//    return 0;
//}
