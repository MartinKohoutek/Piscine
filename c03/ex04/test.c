#include "mini_test.h"

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str1[] = "Hello World";
	char	str2[] = "Hello World";
	char	str3[] = "Hello World";
	char	str4[] = "Hello World";

	assert_str("ft_strstr(\"Hello World\", \"Hello\")",
		strstr(str1, "Hello"),
		ft_strstr(str2, "Hello"));

	assert_str("ft_strstr(\"Hello World\", \"World\")",
		strstr(str1, "World"),
		ft_strstr(str3, "World"));

	assert_str("ft_strstr(\"Hello World\", \"lo Wo\")",
		strstr(str1, "lo Wo"),
		ft_strstr(str4, "lo Wo"));


	{
		char	std[] = "abcdef";
		char	mine[] = "abcdef";

		assert_str("ft_strstr(\"abcdef\", \"abc\")",
			strstr(std, "abc"),
			ft_strstr(mine, "abc"));
	}

	{
		char	std[] = "abcdef";
		char	mine[] = "abcdef";

		assert_str("ft_strstr(\"abcdef\", \"def\")",
			strstr(std, "def"),
			ft_strstr(mine, "def"));
	}

	{
		char	std[] = "abcdef";
		char	mine[] = "abcdef";

		assert_str("ft_strstr(\"abcdef\", \"cd\")",
			strstr(std, "cd"),
			ft_strstr(mine, "cd"));
	}

	{
		char	std[] = "abcdef";
		char	mine[] = "abcdef";

		assert_int("ft_strstr(\"abcdef\", \"xyz\")",
			strstr(std, "xyz") == NULL,
			ft_strstr(mine, "xyz") == NULL);
	}

	{
		char	std[] = "";
		char	mine[] = "";

		assert_str("ft_strstr(\"\", \"\")",
			strstr(std, ""),
			ft_strstr(mine, ""));
	}

	{
		char	std[] = "abcdef";
		char	mine[] = "abcdef";

		assert_str("ft_strstr(\"abcdef\", \"\")",
			strstr(std, ""),
			ft_strstr(mine, ""));
	}

	{
		char	std[] = "abcdef";
		char	mine[] = "abcdef";

		assert_str("ft_strstr(\"abcdef\", \"abcdef\")",
			strstr(std, "abcdef"),
			ft_strstr(mine, "abcdef"));
	}

	{
		char	std[] = "aaaaaa";
		char	mine[] = "aaaaaa";

		assert_str("ft_strstr(\"aaaaaa\", \"aaa\")",
			strstr(std, "aaa"),
			ft_strstr(mine, "aaa"));
	}

	{
		char	std[] = "42 Piscine C";
		char	mine[] = "42 Piscine C";

		assert_str("ft_strstr(\"42 Piscine C\", \"Piscine\")",
			strstr(std, "Piscine"),
			ft_strstr(mine, "Piscine"));
	}

	{
		char	std[] = "abc";
		char	mine[] = "abc";

		assert_int("ft_strstr(\"abc\", \"abcd\")",
			strstr(std, "abcd") == NULL,
			ft_strstr(mine, "abcd") == NULL);
	}

	return (0);
}
