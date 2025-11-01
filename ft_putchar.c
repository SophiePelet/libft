#include <unistd.h>
#include "libft.h"

int ft_putchar(int c)
{
    const int fd = 1; 
    char char_to_write = (char)c;
    ssize_t bytes_written = write(fd, &char_to_write, 1);
    if (bytes_written == 1)
        return (c);
    else
        return (-1); 
}

/*
#include <stdio.h>

int main(void)
{
    int c;
    
    c = 'a';
    ft_putchar(c);
}
*/