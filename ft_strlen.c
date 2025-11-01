#include "libft.h"
#include <stdlib.h>

size_t ft_strlen(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

/*
#include <stdio.h>

int main(void)
{
    const char    *mystr;

    mystr = "Hello World";
    printf("%d\n", ft_strlen(mystr));
}
*/
