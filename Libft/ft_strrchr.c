#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	const char	*tmp;

	tmp = src;
	while (*src)
	{
		src++;
	}
	if (c == '\0')
		return (src);
	while (src >= tmp)
	{
		if (*src == c)
			return ((char *)src);
		src--;
	}
	return NULL;
}
