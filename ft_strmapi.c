/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:08:05 by sopelet           #+#    #+#             */
/*   Updated: 2025/11/10 15:06:52 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		len;
	int		i;

	len = ft_strlen(s);
	i = 0;
	new = ft_calloc(len, sizeof(char));
	if (!new)
		return (NULL);
	while (s[i] != '\0')
	{
		new[i] = (*f)(i, s[i]);
		i++;
	}
	return (new);
}

/*
char    map_char_by_index(unsigned int i, char c)
{
    return(c + (char)i);
}

int main(void)
{
    char    *str;
    char    *res;

    str = "abcde";
    res = ft_strmapi(str, map_char_by_index);
    printf("%s\n", res);
}
*/