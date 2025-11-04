/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:21:51 by sopelet           #+#    #+#             */
/*   Updated: 2025/11/03 18:21:58 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*p;
	char	*new;

	i = 0;
	p = NULL;
	new = (char *)s;
	while (new[i] != c)
	{
		if (new[i] == '\0')
			return (NULL);
		i++;
	}
	return (&new[i]);
}

/*
int	main(void)
{
	const char  *str;
    int         chr;

	str = "how are you?";
	chr = 'y';
	printf("%p\n", strchr(str, chr));
	printf("%p\n", ft_strchr(str, chr));
}
*/