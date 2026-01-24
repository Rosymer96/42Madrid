#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t          s_len;
    unsigned int    i;
    char            *res;

    if (!s || !f)
        return (NULL);
    s_len = ft_strlen(s);
    res = malloc(sizeof(char) * (s_len + 1));
    if (!res)
        return (NULL);
    i = 0;
    while (s[i] != '\0')
    {
        res[i] = f(i, s[i]);
        i++;
    }
    res[i] = '\0';
    return (res);
}