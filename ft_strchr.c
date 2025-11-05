/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:21:51 by sopelet           #+#    #+#             */
/*   Updated: 2025/11/05 14:52:52 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

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
#include <string.h>
int	main(void)
{
	const char  *str;
    int         chr;

	str = "how are you?";
	chr = 'y';
	printf("%s\n", strchr(str, chr));
	printf("%s\n", ft_strchr(str, chr));
}
*/
