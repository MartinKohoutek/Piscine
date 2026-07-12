#include "mini_test.h"

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	{
		char	dest1[50] = "Hello ";
		char	dest2[50] = "Hello ";

		assert_str("ft_strncat(\"Hello \", \"World!\", 5)",
			strncat(dest1, "World!", 5),
			ft_strncat(dest2, "World!", 5));
	}

	{
		char	std[50] = "Hello ";
		char	mine[50] = "Hello ";

		assert_str("ft_strncat(\"Hello \", \"World\", 2)",
			strncat(std, "World", 2),
			ft_strncat(mine, "World", 2));
	}

	{
		char	std[50] = "Hello ";
		char	mine[50] = "Hello ";

		assert_str("ft_strncat(\"Hello \", \"World\", 0)",
			strncat(std, "World", 0),
			ft_strncat(mine, "World", 0));
	}

	{
		char	std[50] = "";
		char	mine[50] = "";

		assert_str("ft_strncat(\"\", \"abcd\", 3)",
			strncat(std, "abcd", 3),
			ft_strncat(mine, "abcd", 3));
	}

	{
		char	std[50] = "abc";
		char	mine[50] = "abc";

		assert_str("ft_strncat(\"abc\", \"\", 5)",
			strncat(std, "", 5),
			ft_strncat(mine, "", 5));
	}

	{
		char	std[50] = "12345";
		char	mine[50] = "12345";

		assert_str("ft_strncat(\"12345\", \"67890\", 10)",
			strncat(std, "67890", 10),
			ft_strncat(mine, "67890", 10));
	}

	{
		char	std[50] = "12345";
		char	mine[50] = "12345";

		assert_str("ft_strncat(\"12345\", \"67890\", 3)",
			strncat(std, "67890", 3),
			ft_strncat(mine, "67890", 3));
	}

	{
		char	std[50] = "abcdef";
		char	mine[50] = "abcdef";

		assert_str("ft_strncat(\"abcdef\", \"XYZ!\", 1)",
			strncat(std, "XYZ!", 1),
			ft_strncat(mine, "XYZ!", 1));
	}

	{
		char	std[50] = "abcdef";
		char	mine[50] = "abcdef";

		assert_str("ft_strncat(\"abcdef\", \"XYZ!\", 5)",
			strncat(std, "XYZ!", 5),
			ft_strncat(mine, "XYZ!", 5));
	}

	{
		char	std[50] = "42 ";
		char	mine[50] = "42 ";

		assert_str("ft_strncat(\"42 \", \"Piscine!\", 7)",
			strncat(std, "Piscine!", 7),
			ft_strncat(mine, "Piscine!", 7));
	}

	{
		char	dest[50] = "hello";
		char	*ret;

		ret = ft_strncat(dest, " world", 6);

		assert_int("return pointer == dest",
			ret == dest,
			1);
	}

	return (0);
}
