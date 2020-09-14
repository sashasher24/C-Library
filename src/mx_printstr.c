#include "libmx.h"

void mx_printstr(const char *s) {
    write(1, s, mx_strlen(s));
}

//int main() {
//    const char str[6] = {1, 2, 4, 5, 7};
////    mx_printstr("adddddsa");
//    mx_printstr(str);
//    return 0;
//}
