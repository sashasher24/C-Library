#include "libmx.h"

void mx_sort_arr_int(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int l = arr[i];
                arr[i] = arr[j];
                arr[j] = l;
            }
        }
    }
}

//int main() {
//    int arr[10] = {3, 55, -11, 1, 0, 4, 22};
//    mx_sort_arr_int(arr, 7);
//    for (int i = 0; i < 7; i++) {
//        printf("%d", arr[i]);
//        printf(", ");
//    }
//    return 0;
//}
