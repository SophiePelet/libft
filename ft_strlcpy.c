#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

int	main(void)
{
	const char *source = "bonjour";
	char desti[50];
	size_t len = 9;
	printf("%zu\n", ft_strlcpy(desti, source, len));
  printf("%s\n", desti);
}