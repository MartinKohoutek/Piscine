#include "mini_test.h"

int ft_str_is_numeric(char *str);

int main(void)
{
	assert_int("ft_str_is_numeric(\"\")",
			   1,
			   ft_str_is_numeric(""));

	assert_int("ft_str_is_numeric(\"0\")",
			   1,
			   ft_str_is_numeric("0"));

	assert_int("ft_str_is_numeric(\"12345\")",
			   1,
			   ft_str_is_numeric("12345"));

	assert_int("ft_str_is_numeric(\"9876543210\")",
			   1,
			   ft_str_is_numeric("9876543210"));

	assert_int("ft_str_is_numeric(\"00042\")",
			   1,
			   ft_str_is_numeric("00042"));

	assert_int("ft_str_is_numeric(\"123a\")",
			   0,
			   ft_str_is_numeric("123a"));

	assert_int("ft_str_is_numeric(\"12 34\")",
			   0,
			   ft_str_is_numeric("12 34"));

	assert_int("ft_str_is_numeric(\"-123\")",
			   0,
			   ft_str_is_numeric("-123"));

	assert_int("ft_str_is_numeric(\"+123\")",
			   0,
			   ft_str_is_numeric("+123"));

	assert_int("ft_str_is_numeric(\"12.34\")",
			   0,
			   ft_str_is_numeric("12.34"));

	assert_int("ft_str_is_numeric(\"abc\")",
			   0,
			   ft_str_is_numeric("abc"));

	return (0);
}
