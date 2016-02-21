#include <stdlib.h>

void *ft_memset(void *s, int c, size_t n){
    void *p = s;
    int i = 0;
    while (i<n){
       *(char*)s = (unsigned char)c;
       s++;
       i++;
    }
    return p;
}
