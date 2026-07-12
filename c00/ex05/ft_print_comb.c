#include <unistd.h>

void ft_print_number(int i, int j, int k)
{
	char c[3];

	c[0] = i + '0';
	c[1] = j + '0';
	c[2] = k + '0';
	write(1, c, 3);
}

void ft_print_comb(void)
{
	int n;
	int i;
	int j;
	int k;

	n = 0;
	while (n <= 789)
	{
		i = n / 100;
		j = (n / 10) % 10;
		k = n % 10;

		if (i < j && j < k)
		{
			ft_print_number(i, j, k);

			if (!(i == 7 && j == 8 && k == 9))
				write(1, ", ", 2);
		}
		n++;
	}
}
