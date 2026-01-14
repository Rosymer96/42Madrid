#include "libft.h"

char	*ft_strnstr(const char *src, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0; 
	if (n[i] == '\0')
		return (src);
	while (i < len && src[i] != '\0')
	{
		j = 0;
		while(n[j] == src[i + j] && i + j < len && n[j] && src[i + j])
		{
			j++;
		}
		if (n[j] == '\0')
			return ((char *)&src[i]);
		i++;
	}
	return NULL;
}
