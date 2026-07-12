#include "mini_test.h"

unsigned int	ft_strlen(char *str);

int	main(void)
{
	assert_int("ft_strlen(\"\")",
		strlen(""),
		ft_strlen(""));

	assert_int("ft_strlen(\"a\")",
		strlen("a"),
		ft_strlen("a"));

	assert_int("ft_strlen(\"Hello\")",
		strlen("Hello"),
		ft_strlen("Hello"));

	assert_int("ft_strlen(\"Hello World\")",
		strlen("Hello World"),
		ft_strlen("Hello World"));

	assert_int("ft_strlen(\"42\")",
		strlen("42"),
		ft_strlen("42"));

	assert_int("ft_strlen(\"1234567890\")",
		strlen("1234567890"),
		ft_strlen("1234567890"));

	assert_int("ft_strlen(\"   \")",
		strlen("   "),
		ft_strlen("   "));

	assert_int("ft_strlen(\"Hello\\tWorld\")",
		strlen("Hello\tWorld"),
		ft_strlen("Hello\tWorld"));

	assert_int("ft_strlen(\"!@#$%^&*\")",
		strlen("!@#$%^&*"),
		ft_strlen("!@#$%^&*"));

	assert_int("ft_strlen(\"abcdefghijklmnopqrstuvwxyz\")",
		strlen("abcdefghijklmnopqrstuvwxyz"),
		ft_strlen("abcdefghijklmnopqrstuvwxyz"));

	assert_int("ft_strlen(\"A very long string with spaces and numbers 12345\")",
		strlen("A very long string with spaces and numbers 12345"),
		ft_strlen("A very long string with spaces and numbers 12345"));

	return (0);
}
