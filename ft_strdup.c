#include <stdlib.h>
#include "libft.h"
char *ft_strdup(const char *s){
    int taille_s = ft_strlen(s);
    char *s1 = (char*)malloc(taille_s*sizeof(char)+1);
    size_t i = 0;
    while (i < taille_s){
        s1[i] = s[i];
        i++;
    }
    s1[taille_s] = '\0';
    return s1;
}
