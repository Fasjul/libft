#include <stdlib.h>
void *ft_memmove(void *dest, const void *src, size_t n){
    char tab[n];
    int i = 0;
    char* p1 = (char*) src;
    char* p2 = (char*) dest;
    while (i<n){
        tab[i] = p1[i];
        i++;
    }
    while (i>0){
        i--;
        p2[i]= tab[i];
    }
    return dest;
}
