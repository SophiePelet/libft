#include "libft.h"
#include <stdlib.h>

char    *ft_strdup(char const *src)
{
    char    *dup;
    int i;
    int srclen;

    i = 0;
    srclen = ft_strlen(src);
    dup = malloc(sizeof(char) * srclen + 1);
    if (!dup)
        return (NULL);
    while (src[i] != '\0')
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return dup;
    
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    const char    *src;

    src = "It works";
    printf("Expected : %s\n", strdup(src));
    printf("Got : %s\n", ft_strdup(src));
}
*/