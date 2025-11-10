/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:47:23 by sopelet           #+#    #+#             */
/*   Updated: 2025/11/10 11:29:02 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	len_s;
	char			*sub_s;
	size_t			i;

	i = 0;
	len_s = ft_strlen(s);
	sub_s = ft_calloc(sizeof(char), len + 1); //calloc instead of malloc so we don't have to think about null terminating the string
	if (!sub_s)
		return (NULL);
	if (start > len_s)
		return (NULL);//or an empty string with ft_strdup?
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