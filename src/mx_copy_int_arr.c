#include "libmx.h"

int *mx_copy_int_arr(const int *src, int size) {
    if (src == NULL || size <= 0) {
        return NULL;
    }
    int *arr = (int *)malloc(size);
    
    for(int i = 0; i < size; i++) {
        arr[i] = src[i];
    }
    return arr;
    
}

//int main () {
//    arr1= {1, 2, 3};
//    arr2= NULL;
//    mx_copy_int_arr(arr1, 3); 
//
//    mx_copy_int_arr(arr2, 3); 
//}

