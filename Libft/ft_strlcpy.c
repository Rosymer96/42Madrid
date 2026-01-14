#include "libft.h"

int ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	if (n == 0)
		return (src_len);
	while (i < n - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (src_len);
}
