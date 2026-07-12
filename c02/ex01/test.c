#include "mini_test.h"

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char dest1[20] = {0};

	ft_strncpy(dest1, "Hello", 5);

	assert_str("ft_strncpy(\"Hello\", 5)", "Hello", dest1);

	char dest2[20] = {0};

	ft_strncpy(dest2, "Hello", 10);

	assert_str("ft_strncpy(\"Hello\", 10)", "Hello", dest2);

	char dest3[20] = {0};

	ft_strncpy(dest3, "", 5);

	assert_str("ft_strncpy(\"\", 5)", "", dest3);

	char dest4[20] = {0};

	ft_strncpy(dest4, "ABC", 1);

	assert_str("ft_strncpy(\"ABC\", 1)", "A", dest4);

	char dest5[20] = {0};

	ft_strncpy(dest5, "ABC", 2);

	assert_str("ft_strncpy(\"ABC\", 2)", "AB", dest5);

	char dest[10];

	memset(dest, 'X', 10);

	ft_strncpy(dest, "Hello", 3);

	assert_int("ft_strncpy no null terminator",
			   'X',
			   dest[3]);

	return (0);
	return (0);
}
