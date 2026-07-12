#include "mini_test.h"

int ft_str_is_lowercase(char *str);

int main(void)
{
	assert_int("ft_str_is_lowercase(\"\")",
			   1,
			   ft_str_is_lowercase(""));

	assert_int("ft_str_is_lowercase(\"a\")",
			   1,
			   ft_str_is_lowercase("a"));

	assert_int("ft_str_is_lowercase(\"hello\")",
			   1,
			   ft_str_is_lowercase("hello"));

	assert_int("ft_str_is_lowercase(\"abcdefghijklmnopqrstuvwxyz\")",
			   1,
			   ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz"));

	assert_int("ft_str_is_lowercase(\"teststring\")",
			   1,
			   ft_str_is_lowercase("teststring"));

	assert_int("ft_str_is_lowercase(\"Hello\")",
			   0,
			   ft_str_is_lowercase("Hello"));

	assert_int("ft_str_is_lowercase(\"HELLO\")",
			   0,
			   ft_str_is_lowercase("HELLO"));

	assert_int("ft_str_is_lowercase(\"hello123\")",
			   0,
			   ft_str_is_lowercase("hello123"));

	assert_int("ft_str_is_lowercase(\"hello world\")",
			   0,
			   ft_str_is_lowercase("hello world"));

	assert_int("ft_str_is_lowercase(\"hello!\")",
			   0,
			   ft_str_is_lowercase("hello!"));

	assert_int("ft_str_is_lowercase(\"123\")",
			   0,
			   ft_str_is_lowercase("123"));

	return (0);
}
