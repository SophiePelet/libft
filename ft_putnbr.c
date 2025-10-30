#include "libft.h"

void ft_putnbr(int   num)
{
    if (num < 0)
    {
        if (num = -2147483648)
        {
            ft_putstr("-2147483648");
            return;
        }
        num = -num;    
    }
    if (num > 10)
    {
        ft_putnbr(num / 10);
    }
    ft_putchar(num % 10 + '0');
}

/*
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac != 2)
        return 0;
    
    ft_putnbr(atoi(av[1]));
}
*/
