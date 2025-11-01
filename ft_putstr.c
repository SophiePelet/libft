#include "libft.h"
#include <unistd.h>

void    ft_putstr(const char  *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
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