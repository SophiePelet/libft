/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:49:47 by sopelet           #+#    #+#             */
/*   Updated: 2025/11/05 14:49:51 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*source;
	char		*dst;
	size_t		i;

	source = src;
	dst = dest;
	i = 0;
	while (i < n)
	{
		dst[i] = source[i];
		i++;
	}
	return (dst);
}

/*
int	main(void)
{
	const char	*src;
	char		dest[ft_strlen(src)];
	char		*final;
	size_t		n;
	int			abc[3];
	int			def[3];

	src = "Hello World";
	n = 3;
	final = ft_memcpy(dest, src, n);
	printf("%s\n", final);

    def[3] = {1, 2, 3};
    memcpy(abc, def, sizeof(abc));
}
*/
