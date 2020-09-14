#include "libmx.h"
  
int mx_atoi(const char *str) {
    int a = 0;
    int n = 0;
    int min = 1;
    if(str[a] == '-'){
            min = -1;
            a++;
    }
    while(mx_isdigit(str[a]) && !mx_isspace(str[a])){
            n = n * 10 + str[a] - 48;
            a++;
    }
    return n * min;
}
