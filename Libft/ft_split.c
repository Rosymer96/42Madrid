#include "libft.h"

static int  ft_ischar(char d, char c)
{
    return (d == c);
}

static int  ft_countword(char *str, char c)
{
    size_t  i;
    size_t  count;

    count = 0;
    i = 0;
    while (str[i])
    {
        if (!ft_ischar(str[i], c))
            count++;
        else if(!ft_ischar(str[i], c) && ft_ischar(str[i - 1], c))
            count++;
        i++;
    }
    return (count);
}
char	*ft_split(char const *s, char c)
{
    
}