#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
    int i;
    int diff;

    i = 0;
    diff = 0;
    while (s1[i] != '\0' || s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            diff = s1[i] - s2[i];
        i++;
    }
    return diff;
}

/*
#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
    if (ac != 3)
        return 0;

    printf("Expected : %d\n", strcmp(av[1], av[2]));
    printf("Got : %d\n", ft_strcmp(av[1], av[2]));
}
*/
