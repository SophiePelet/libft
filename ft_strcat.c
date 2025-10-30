#include "libft.h"

char    *ft_strcat(char *dest, char *src)
{
    int i;
    int destlen;

    i = 0;
    destlen = ft_strlen(dest);
    while (src[i] != '\0')
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

int main(int ac, char **av)
{
    if (ac != 3)
        return 0;
    
    printf("Expected : %s\n", strcat(av[1], av[2]));
    printf("Got : %s\n", ft_strcat(av[1], av[2]));
}
*/
