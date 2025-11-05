/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:49:36 by sopelet           #+#    #+#             */
/*   Updated: 2025/11/05 14:49:37 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*cmp1;
	const char	*cmp2;
	int			diff;
	size_t		i;

	cmp1 = s1;
	cmp2 = s2;
	diff = 0;
	i = 0;
	if (cmp1 == cmp2)
		return (diff);
	while (i < n)
	{
		if (cmp1[i] != cmp2[i])
			diff = (cmp1[i] - cmp2[i]);
		i++;
	}
	return (diff);
}

/*
int	main(void)
{
	const char	*str1;
	const char	*str2;
	int			a[] = {0, 6, 0, 0, 1};
	int			b[] = {0, 0, 0, 0, 1};

	str1 = "test";
	str2 = "teot";
	printf("Expected : %d\n", memcmp(str1, str2, ft_strlen(str1)));
	printf("Got : %d\n", ft_memcmp(str1, str2, ft_strlen(str1)));
	printf("Expected : %d\n", memcmp(a, b, sizeof(a)));
	printf("Got : %d\n", ft_memcmp(a, b, sizeof(a)));
}
*/
