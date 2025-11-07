/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:18:39 by sopelet           #+#    #+#             */
/*   Updated: 2025/11/07 13:23:54 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	dst_len;

	i = 0;
	dst_len = ft_strlen(dst);
	if (siz == 0)
		return (dst_len);
	while (src[i] != '\0' && i < (siz - 1))
	{
		dst[i + dst_len] = src[i];
		i++;
	}
	dst[i + dst_len] = '\0';
	return (dst_len);
}

/*
int	main(int ac, char **av)
{
	size_t len;

	if (ac != 3)
		return (0);
	len = 3;
	printf("%zu\n", ft_strlcat(av[1], av[2], len));
	printf("%s\n", av[1]);
}
*/