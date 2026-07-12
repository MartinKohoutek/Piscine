#include <unistd.h>

int	ft_strlen(char *str)
{
	char *start = str;
	while (*str)
		str++;
	return (str - start);
}

int ft_check_base(char *base)
{
	char *start;
	char *ptr;

	start = base;

	while (*base)
	{
		if (*base == '+' || *base == '-'
			|| *base == ' ' || (*base >= 9 && *base <= 13))
			// || *base < 32 || *base > 126)
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

void	ft_print_base(long n, char *base, int base_len)
{
	char c;

	if (n >= base_len)
		ft_print_base(n / base_len, base, base_len);

	c = base[n % base_len];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_len;
	long n;

	if (!ft_check_base(base))
		return ;

	base_len = ft_strlen(base);
	n = nbr;

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}

	ft_print_base(n, base, base_len);
}
