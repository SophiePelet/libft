#include "libft.h"

void    ft_putstr(char  *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

/*
int main(int ac, char **av)
{
    if (ac != 2)
        return 0;
    ft_putstr(av[1]);
}
*/
