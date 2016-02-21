#include "libft.h"
char *ft_strcpy(char *dest, const char *src){
    int i = 0;
    int j = ft_strlen(src);
    while (i<j){
        dest[i] = src[i];
        i++;
    }
    dest[j] = '\0';
    return dest;
}
