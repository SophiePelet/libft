#include "libft.h"

int ft_isalnum(int c)
{
    if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
        return 1;
    return 0;
}

/*
#include <stdio.h>

int main(int ac, char **av)
{
    if (ac != 2)
        return 0;
    
    printf("%d\n", ft_isalnum(av[1][0]));
}
*/
