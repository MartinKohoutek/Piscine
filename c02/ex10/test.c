#include "mini_test.h"

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char dest1[20];
	char dest2[20];
	char dest3[5];
	char dest4[1];

	assert_int("Copy whole string",
			   5,
			   ft_strlcpy(dest1, "Hello", 20));

	assert_str("Whole copy",
			   "Hello",
			   dest1);

	assert_int("Truncated copy",
			   5,
			   ft_strlcpy(dest2, "Hello", 3));

	assert_str("Only fits two chars",
			   "He",
			   dest2);

	assert_int("Exact size",
			   4,
			   ft_strlcpy(dest3, "Test", 5));

	assert_str("Exact copy",
			   "Test",
			   dest3);

	assert_int("Size zero",
			   5,
			   ft_strlcpy(dest4, "Hello", 0));

	return (0);
}
