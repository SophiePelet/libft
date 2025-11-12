/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:42:43 by sopelet           #+#    #+#             */
/*   Updated: 2025/11/12 19:28:58 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	cnt_words(const char *str, char sep)
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

static char	**main_str(const char *str, char c)
{
	char	**main;

	main = malloc(sizeof(char *) * (cnt_words(str, c) + 1));
	if (!main)
		return (NULL);
	return (main);
}

static void	*free_all(const char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free((char *)strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static char	*fill_words(const char *str, int start, int len)
{
	char	*words;
	size_t	size;
	int		i;

	size = (size_t)len;
	i = 0;
	words = ft_calloc((size + 1), sizeof(char));
	if (!words)
		return (NULL);
	while (i < len)
	{
		words[i] = str[start + i];
		i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		i;
	int		j;
	int		word_start;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	new = main_str(s, c);
	if (!new)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		word_start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i > word_start)
		{
			new[j] = fill_words(s, word_start, (i - word_start));
			if (!new[j])
				return (free_all((const char **)new, j));
			j++;
		}
	}
	new[j] = NULL;
	return (new);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	char		sep;
	char		**split_str;
	int			i;

	i = 0;
	str = "hello!zzzzzzzz";
	sep = 'z';
	split_str = ft_split(str, sep);
	while (split_str[i] != NULL)
	{
		printf("%s", split_str[i]);
		i++;
	}
	free_all((const char **)split_str, i);
	return (0);
}
*/