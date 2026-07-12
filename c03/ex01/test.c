#include "mini_test.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	assert_int("ft_strncmp(\"abc\", \"abc\", 3)",
		strncmp("abc", "abc", 3),
		ft_strncmp("abc", "abc", 3));

	assert_int("ft_strncmp(\"abc\", \"abd\", 2)",
		strncmp("abc", "abd", 2),
		ft_strncmp("abc", "abd", 2));

	assert_int("ft_strncmp(\"abc\", \"abd\", 3)",
		strncmp("abc", "abd", 3),
		ft_strncmp("abc", "abd", 3));

	assert_int("ft_strncmp(\"abcd\", \"abce\", 4)",
		strncmp("abcd", "abce", 4),
		ft_strncmp("abcd", "abce", 4));

	assert_int("ft_strncmp(\"abcd\", \"abce\", 3)",
		strncmp("abcd", "abce", 3),
		ft_strncmp("abcd", "abce", 3));

	assert_int("ft_strncmp(\"\", \"\", 1)",
		strncmp("", "", 1),
		ft_strncmp("", "", 1));

	assert_int("ft_strncmp(\"\", \"abc\", 1)",
		strncmp("", "abc", 1),
		ft_strncmp("", "abc", 1));

	assert_int("ft_strncmp(\"abc\", \"\", 1)",
		strncmp("abc", "", 1),
		ft_strncmp("abc", "", 1));

	assert_int("ft_strncmp(\"abc\", \"xyz\", 0)",
		strncmp("abc", "xyz", 0),
		ft_strncmp("abc", "xyz", 0));

	assert_int("ft_strncmp(\"abcdef\", \"abcxyz\", 3)",
		strncmp("abcdef", "abcxyz", 3),
		ft_strncmp("abcdef", "abcxyz", 3));

	assert_int("ft_strncmp(\"abcdef\", \"abcxyz\", 4)",
		strncmp("abcdef", "abcxyz", 4),
		ft_strncmp("abcdef", "abcxyz", 4));

	assert_int("ft_strncmp(\"abc\", \"abcd\", 4)",
		strncmp("abc", "abcd", 4),
		ft_strncmp("abc", "abcd", 4));

	assert_int("ft_strncmp(\"abcd\", \"abc\", 4)",
		strncmp("abcd", "abc", 4),
		ft_strncmp("abcd", "abc", 4));

	assert_int("ft_strncmp(\"ABC\", \"abc\", 3)",
		strncmp("ABC", "abc", 3),
		ft_strncmp("ABC", "abc", 3));

	assert_int("ft_strncmp(\"12345\", \"12399\", 3)",
		strncmp("12345", "12399", 3),
		ft_strncmp("12345", "12399", 3));

	assert_int("ft_strncmp(\"12345\", \"12399\", 5)",
		strncmp("12345", "12399", 5),
		ft_strncmp("12345", "12399", 5));

	assert_int("ft_strncmp(\"abc\\0xxx\", \"abc\\0yyy\", 7)",
		strncmp("abc\0xxx", "abc\0yyy", 7),
		ft_strncmp("abc\0xxx", "abc\0yyy", 7));

	return (0);
}
