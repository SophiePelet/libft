/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:02:17 by sopelet           #+#    #+#             */
/*   Updated: 2025/11/06 11:08:10 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int len;
    char    *p;

    len = ft_strlen(s);
    p = (char *)s;
    while (p[len] != c)
    {
        if (len == 0)
            return (NULL);
        len--;
    }
    return (&p[len]);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char  *str;
    int chr;
    
    str = "Bonjour";
    chr = '\0';
    printf("%p\n", strrchr(str, chr));
    printf("%p\n", ft_strrchr(str, chr));
}
*/