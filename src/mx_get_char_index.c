#include "libmx.h"

int mx_get_char_index(const char *str, char c) {
    if(str == NULL) return -2;
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == c) return i;
    }
    return -1;
}

//int main() {
////    printf("%d\n", mx_get_char_index("string", 'r'));
//    const char str;
//    printf("%d\n", mx_get_char_index(str, 'r'));
////    printf("%d\n", mx_get_char_index("string", 'g'));
////    printf("%d\n", mx_get_char_index("string", 'o'));
//
//    return 0;
//}
