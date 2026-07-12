#include "../include/mini_test.h"
#include <stdlib.h>

void ft_print_combn(int n);

static void append_num(char *buf, int *pos, int num)
{
	buf[(*pos)++] = num + '0';
}

char *generate_expected_combn(int n)
{
	char *buf;
	int arr[10];
	int pos;
	int i;

	buf = malloc(200000);
	pos = 0;

	i = 0;
	while (i < n)
	{
		arr[i] = i;
		i++;
	}

	while (1)
	{
		i = 0;
		while (i < n)
		{
			append_num(buf, &pos, arr[i]);
			i++;
		}

		if (arr[0] == 10 - n)
			break;

		buf[pos++] = ',';
		buf[pos++] = ' ';

		i = n - 1;
		while (i >= 0 && arr[i] == 9 - (n - 1 - i))
			i--;

		arr[i]++;

		while (++i < n)
			arr[i] = arr[i - 1] + 1;
	}

	buf[pos] = '\0';
	return buf;
}

int main(void)
{
	char *expected;

	expected = generate_expected_combn(1);
	assert_stdout_int("ft_print_combn(1)", expected, ft_print_combn, 1);
	free(expected);

	expected = generate_expected_combn(2);
	assert_stdout_int("ft_print_combn(2)", expected, ft_print_combn, 2);
	free(expected);

	expected = generate_expected_combn(3);
	assert_stdout_int("ft_print_combn(3)", expected, ft_print_combn, 3);
	free(expected);

	expected = generate_expected_combn(7);
	assert_stdout_int("ft_print_combn(7)", expected, ft_print_combn, 7);
	free(expected);

	return (0);
}
