/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:59:41 by sopelet           #+#    #+#             */
/*   Updated: 2025/12/01 16:51:10 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>

int	ft_putchar(const char c);
int	ft_putstr(const char *str);
int	ft_putnbr(int nb);
int	ft_putnbr_unsigned(unsigned int nb);
int	ft_putnbr_hexl(unsigned int nb);
int	ft_putnbr_hexu(unsigned int nb);
int	ft_format(char c, va_list args);
int	ft_pointer(void *ptr);
int	ft_printf(const char *format, ...);

#endif