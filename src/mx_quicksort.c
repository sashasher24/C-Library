#include "libmx.h"

int count = 0;

int partition(char **arr, int left, int right) {

    int l, r, loc,flag;
    char *temp;
    loc = l = left;
    r = right;
    flag = 0;

    while(flag != 1){
        while ((mx_strlen(arr[loc]) <= mx_strlen(arr[r])) &&  (loc!= r)) {
            r--;
        }
        if(loc == r) {
            flag = 1;
        }
        else if(mx_strlen(arr[loc]) > mx_strlen(arr[r])){
            temp = arr[loc];
            arr[loc] = arr[r];
            arr[r] = temp;
            loc = r;
            count++;
        }
        if(flag != 1){
            while ((mx_strlen(arr[loc]) >= mx_strlen(arr[l])) && (loc!= l)){
                l++;
            }
            if(loc == l){
                flag = 1;
            }
            else if(mx_strlen(arr[loc]) < mx_strlen(arr[l])){
                temp = arr[loc];
                arr[loc] = arr[l];
                arr[l] = temp;
                loc = l;
                count++;

            }
        }
    }
    return loc;
}

int mx_quicksort(char **arr, int left, int right){

    int loc;
    if(left < right){

        loc = partition(arr,left,right);
        mx_quicksort(arr,left,loc-1);
        mx_quicksort(arr,loc+1,right);
    }
    return count;
}


//int main(){
//
//    char *arr[] = {"DMC", "Clint Eastwood", "Dr Brown", "Einstein", "Jessica", "Biff Tannen"};
//    printf("%d",mx_quicksort(arr,0,5));
//    printf("%c",'\n');
//    printf("%s",arr[0]);
//    printf("%c",'\n');
//    printf("%s",arr[1]);
//    printf("%c",'\n');
//    printf("%s",arr[2]);
//    printf("%c",'\n');
//    printf("%s",arr[3]);
//    printf("%c",'\n');
//    printf("%s",arr[4]);
//    printf("%c",'\n');
//    printf("%s",arr[5]);
//
//}
