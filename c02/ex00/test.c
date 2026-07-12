#include "mini_test.h"

char *ft_strcpy(char *dest, char *src);

int main(void)
{
	char dest1[20];

	ft_strcpy(dest1, "Hello");

	assert_str("ft_strcpy(\"Hello\")", "Hello", dest1);

	char dest2[20];

	ft_strcpy(dest2, "");

	assert_str("ft_strcpy(\"\")", "", dest2);

	char dest3[20];

	ft_strcpy(dest3, "A");

	assert_str("ft_strcpy(\"A\")", "A", dest3);

	char dest4[50];

	ft_strcpy(dest4, "Hello World 42");

	assert_str("ft_strcpy(\"Hello World 42\")",
			   "Hello World 42",
			   dest4);

	char dest5[20];

	ft_strcpy(dest5, "123456789");

	assert_str("ft_strcpy(\"123456789\")",
			   "123456789",
			   dest5);

	char dest[20];
	char *ret;

	ret = ft_strcpy(dest, "Hello");

	assert_str("ft_strcpy return dest", dest, ret);

	return (0);

	return (0);
}
