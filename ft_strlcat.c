#include <stdlib.h>
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize){
    int i = ft_strlen(dst);
    int j = ft_strlen(src);
    int k = 0;

    while ((i+k < dstsize)&&(k<j)){
    dst[i+k] = src[k];
    k++;
    }
    if (i < dstsize) {
    dst [dstsize] = '\0';
    }
    return i+j;
}
