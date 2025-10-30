#ifndef LIBFT_H
# define LIBFT_H

//strings
void    ft_putchar(char c);
void    ft_putstr(char  *str);
int ft_strlen(char  *str);
void    ft_putnbr(int   num);
int ft_tolower(int c);
int ft_toupper(int c);
int ft_isalpha(int  c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isprint(int  c);
int ft_isascii(int  c);
int ft_atoi(const char *arr);
char    *ft_strcpy(char *dest, char *src);
char    *ft_strcat(char *dest, char *src);
int ft_strcmp(char *s1, char *s2);
char    *ft_strncat(char *dest, char *src, unsigned int n);
int ft_strncmp(char *s1, char *s2, unsigned int n);
char    *ft_strncpy(char *dest, char *src, unsigned int n);
char    *ft_strdup(char *src);

#endif