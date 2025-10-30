#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 65 && c <= 90)
    {
        c = c + 32;
    }
    return c;
}

/*
#include <stdio.h>

int main(int ac, char **av)
{
    if (ac != 2)
        return 0;
    
    printf("%c\n", ft_tolower(av[1][0]));
}
*/
