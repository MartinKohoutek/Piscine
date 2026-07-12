#include "mini_test.h"

int ft_strlen(char *str);

int main(void)
{
	assert_int("ft_strlen(\"\")", 0, ft_strlen(""));

	assert_int("ft_strlen(\"A\")", 1, ft_strlen("A"));

	assert_int("ft_strlen(\"Hello\")", 5, ft_strlen("Hello"));

	assert_int("ft_strlen(\"Hello World\")", 11, ft_strlen("Hello World"));

	assert_int("ft_strlen(\"1234567890\")", 10, ft_strlen("1234567890"));

	assert_int("ft_strlen(\"     \")", 5, ft_strlen("     "));

	assert_int("ft_strlen(\"!@#$%^&*()\")", 10, ft_strlen("!@#$%^&*()"));

	assert_int("ft_strlen(\"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\")",
			   100,
			   ft_strlen("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"));

	return (0);
}
