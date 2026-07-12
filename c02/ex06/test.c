#include "mini_test.h"

int ft_str_is_printable(char *str);

int main(void)
{
	assert_int("Printable text", 1,
			   ft_str_is_printable("Hello World!"));

	assert_int("Empty string", 1,
			   ft_str_is_printable(""));

	assert_int("Numbers", 1,
			   ft_str_is_printable("123456"));

	assert_int("Space", 1,
			   ft_str_is_printable(" "));

	assert_int("Tilde", 1,
			   ft_str_is_printable("~"));

	assert_int("Newline", 0,
			   ft_str_is_printable("Hello\nWorld"));

	assert_int("Tab", 0,
			   ft_str_is_printable("Hello\tWorld"));

	assert_int("Delete character", 0,
			   ft_str_is_printable("\x7f"));

	assert_int("Control character", 0,
			   ft_str_is_printable("\x01"));

	return (0);
}
