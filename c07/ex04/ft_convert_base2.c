#include <stdlib.h>

int	ft_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| base[i] == ' '
			|| base[i] == '\t'
			|| base[i] == '\n'
			|| base[i] == '\v'
			|| base[i] == '\f'
			|| base[i] == '\r')
			return (0);

		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

int	ft_char_value(char c, char *base)
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

int	ft_atoi_base(char *nbr, char *base)
{
	int	sign;
	int	result;
	int	value;
	int	base_len;

	sign = 1;
	result = 0;
	base_len = 0;

	while (base[base_len])
		base_len++;

	while (*nbr == ' ' || (*nbr >= 9 && *nbr <= 13))
		nbr++;

	while (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			sign *= -1;
		nbr++;
	}

	while (*nbr)
	{
		value = ft_char_value(*nbr, base);
		if (value == -1)
			break;
		result = result * base_len + value;
		nbr++;
	}

	return (result * sign);
}

int	ft_num_len(long nbr, int base_len)
{
	int	len;

	len = 1;
	if (nbr < 0)
	{
		len++;
		nbr = -nbr;
	}

	while (nbr >= base_len)
	{
		nbr /= base_len;
		len++;
	}
	return (len);
}

void	ft_fill_base(char *result, long nbr, char *base, int pos)
{
	int	base_len;

	base_len = 0;
	while (base[base_len])
		base_len++;

	if (nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}

	if (nbr >= base_len)
		ft_fill_base(result, nbr / base_len, base, pos - 1);

	result[pos] = base[nbr % base_len];
}

char	*ft_putnbr_base(int nbr, char *base)
{
	char	*result;
	long	number;
	int		base_len;
	int		len;

	base_len = 0;
	while (base[base_len])
		base_len++;

	number = nbr;
	len = ft_num_len(number, base_len);

	result = malloc(len + 1);
	if (!result)
		return (NULL);

	result[len] = '\0';

	if (number < 0)
		ft_fill_base(result, number, base, len - 1);
	else
		ft_fill_base(result, number, base, len - 1);

	return (result);
}
