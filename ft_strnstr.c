/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:54:59 by sopelet           #+#    #+#             */
/*   Updated: 2025/11/05 14:55:00 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char *)big);
	while (i < (len - 1) && big[i] != '\0')
	{
		j = 0;
		if (big[i] == little[j])
		{
			while ((i + j) < len && big[i + j] == little[j]
				&& little[j] != '\0')
			{
				j++;
			}
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

/*
int	main(int ac, char **av)
{
	size_t len;

	len = 7;
	if (ac != 3)
		return (0);
	printf("%s\n", strnstr(av[1], av[2], len));
	printf("%s\n", ft_strnstr(av[1], av[2], len));
}
*/
