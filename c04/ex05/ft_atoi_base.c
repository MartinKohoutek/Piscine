#include <unistd.h>

int	ft_strlen(char *str)
{
	char *start;

	start = str;
	while (*str)
		str++;
	return (str - start);
}

int	ft_check_base(char *base)
{
	char	*start;
	char	*ptr;

	start = base;
	while (*base)
	{
		if (*base == '+' || *base == '-'
			|| *base == ' ' || (*base >= 9 && *base <= 13))
			return (0);
		ptr = base + 1;
		while (*ptr)
		{
			if (*base == *ptr)
				return (0);
			ptr++;
		}
		base++;
	}
	if (base - start < 2)
		return (0);
	return (1);
}

int	ft_get_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	sign;
	int	result;
	int	value;

	if (!ft_check_base(base))
		return (0);
	base_len = ft_strlen(base);
	sign = 1;
	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while ((value = ft_get_value(*str, base)) != -1)
	{
		result = result * base_len + value;
		str++;
	}
	return (result * sign);
}
