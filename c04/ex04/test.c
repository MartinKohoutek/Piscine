#include "mini_test.h"

int ft_check_base(char *base);

int main(void)
{
	// Valid bases
	assert_int("binary", 1, ft_check_base("01"));
	assert_int("decimal", 1, ft_check_base("0123456789"));
	assert_int("hex lowercase", 1, ft_check_base("0123456789abcdef"));
	assert_int("hex uppercase", 1, ft_check_base("0123456789ABCDEF"));
	assert_int("custom base", 1, ft_check_base("abc"));

	// Too short
	assert_int("empty base", 0, ft_check_base(""));
	assert_int("one char base", 0, ft_check_base("0"));
	assert_int("one char letter base", 0, ft_check_base("a"));

	// Duplicate characters
	assert_int("duplicate zero", 0, ft_check_base("001"));
	assert_int("duplicate middle", 0, ft_check_base("012345670"));
	assert_int("duplicate letters", 0, ft_check_base("abcda"));

	// Forbidden signs
	assert_int("plus sign", 0, ft_check_base("01+"));
	assert_int("minus sign", 0, ft_check_base("01-"));
	assert_int("plus only", 0, ft_check_base("+"));
	assert_int("minus only", 0, ft_check_base("-"));

	// Spaces
	assert_int("space inside", 0, ft_check_base("01 2"));
	assert_int("space beginning", 0, ft_check_base(" 012"));
	assert_int("space end", 0, ft_check_base("012 "));

	// Whitespace characters
	assert_int("tab", 0, ft_check_base("01\t"));
	assert_int("newline", 0, ft_check_base("01\n"));
	assert_int("vertical tab", 0, ft_check_base("01\v"));
	assert_int("form feed", 0, ft_check_base("01\f"));
	assert_int("carriage return", 0, ft_check_base("01\r"));

	assert_int("duplicate plus invalid", 0, ft_check_base("001+"));
	assert_int("base with symbols", 1, ft_check_base("._"));

	printf("All check_base tests passed!\n");

	return (0);
}
