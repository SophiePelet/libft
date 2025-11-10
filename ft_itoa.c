/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:50:12 by sopelet           #+#    #+#             */
/*   Updated: 2025/11/10 14:01:52 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	int_len(int num)
{
	size_t	i;

	i = 0;
	if (num == 0)
		i++;
	if (num < 0)
	{
		i += 1;
		num = -num;
	}
	while (num != 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*array;
	int		nbr;
	size_t	len;

	i = 0;
	len = int_len(n);
	nbr = n;
	array = ft_calloc((len + 1), sizeof(char));
	if (!array)
		return (NULL);
	if (nbr == 0)
		array[0] = '0';
	if (nbr < 0)
		nbr = -nbr;
	i = len - 1;
	while (nbr != 0)
	{
		array[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i--;
	}
	if (n < 0)
		array[0] = '-';
	return (array);
}

/*
#include <stdio.h>

int	main(void)
{
	int n;

	n = -5456452;
	printf("%s\n", ft_itoa(n));
}
*/