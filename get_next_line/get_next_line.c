/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 15:33:24 by sopelet           #+#    #+#             */
/*   Updated: 2025/12/04 17:01:59 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static int	check_stash(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

static char	*fill_stash(int fd, char *stash)
{
	char	*buffer;
	int		byte_read;
	char	*tmp_stash;

	buffer = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (!buffer)
		return (NULL);
	printf("calloced buffer : %s\n", buffer);
	byte_read = 1;
	while (byte_read > 0 && !check_stash(stash))
	{
		printf("stash content 1 : %s\n", stash);
		printf("inside buffer 1 : %s\n", buffer);
		byte_read = read(fd, buffer, BUFFER_SIZE);
		printf("inside buffer 2 : %s\n", buffer);
		printf("stash content 2 : %s\n", stash);
		buffer[byte_read] = '\0';
		printf("inside buffer 3 : %s\n", buffer);
		tmp_stash = ft_strjoin(stash, buffer);
		printf("tmp stash content : %s\n", tmp_stash);
		stash = tmp_stash;
		printf("stash content 3 : %s\n", stash);
	}
	free(buffer);
	return (stash);
}

static char	*fill_line(char *filled_stash)
{
	char	*line;
	size_t	stash_len;
	size_t	i;

	stash_len = 0;
	i = 0;
	if (filled_stash == NULL)
		return (NULL);
	while (filled_stash[stash_len] != '\0' && filled_stash[stash_len] != '\n')
		stash_len++;
	if (filled_stash[stash_len] == '\n')
		stash_len += 1;
	line = ft_calloc((stash_len + 1), sizeof(char));
	if (!line)
		return (NULL);
	while (i < stash_len)
	{
		line[i] = filled_stash[i];
		i++;
	}
	line[i + 1] = '\0';
	printf("line content : %s\n", line);
	return (line);
}

static char	*clean_stash(char *filled_stash)
{
	size_t	i;
	char	*stash_remainder;

	i = 0;
	while (filled_stash[i] && filled_stash[i] != '\n')
		i++;
	if (filled_stash[i] == '\n')
	{
		i++;
		stash_remainder = ft_strdup(filled_stash, i);
	}
	else
		return (NULL);
	return (stash_remainder);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*filled_stash;
	char		*line;

	if (stash)
	{
		filled_stash = fill_stash(fd, stash);
		line = fill_line(filled_stash);
		stash = clean_stash(filled_stash);
		free(filled_stash);
		return (line);
	}
	stash = NULL;
	filled_stash = fill_stash(fd, stash);
	line = fill_line(filled_stash);
	stash = clean_stash(filled_stash);
	free(filled_stash);
	return (line);
}

int	main(void)
{
	int		fd;
	char	*next_line;

	fd = open("test.txt", O_RDONLY);
	if (fd < 0)
		return (printf("nope"), 1);
	printf("call : %s\n", next_line = get_next_line(fd));
	printf("call : %s\n", next_line = get_next_line(fd));
	printf("call : %s\n", next_line = get_next_line(fd));
	printf("call : %s\n", next_line = get_next_line(fd));
	free(next_line);
}