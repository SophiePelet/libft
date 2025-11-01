#include "libft.h"

char    *ft_strcpy(char *dest, char const *src)
{
    int i;
    int srclen;

    i = 0;
    srclen = ft_strlen(src);
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
    
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char    dest[50];
    const char    *src;

    src = "It works";
    printf("Expected : %s\n", strcpy(dest, src));
    printf("Got : %s\n", ft_strcpy(dest, src));
}
*/