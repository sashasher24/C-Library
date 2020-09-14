#include "libmx.h"

size_t min(size_t old, size_t new) {
    if(old < new) return old;
    else return new;
}

void *mx_realloc(void *ptr, size_t size) {
    size_t os, cpsize;
    void *nstr;

    if(ptr == NULL) return malloc(size);
    if(size == 0 && ptr) {
        free(ptr);
        return NULL;
    }

    os = malloc_size(ptr);  //?(?(?(?(?(

    if (os > size) {
        size = os;
    }
    cpsize = min(os, size);
    nstr = (void *)malloc(size);
    if (!nstr) return NULL;
    nstr = mx_memcpy(nstr, ptr, cpsize);
    free(ptr);

    return nstr;
}
