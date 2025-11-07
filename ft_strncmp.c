/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:54:31 by sopelet           #+#    #+#             */
/*   Updated: 2025/11/07 17:04:44 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		diff;

	i = 0;
	diff = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			return (diff);
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	printf("Expected : %d\n", strncmp(av[1], av[2], 5));
	printf("Got : %d\n", ft_strncmp(av[1], av[2], 5));
}
*/