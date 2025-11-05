/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:50:51 by sopelet           #+#    #+#             */
/*   Updated: 2025/11/05 14:50:55 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	ft_putchar(int c)
{
	const int	fd = 1;
	char		char_to_write;
	ssize_t		bytes_written;

	char_to_write = (char)c;
	bytes_written = write(fd, &char_to_write, 1);
	if (bytes_written == 1)
		return (c);
	else
		return (-1);
}

/*
#include <stdio.h>

int	main(void)
{
	int	c;

	c = 'a';
	ft_putchar(c);
}
*/
