#include "libft.h"

char *ft_strncat(char *dest, const char *src, size_t n){
    int i = ft_strlen(dest);
    int j = ft_strlen(src);
    int k = 0;
    while ((k<j)&&(k<n)){
        dest[i+k] = src[k];
        k++;
    }
    while (j<n){
        dest[i+j] = '\0';
        j++;
    }
    dest[i+k] = '\0';
    return dest;

}
