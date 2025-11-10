/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:27:07 by sopelet           #+#    #+#             */
/*   Updated: 2025/11/10 16:51:21 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	nb_words(char *str, char sep)
{
	int	i;
	int	cnt;
	int	trigger;

	i = 0;
	cnt = 0;
	trigger = 0;
	while (str[i] != '\0')
	{
		if (str[i] != sep && trigger == 0)
		{
			trigger = 1;
			cnt++;
		}
		else if (str[i] == sep)
		{
			trigger = 0;
		}
		i++;
	}
	return (cnt);
}

static char	**allo_mem(char *str, char sep)
{
	char	**array;

	array = ft_calloc((nb_words(str, sep) + 1), sizeof(char *));
	if (!array)
		return (NULL);
	return (array);
}

static void	*free_all(char **array, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char    **split_str;
	int start;
	int end;
	int wd_len;
	char *word;

	start = 0;
	end = 0;
	if (s == NULL)
		return (NULL);
	split_str = allo_mem(s, c);
	if (!split_str)
		return (NULL);
}