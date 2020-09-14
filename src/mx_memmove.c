#include "libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
    char *dest = (char *)dst;
    const char *sour = (const char *)src;

    while(len > 0) {
        *dest = *sour;
        dest++;
        sour++;
        len--;
    }
    return dst;
}

//int main (void)
//{
//    // Исходный массив данных
//    unsigned char src[10]="1234567890";
//
//    // Вывод массива src на консоль
//    printf ("src old: %s\n",src);
//
//    // Копируем 3 байт
//    mx_memmove (&src[4], &src[3], 3);
//
//    // Вывод массива src на консоль
//    printf ("src new: %s\n",src);
//
//    return 0;
//}
//int main () {
//    char dest[] = "oldstring";
//    const char src[]  = "newstring";
//
//    printf("Before memmove dest = %s, src = %s\n", dest, src);
//    mx_memmove(dest, src, 9);
//    printf("After memmove dest = %s, src = %s\n", dest, src);
//
//    return(0);
//}

//int main()
//{
//    //declaring and initializing character array
//    char str1[ ] = "Learn C from trytoprogram.com";
//    char str2[ ] = "trytoprogram.com";
//    char str3[ ] = "Hello World !!!";
//
//    //displaying str1, str2 and str3
//    printf("str1 = %s\n", str1);
//    printf("str2 = %s\n", str2);
//    printf("str3 = %s\n", str3);
//
//    mx_memmove(str1, str2, 12);
//    mx_memmove(str3, &str3[6], 5);
//
//    printf("\nAfter using memmove,\n"
//           "\nstr1 = %s\n"
//           "\nstr3 = %s\n", str1, str3);
//
//    return 0;
//}
