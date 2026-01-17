#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*subs;
	size_t		i;
    size_t      s_len;

	i = 0;
	subs = malloc(sizeof(char) * (len + 1));
	if (!subs)
		return NULL;
/*     s_len = ft_strlen(s);
    if (start >= s_len)
        return ft_strdup(""); */
	while (i < len && s[start + i])
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}
