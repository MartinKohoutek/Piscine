#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int count_bits(int mask)
{
	int count;

	count = 0;
	while (mask)
	{
		if (mask & 1)
			count++;
		mask >>= 1;
	}
	return (count);
}

void print_mask(int mask)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (mask & (1 << i))
			ft_putchar(i + '0');
		i++;
	}
}

int is_last(int mask, int n)
{
	int i;
	int count;
	int first;

	i = 0;
	count = 0;
	first = -1;
	while (i < 10)
	{
		if (mask & (1 << i))
		{
			if (first == -1)
				first = i;
			count++;
		}
		i++;
	}
	if (count != n)
		return (0);
	return (first == 10 - n);
}

void ft_print_combn(int n)
{
	int mask;

	if (n <= 0 || n >= 10)
		return;
	mask = 0;
	while (mask < (1 << 10))
	{
		if (count_bits(mask) == n)
		{
			print_mask(mask);
			if (!is_last(mask, n))
			{
				write(1, ", ", 2);
			}
		}
		mask++;
	}
}
