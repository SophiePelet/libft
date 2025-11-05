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

static int	cnt_plus(const char *str)
{
	int	cnt_pls;
	int	i;

	i = 0;
	cnt_pls = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+')
			cnt_pls++;
		i++;
	}
	return (cnt_pls);
}

static int	cnt_minus(const char *str)
{
	int	cnt_mn;
	int	i;

	i = 0;
	cnt_mn = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			cnt_mn++;
		i++;
	}
	return (cnt_mn);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	if (cnt_plus(nptr) > 1 || cnt_minus(nptr) > 1)
		return (0);
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	while (nptr[i] == '+' || nptr[i] == '-')
	{
		i++;
	}
	if (cnt_minus(nptr) == 1)
		sign = -1;
	while (nptr[i] != '\0')
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (res * sign);
}

/*
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	printf("%d\n", ft_atoi(av[1]));
}
*/
