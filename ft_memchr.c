#include <stdlib.h>
void *ft_memchr(const void *s, int c, size_t n){
    unsigned char* p1 = (unsigned char*)s;
    unsigned char c1 = (unsigned char) c;
    int i = 0;
    while (i<n){
        if (*p1 == c1){
            return (void*)p1;
        }
        p1++;
        i++;
    }
    return NULL;
}
