#include <unistd.h>

void ft_print_num(int n)
{
	char c;

	c = (n / 10) + '0';
	write(1, &c, 1);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
	int n;

	n = 0;
	while (n <= 9899)
	{
		int a = n / 100;
		int b = n % 100;

		if (a < b)
		{
			ft_print_num(a);
			write(1, " ", 1);
			ft_print_num(b);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
		}
		n++;
	}
}
