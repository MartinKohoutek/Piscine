#include "mini_test.h"

void	ft_putnbr(int nb);

int	main(void)
{
	assert_stdout_int("ft_putnbr(0)",
		"0",
		ft_putnbr,
		0);

	assert_stdout_int("ft_putnbr(1)",
		"1",
		ft_putnbr,
		1);

	assert_stdout_int("ft_putnbr(9)",
		"9",
		ft_putnbr,
		9);

	assert_stdout_int("ft_putnbr(10)",
		"10",
		ft_putnbr,
		10);

	assert_stdout_int("ft_putnbr(42)",
		"42",
		ft_putnbr,
		42);

	assert_stdout_int("ft_putnbr(123456)",
		"123456",
		ft_putnbr,
		123456);

	assert_stdout_int("ft_putnbr(-1)",
		"-1",
		ft_putnbr,
		-1);

	assert_stdout_int("ft_putnbr(-42)",
		"-42",
		ft_putnbr,
		-42);

	assert_stdout_int("ft_putnbr(-123456)",
		"-123456",
		ft_putnbr,
		-123456);

	assert_stdout_int("ft_putnbr(2147483647)",
		"2147483647",
		ft_putnbr,
		2147483647);

	assert_stdout_int("ft_putnbr(-2147483648)",
		"-2147483648",
		ft_putnbr,
		-2147483648);

	assert_stdout_int("ft_putnbr(1000000000)",
		"1000000000",
		ft_putnbr,
		1000000000);

	assert_stdout_int("ft_putnbr(-1000000000)",
		"-1000000000",
		ft_putnbr,
		-1000000000);

	return (0);
}
