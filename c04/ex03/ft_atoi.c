int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	minCount;

	sign = 1;
	result = 0;
	minCount = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-' && minCount == 0)
		{
			sign = -1;
			minCount++;
		} else if (*str == '-' && minCount == 1)
			return (0);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
