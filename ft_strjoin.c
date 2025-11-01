#include "libft.h"
#include <stdlib.h>

static size_t ft_strlens(char const  *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t  len_s1;
    size_t  len_s2;
    char    *new;
    int i;
    int j;

    i = 0;
    j = 0;
    len_s1 = ft_strlens(s1);
    len_s2 = ft_strlens(s2);
    new = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
    if (!new)
        return (NULL);
    while (s1[i] != '\0')
    {
        new[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0')
    {
        new[i + j] = s2[j];
        j++;
    }
    new[i + j] = '\0';
    return new;
}

/*
#include <stdio.h>
int main(void)
{
    const char  *s1;
    const char  *s2;

    s1 = "Hello";
    s2 = "World";
    printf("%s\n", ft_strjoin(s1, s2));
}
*/