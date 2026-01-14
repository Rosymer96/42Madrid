int	ft_atoi(const char *str)
{
	int	sign;
	int	res;
	int	n;

	sign = 1;
	res = 0;
	while (*str >= 9 && *str <= 13 || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		n = *str - '0';
		res = res * 10 + n;
		str++;
	}
	return (res * sign);
}

