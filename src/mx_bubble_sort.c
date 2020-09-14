#include "libmx.h"

int mx_bubble_sort (char **arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size-i-1; j++) {
            if (mx_strcmp(arr[j], arr[j+1]) > 0) {
                char *l = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = l;
                count += 1;
            }
        }
    }
//    printf("%d", count);
    return count;
}

//int main() {
////    char *arr[4] = {"abc", "xyz", "ghi", "def"};
//    char *arr[3] = {"abc", "acb", "a"};
//    mx_bubble_sort(arr, 3);
//    for (int i = 0; i < 3; i++) {
//        printf("%s", (char *) arr[i]);
//        printf(", ");
//    }
//    return 0;
//}
