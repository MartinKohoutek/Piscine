#include "mini_test.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ref_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = strlen(dest);
	src_len = strlen(src);

	if (dest_len >= size)
		return (size + src_len);

	i = 0;
	while (src[i] && dest_len + i + 1 < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';

	return (dest_len + src_len);
}

int	main(void)
{
	{
		char	std[50] = "Hello ";
		char	mine[50] = "Hello ";

		assert_int("ft_strlcat(\"Hello \", \"World\", 20)",
			ref_strlcat(std, "World", 20),
			ft_strlcat(mine, "World", 20));

		assert_str("result Hello World",
			std,
			mine);
	}

	{
		char	std[10] = "Hello";
		char	mine[10] = "Hello";

		assert_int("ft_strlcat(\"Hello\", \" World\", 10)",
			ref_strlcat(std, " World", 10),
			ft_strlcat(mine, " World", 10));

		assert_str("limited buffer",
			std,
			mine);
	}

	{
		char	std[10] = "abc";
		char	mine[10] = "abc";

		assert_int("ft_strlcat(\"abc\", \"xyz\", 10)",
			ref_strlcat(std, "xyz", 10),
			ft_strlcat(mine, "xyz", 10));

		assert_str("enough space",
			std,
			mine);
	}

	{
		char	std[7] = "abc";
		char	mine[7] = "abc";

		assert_int("ft_strlcat(\"abc\", \"123456\", 7)",
			ref_strlcat(std, "123456", 7),
			ft_strlcat(mine, "123456", 7));

		assert_str("small buffer",
			std,
			mine);
	}

	{
		char	std[20] = "";
		char	mine[20] = "";

		assert_int("ft_strlcat(\"\", \"abc\", 20)",
			ref_strlcat(std, "abc", 20),
			ft_strlcat(mine, "abc", 20));

		assert_str("empty dest",
			std,
			mine);
	}

	{
		char	std[20] = "abc";
		char	mine[20] = "abc";

		assert_int("ft_strlcat(\"abc\", \"\", 20)",
			ref_strlcat(std, "", 20),
			ft_strlcat(mine, "", 20));

		assert_str("empty src",
			std,
			mine);
	}

	{
		char	std[20] = "abc";
		char	mine[20] = "abc";

		assert_int("ft_strlcat(\"abc\", \"xyz\", 0)",
			ref_strlcat(std, "xyz", 0),
			ft_strlcat(mine, "xyz", 0));

		assert_str("size zero",
			std,
			mine);
	}

	{
		char	std[5] = "abc";
		char	mine[5] = "abc";

		assert_int("ft_strlcat(\"abc\", \"xyz\", 3)",
			ref_strlcat(std, "xyz", 3),
			ft_strlcat(mine, "xyz", 3));

		assert_str("size smaller than dest",
			std,
			mine);
	}

	{
		char	std[50] = "42 ";
		char	mine[50] = "42 ";

		assert_int("ft_strlcat(\"42 \", \"Piscine\", 50)",
			ref_strlcat(std, "Piscine", 50),
			ft_strlcat(mine, "Piscine", 50));

		assert_str("42 Piscine",
			std,
			mine);
	}

	return (0);
}
