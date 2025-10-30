#include "libft.h"
#include <stdio.h>

void bzero(void *s, size_t n)
{
    char    *c = s;
    size_t i;

    i = 0;
    while (i < n)
    {
        c[i] = '\0';
        i++;
    }
}

/*
#include <stdlib.h>
int main (void)
{
    char    *mystr;
    char    *dup;
    size_t  nb;

    mystr = "Hello";
    dup = ft_strdup(mystr);
    nb = ft_strlen(mystr);
    bzero(dup, nb);
    printf("%s\n", dup);
}
*/

