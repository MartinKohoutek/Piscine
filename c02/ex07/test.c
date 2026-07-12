#include "mini_test.h"

char *ft_strupcase(char *str);

int main(void)
{
	char str1[] = "hello";
	char str2[] = "Hello World!";
	char str3[] = "42 Piscine";
	char str4[] = "";
	char str5[] = "ABC123";

	assert_str("Lowercase", "HELLO", ft_strupcase(str1));
	assert_str("Mixed", "HELLO WORLD!", ft_strupcase(str2));
	assert_str("Numbers unchanged", "42 PISCINE", ft_strupcase(str3));
	assert_str("Empty string", "", ft_strupcase(str4));
	assert_str("Already uppercase", "ABC123", ft_strupcase(str5));

	return (0);
}
