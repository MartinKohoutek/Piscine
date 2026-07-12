#include "../include/mini_test.h"

void ft_print_comb2(void);

char *generate_expected_comb2(void)
{
	char *buf;
	int a;
	int b;
	int pos;

	buf = malloc(200000);
	pos = 0;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			buf[pos++] = (a / 10) + '0';
			buf[pos++] = (a % 10) + '0';
			buf[pos++] = ' ';
			buf[pos++] = (b / 10) + '0';
			buf[pos++] = (b % 10) + '0';

			if (!(a == 98 && b == 99))
			{
				buf[pos++] = ',';
				buf[pos++] = ' ';
			}
			b++;
		}
		a++;
	}

	buf[pos] = '\0';
	return buf;
}

int main(void)
{
	char *expected = generate_expected_comb2();

	assert_stdout("ft_print_comb2", expected, ft_print_comb2);

	free(expected);
}
