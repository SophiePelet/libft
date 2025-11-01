#include "libft.h"
#include <stdlib.h>

int ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
    unsigned int i;
    int diff;

    i = 0;
    diff = 0;
    while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
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
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac != 4)
        return 0;

    printf("Expected : %d\n", strncmp(av[1], av[2], atoi(av[3])));
    printf("Got : %d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
}
*/