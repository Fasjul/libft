#include "libft.h"
char *ft_strncpy(char *dest, const char *src, size_t n){
    int i = 0;
    int j = ft_strlen(src);
    while ((i<j)&&(i<n)){
        dest[i] = src[i];
        i++;
    }
    while (j<n){
        dest[j] = '\0';
        j++;
    }
    return dest;
}
