#include "mini_test.h"

void	ft_putstr(char *str);

int	main(void)
{
	assert_stdout_str("ft_putstr(\"\")",
		"",
		ft_putstr,
		"");

	assert_stdout_str("ft_putstr(\"a\")",
		"a",
		ft_putstr,
		"a");

	assert_stdout_str("ft_putstr(\"Hello\")",
		"Hello",
		ft_putstr,
		"Hello");

	assert_stdout_str("ft_putstr(\"Hello World\")",
		"Hello World",
		ft_putstr,
		"Hello World");

	assert_stdout_str("ft_putstr(\"42\")",
		"42",
		ft_putstr,
		"42");

	assert_stdout_str("ft_putstr(\"1234567890\")",
		"1234567890",
		ft_putstr,
		"1234567890");

	assert_stdout_str("ft_putstr(\"   \")",
		"   ",
		ft_putstr,
		"   ");

	assert_stdout_str("ft_putstr(\"Hello\\tWorld\")",
		"Hello\tWorld",
		ft_putstr,
		"Hello\tWorld");

	assert_stdout_str("ft_putstr(\"!@#$%^&*\")",
		"!@#$%^&*",
		ft_putstr,
		"!@#$%^&*");

	assert_stdout_str("ft_putstr(\"abcdefghijklmnopqrstuvwxyz\")",
		"abcdefghijklmnopqrstuvwxyz",
		ft_putstr,
		"abcdefghijklmnopqrstuvwxyz");

	assert_stdout_str("ft_putstr(\"line1\\nline2\")",
		"line1\nline2",
		ft_putstr,
		"line1\nline2");

	return (0);
}
