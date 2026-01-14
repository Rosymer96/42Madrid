void *ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)str;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
