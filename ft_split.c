/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:42:43 by sopelet           #+#    #+#             */
/*   Updated: 2025/11/11 16:51:06 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cnt_words(char *str, char sep)
{
	int	trigger;
	int	cnt;

	trigger = 0;
	cnt = 0;
	while (*str != '\0')
	{
		if (*str != sep && trigger == 0)
		{
			trigger = 1;
			cnt++;
		}
		if (*str == sep)
			trigger = 0;
		str++;
	}
	return (cnt);
}



#include <stdio.h>

int	main(void)
{
	char *str;
	char sep;

	str = "Hello,   how   , are you, ";
	sep = ',';
	printf("%d\n", cnt_words(str, sep));
}