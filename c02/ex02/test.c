#include "mini_test.h"

int ft_str_is_alpha(char *str);

int main(void)
{
	assert_int("ft_str_is_alpha(\"\")",
			   1,
			   ft_str_is_alpha(""));

	assert_int("ft_str_is_alpha(\"A\")",
			   1,
			   ft_str_is_alpha("A"));

	assert_int("ft_str_is_alpha(\"Hello\")",
			   1,
			   ft_str_is_alpha("Hello"));

	assert_int("ft_str_is_alpha(\"HelloWorld\")",
			   1,
			   ft_str_is_alpha("HelloWorld"));

	assert_int("ft_str_is_alpha(\"hello\")",
			   1,
			   ft_str_is_alpha("hello"));

	assert_int("ft_str_is_alpha(\"Hello123\")",
			   0,
			   ft_str_is_alpha("Hello123"));

	assert_int("ft_str_is_alpha(\"Hello World\")",
			   0,
			   ft_str_is_alpha("Hello World"));

	assert_int("ft_str_is_alpha(\"Hello!\")",
			   0,
			   ft_str_is_alpha("Hello!"));

	assert_int("ft_str_is_alpha(\"12345\")",
			   0,
			   ft_str_is_alpha("12345"));

	assert_int("ft_str_is_alpha(\"_\")",
			   0,
			   ft_str_is_alpha("_"));

	return (0);
}
