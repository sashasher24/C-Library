#include "libmx.h"

void mx_printchar (char c) {
    write(1, &c, 1);
}

//int main() {
//    mx_printchar('k');
//    return 0;
//}
