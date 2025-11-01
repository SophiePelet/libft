#include "libft.h"
#include <stdlib.h>

char    *ft_strncpy(char *dest, char *src, size_t n)
{
    size_t i;
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
    size_t n;
    char    dest[50];
    const char    *src;

    n = 2;
    src = "Hello world";
    printf("Expected : %s\n", strncpy(dest, src, n));
    printf("Got : %s\n", ft_strncpy(dest, src, n));
}
*/