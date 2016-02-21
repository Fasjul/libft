#include <stdlib.h>
int ft_memcmp(const void *s1, const void *s2, size_t n){
    int i = 0;
    unsigned char* p1 =(unsigned char*) s1;
    unsigned char* p2 =(unsigned char*) s2;

    while (i < n){
        if (p1[i] != p2[i]){
            return (p1[i] - p2[i]);
        }
        i++;
    }

   /* while (i < n){
        if (*p1 != *p2]){
            return (*p1 - *p2);
        }
        i++;
        p1++;
        p2++;
    } */
    return 0;
}
