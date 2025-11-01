#include "libft.h"
#include <unistd.h>

static int ft_strlens(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

void    ft_putstr_fd(const char *s, int fd)
{
    size_t  s_len;
    int i;

    i = 0;
    s_len = ft_strlens(s);
    write(fd, &s[i], s_len);
}

/*
int main(void)
{
    ft_putstr_fd("This goes to standard output.\n", 1);
    ft_putstr_fd("This is an error message.\n", 2);
}
*/