#include "../include/mini_test.h"

void ft_is_negative(int n);

int main(void)
{
	assert_stdout_int("-2147483648", "N", ft_is_negative, -2147483648);
	assert_stdout_int("-1", "N", ft_is_negative, -1);
	assert_stdout_int("0", "P", ft_is_negative, 0);
	assert_stdout_int("1", "P", ft_is_negative, 1);
	assert_stdout_int("2147483647", "P", ft_is_negative, 2147483647);

	return (0);
}
