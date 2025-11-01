#include "libft.h"

char    *ft_strncat(char *dest, const char *src, size_t n)
{
    unsigned int i;
    int destlen;

    i = 0;
    destlen = ft_strlen(dest);
    while (i < n && src[i] != '\0')
    {
        dest[i + destlen] = src[i];
        i++;
    }
    dest[i + destlen] = '\0';
    return dest;
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac != 4)
        return 0;
    
    printf("Expected : %s\n", strncat(av[1], av[2], atoi(av[3])));
    printf("Got : %s\n", ft_strncat(av[1], av[2], atoi(av[3])));
}
*/