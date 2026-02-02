#include "libft.h"

static size_t get_lengh(long n)
{
    size_t  len;

    len = 0;
    if (n < 0)
    {
        len++;
        n = -n;
    }
    while (n > 0)
    {
        len++;
        n /= 10;
    }
    return (len);
}
static void putnbr(long num, char *n_str, size_t len)
{
    size_t  i;

    i = 0;
    if (num < 0)
    {
        n_str[0] = '-';
        num = -num;
    }
    while ((i < len) & (num > 0))
    {
        n_str[len - 1 - i] = (num % 10) + '0';
        num /= 10;
        i++;  
    }
    n_str[len] = '\0';
    return;
}

char	*ft_itoa(int n)
{
    size_t  n_len;
    char    *n_str;
    long    num;

    if(!n)
        return (NULL);
    num = n;
    n_len = get_lengh(num);
    n_str = malloc(sizeof(char) * (n_len +1));
    if(!n_str)
        return (NULL);
    putnbr(num, n_str, n_len);
    return(n_str);
}