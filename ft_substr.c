/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:47:23 by sopelet           #+#    #+#             */
/*   Updated: 2025/11/07 17:29:29 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	len_s;
	char			*sub_s;
	size_t			i;

	i = 0;
	len_s = ft_strlen(s);
	sub_s = malloc(sizeof(char) * (len + 1));
	if (!sub_s)
		return (NULL);
	if (start > len_s)
		return (NULL);//or return something else?
	if ((start + len) > len_s)
        len = ft_strlen(s + start);
	while (i < len)
	{
		sub_s[i] = s[start + i];
		i++;
	}
	return (sub_s);
}

/*
int	main(void)
{
	const char *str;
	unsigned int start;
	size_t lenght;

	str = "hello, how are you?";
	start = 10;
	lenght = 15;
	printf("%s\n", ft_substr(str, start, lenght));
}
*/