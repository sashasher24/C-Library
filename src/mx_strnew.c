#include "libmx.h"

char *mx_strnew(const int size) {
    if(size <= 0) return NULL;
    char *ns = (char *)malloc(size + 1);
    if(!ns) return NULL;
    ns[size] = '\0';
    for (int i = 0; i <= size; i++) {
        ns[i] = '\0';
    }
    return ns;
}

//int main() {
//
//    return 0;
//}
