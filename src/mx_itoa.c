#include "libmx.h"

char *mx_strnew(const int size);

int lenHelper(int x) {

    int ct = 0;
    if(x == 0){
        ct = 1;
    }
    while( x >= 1 || x <= -1){
        x /= 10;
        ct++;
    }
    return ct;
}

char *mx_itoa(int number){

    int num = number;
    int *arr = (int*) malloc (lenHelper(number) * sizeof(int));

    for(int i = 0; i < lenHelper(number); i++){
        int temp = num%10;
        if(temp < 0){
            temp *= -1;
        }
        arr[i] = temp;
        num /= 10;
    }

    // if the number < 0 then the first element of the string should be '-'
    char *string_num;
    int count = 0;

    if(number < 0){
        string_num = mx_strnew(lenHelper(number) + 1);
        string_num[0] = '-';
        count++;

    }else {
        string_num = mx_strnew(lenHelper(number));
    }

    for (int i = lenHelper(number) - 1; i >= 0; i--) {
        string_num[count] = '0' + arr[i];
        count++;
    }

    return string_num;
}

//int main(){
//
//    int num = 5637834;
//
//    mx_itoa(num);
//    char *test = mx_itoa(num);
//    printf("%c",test[0]);
//    printf("%c",test[1]);
//    printf("%c",test[2]);
//    printf("%c",test[3]);
//    printf("%c",test[4]);
//    printf("%c",test[5]);
//    printf("%c",test[6]);
//    printf("%c",test[7]);
//
//    return 0;
//
//}
