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

void	*memcpy(void *dest, const void *src, size_t n)
{
	char *source;
	char *dst;
    int i;

	source = src;
	dst = dest;
    i = 0;
	while (n > 0 && source[i] != '\0')
	{
		dst[i] = source[i];
        n--;
        i++;
	}
    return (dst);
}