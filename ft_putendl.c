#include "libft.h"
#include <unistd.h>

static void ft_putstr2(const char *str)
{
        int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

void    ft_putendl(char const *s)
{
    ft_putstr2(s);
    ft_putchar('\n');
}

/*
int main(void)
{
    const char  *str;

    str = "Hola :3";
    ft_putendl(str);
}
*/