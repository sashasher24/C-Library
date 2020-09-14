#include "libmx.h"

char **mx_strsplit(const char *s, char c) {

    if(!c){
        return NULL;
    }

    // count num of c elem in *s
    int count_c = 0;
    for(int i = 0; i < mx_strlen(s); i++){
        if(s[i] == c){
            count_c++;
        }
    }

    char **s_new = malloc( (mx_strlen(s) - count_c) * sizeof(char *));

    int k = -1;
    int m = 0;
    int count = 0;
    for(int i = 0; i < mx_strlen(s) -1; i++){

        if(s[i-1] == c && s[i] != c){
            while(s[i] != c){
                count++;
                i++;
            }
            i -= count;
            k++;
            s_new[k] = malloc( count * sizeof(char *));
            m = 0;
            count = 0;
        }
        if(s[i] != c){
            s_new[k][m] = s[i];
            m++;
        }
    }

    mx_strndup(*s_new, k * sizeof(char *));

    return s_new;
}

//int main(){
//    char *s = "**Good bye,**Mr.*Anderson.****";
//    char c = '*';
//    char **new_test = mx_strsplit(s, c);
//    printf("%s", new_test[0]);
////    printf("%c",new_test[0][3]);
////    printf("%c",new_test[1][0]);
////    printf("%c",new_test[2][4]);
//}
