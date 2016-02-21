#include <stdlib.h>
void *ft_memcpy(void *dest, const void *src, size_t n){
    int i = 0;
    char* p1 = (char*) src;
    char* p2 = (char*) dest;
    while (i<n){
        p2[i] = p1[i];
        i++;
    }
    return dest;
}
