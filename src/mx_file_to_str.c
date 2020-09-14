#include "libmx.h"

char *mx_strnew(const int size);

char *mx_file_to_str(const char *file) {
    char ch;
    int size = 0;
    int i = 0;

    int fl = open(file, O_RDONLY);
    if (fl < 0) {
        return NULL;
    }

    while(read(fl, &ch, 1) != '\0') {
        size++;
    }
    if(size < 0) {
        return NULL;
    }

    char *nstr = mx_strnew(size);

    while(read(fl, &ch, 1) != '\0') {
        nstr[i] = ch;
        i++;
    }
//    printf("%s", nstr);
    close(fl);
    return nstr;
}

//int main(int argc, char *argv[]) {
//    if(argc > 1) {
//        printf("%s", mx_file_to_str(argv[1]));
//    }
//    return 0;
//}
