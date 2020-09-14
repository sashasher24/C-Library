#include "libmx.h"

bool mx_isspace(char c) {
    if(c == '\n' || c == '\r' || c == ' ' || c == '\t' || c == '\f' || c == '\v') {
        return 1;
    }
    else return 0;
}
