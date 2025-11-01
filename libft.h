#include <stddef.h>
#ifndef LIBFT_H
# define LIBFT_H

//strings
int ft_putchar(int c);
void    ft_putstr(const char  *str);
int ft_strlen(const char  *str);
void    ft_putnbr(int   num);
int ft_tolower(int c);
int ft_toupper(int c);
int ft_isalpha(int  c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isprint(int  c);
int ft_isascii(int  c);
int ft_atoi(const char *arr);
char    *ft_strcpy(char *dest, const char *src);
char    *ft_strcat(char *dest, const char *src);
int ft_strcmp(const char *s1, const char *s2);
char    *ft_strncat(char *dest, const char *src, size_t n);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strncpy(char *dest, const char *src, size_t n);
char    *ft_strdup(const char *src);
char    *ft_strjoin(const char*s1, const char *s2);
void    ft_putendl(const char *s);

//memory
void ft_bzero(void *s, size_t n);

//fd
void    ft_putstr_fd(char const *s, int fd);

#endif