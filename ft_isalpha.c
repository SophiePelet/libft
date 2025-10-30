#include "libft.h"

int ft_isalpha(int  c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return 1;
    return 0;
}

/*
#include <stdio.h>

int main(int ac, char **av)
{
    if (ac != 2)
        return 0;
    
    printf("%d\n", ft_isalpha(av[1][0]));
}
*/

