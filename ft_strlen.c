#include "libft.h"

int ft_strlen(char  *str)
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
    char    *mystr;

    mystr = "Hello World";
    printf("%d\n", ft_strlen(mystr));
}
*/
