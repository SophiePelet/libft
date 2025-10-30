#include "libft.h"

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    int srclen;

    i = 0;
    srclen = ft_strlen(src);
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
    
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    unsigned int n;
    char    dest[50];
    char    *src;

    n = 2;
    src = "Hello world";
    printf("Expected : %s\n", strncpy(dest, src, n));
    printf("Got : %s\n", ft_strncpy(dest, src, n));
}
*/