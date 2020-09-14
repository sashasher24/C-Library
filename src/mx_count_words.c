#include "libmx.h"

int mx_count_words(const char *str, char c){

    if(str == NULL){
        return -1;

    }

    int count = 0;

    for(int i = 0; i < mx_strlen(str); i++) {

        if(str[i] == c && str[i+1] != c && i != 0 && i != mx_strlen(str)-1){
            count++;
        }

    }

    if((str[0] == c || str [mx_strlen(str) - 1] == c) && str[1] != c && mx_strlen(str) > 1){
        count++;
    }

    if(str[0] != c && str [mx_strlen(str) - 1] != c && count > 0){
        count++;
    }

    return count;

}

//int main(){
//
//    char *str = "***";
//    printf("%d",mx_count_words(str,'*'));
//
//}
