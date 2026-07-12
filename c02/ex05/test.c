#include "mini_test.h"

int ft_str_is_uppercase(char *str);

int main(void)
{
	assert_int("Only uppercase", 1, ft_str_is_uppercase("HELLO"));
	assert_int("Single uppercase char", 1, ft_str_is_uppercase("A"));
	assert_int("Empty string", 1, ft_str_is_uppercase(""));
	assert_int("Lowercase chars", 0, ft_str_is_uppercase("hello"));
	assert_int("Mixed uppercase/lowercase", 0, ft_str_is_uppercase("Hello"));
	assert_int("Numbers", 0, ft_str_is_uppercase("ABC123"));
	assert_int("Special chars", 0, ft_str_is_uppercase("ABC!"));
	assert_int("Space", 0, ft_str_is_uppercase("ABC DEF"));
	assert_int("Newline", 0, ft_str_is_uppercase("ABC\n"));
	assert_int("Lowercase at end", 0, ft_str_is_uppercase("ABCd"));
	char str1[] = {'A', 'B', 'C', '\0'};
	char str2[] = {'A', '\0', 'B', 'C'};
	assert_int("Char array uppercase", 1, ft_str_is_uppercase(str1));
	assert_int("Null terminator stops string", 1, ft_str_is_uppercase(str2));

	return (0);
}
