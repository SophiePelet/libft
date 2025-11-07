/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:30:41 by sopelet           #+#    #+#             */
/*   Updated: 2025/11/07 16:04:21 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char		*ptr;
	unsigned long long	max;

	max = 18446744073709551615ULL;
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	if ((nmemb * size) > max)
		return (NULL);
	ft_memset(ptr, '\0', (nmemb * size));
	return (ptr);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	size_t	elem;
	size_t	siz;
	char	*mem;

	elem = 565132456456;
	siz = 455478744545;
	mem = ft_calloc(elem, siz);
	mem = calloc(elem, siz);
	printf("%p\n", mem);
	printf("%s\n", mem);
}
*/