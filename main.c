#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
int main()
{
    char tab[900];
    tab[0] = 65;
    tab[1] = 64;
    tab[2] = 63;
    tab[3] = 65;
    tab[4] = 65;
    char tab1[900];
    tab1[0] = 65;
    tab1[1] = 64;
    tab1[2] = 63;
    tab1[3] = 65;
    tab1[4] = 65;
    int j = ft_memcmp((void*)tab, (void*)tab1, 4);
   printf("%d", j);
    return 0;
}
