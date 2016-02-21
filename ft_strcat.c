#include "libft.h"

char *ft_strcat(char *dest, const char *src){
    int i = ft_strlen(dest);
    int j = ft_strlen(src);
    int k = 0;
    while (k<j){
        dest[i+k] = src[k];
        k++;
    }
    dest[i+j] = '\0';
    return dest;
}
