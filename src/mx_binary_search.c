#include "libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count){

    int first = 0;
    int last = size - 1;
    int middle = (first + last)/2;

    while (first <= last) {
        if(mx_strcmp(arr[middle], s) < 0){
            first = middle + 1;
            *count += 1;
        }
        else if(mx_strcmp(arr[middle], s) == 0){
            *count += 1;
            return middle;
        }
        else{
            last = middle - 1;
            *count += 1;
        }
        middle = (first + last)/2;
    }
    *count = 0;
    return -1;
}

//int main(){
//    char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
//    int count = 0;
//    printf("%d",mx_binary_search(arr,6,"abcd", &count));
//    mx_binary_search(arr, 6, "Abcd", &count);
//    return 0;
//}
