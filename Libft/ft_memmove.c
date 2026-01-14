void *ft_memmove(void *dest, const void *str, size_t n)
{
	size_t	i;
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)dest;
	s = (unsigned char *)str;

	if ( d > s)
	{
		i = n;
		while(i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
	{
		i = 0;
		while(i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
