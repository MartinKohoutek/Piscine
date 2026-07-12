#include "mini_test.h"

char *ft_strlowcase(char *str);

int main(void)
{
	char str1[] = "HELLO";
	char str2[] = "Hello World!";
	char str3[] = "42 PISCINE";
	char str4[] = "";
	char str5[] = "abc123";

	assert_str("Uppercase", "hello", ft_strlowcase(str1));
	assert_str("Mixed", "hello world!", ft_strlowcase(str2));
	assert_str("Numbers unchanged", "42 piscine", ft_strlowcase(str3));
	assert_str("Empty string", "", ft_strlowcase(str4));
	assert_str("Already lowercase", "abc123", ft_strlowcase(str5));

	return (0);
}
