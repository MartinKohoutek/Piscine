#include "mini_test.h"

void ft_putstr(char *str);

int main(void)
{
	assert_stdout_str("ft_putstr(\"\")", "", ft_putstr, "");

	assert_stdout_str("ft_putstr(\"A\")", "A", ft_putstr, "A");

	assert_stdout_str("ft_putstr(\"Hello World\")",
					  "Hello World",
					  ft_putstr,
					  "Hello World");

	assert_stdout_str("ft_putstr(\"1234567890\")",
					  "1234567890",
					  ft_putstr,
					  "1234567890");

	assert_stdout_str("ft_putstr(\"Hello World 42\")",
					  "Hello World 42",
					  ft_putstr,
					  "Hello World 42");

	assert_stdout_str("ft_putstr(\"!@#$%^&*()\")",
					  "!@#$%^&*()",
					  ft_putstr,
					  "!@#$%^&*()");

	return (0);
}
