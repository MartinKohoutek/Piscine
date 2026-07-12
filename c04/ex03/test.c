#include "mini_test.h"

int ft_atoi(char *str);

int main(void)
{
	assert_int("basic 0", 0, ft_atoi("0"));
	assert_int("basic positive", 42, ft_atoi("42"));
	assert_int("big positive", 123456, ft_atoi("123456"));

	// single sign
	assert_int("positive sign", 42, ft_atoi("+42"));
	assert_int("negative sign", -42, ft_atoi("-42"));

	// multiple signs
	assert_int("two minus", -10, ft_atoi("--10"));
	assert_int("three minus", -10, ft_atoi("---10"));
	assert_int("many minus", -123, ft_atoi("-----123"));

	assert_int("many plus", 123, ft_atoi("+++++123"));

	// mixed signs
	assert_int("minus plus", -10, ft_atoi("-+10"));
	assert_int("plus minus", -10, ft_atoi("+-10"));
	assert_int("mixed signs", -42, ft_atoi("++--+-42"));

	// whitespace
	assert_int("spaces", 42, ft_atoi("   42"));
	assert_int("tab", 42, ft_atoi("\t42"));
	assert_int("newline", 42, ft_atoi("\n42"));
	assert_int("all whitespace", -42, ft_atoi(" \t\n\v\f\r-42"));

	// whitespace + signs
	assert_int("subject example",
		-1234,
		ft_atoi(" ---+--+1234ab567"));

	// stop at invalid character
	assert_int("letters after number",
		42,
		ft_atoi("42abc"));

	assert_int("space after number",
		123,
		ft_atoi("123 456"));

	assert_int("sign after number",
		123,
		ft_atoi("123+456"));

	// invalid input
	assert_int("only letters", 0, ft_atoi("abc"));
	assert_int("empty string", 0, ft_atoi(""));
	assert_int("only spaces", 0, ft_atoi("   "));

	printf("\nAll ft_atoi tests passed!\n");

	return (0);
}
