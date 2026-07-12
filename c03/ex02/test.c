#include "mini_test.h"

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest1[50] = "Hello ";
	char	dest2[50] = "Hello ";
	char	dest3[50] = "";
	char	dest4[50] = "Hello";
	char	dest5[50] = "Hello";
	char	dest6[50] = "12345";
	char	dest7[50] = "abc";

	assert_str("ft_strcat(\"Hello \", \"World\")",
		strcat(dest1, "World"),
		ft_strcat(dest2, "World"));

	assert_str("ft_strcat(\"\", \"abc\")",
		strcat(dest3, "abc"),
		ft_strcat(dest3, "abc"));

	assert_str("ft_strcat(\"Hello\", \"\")",
		strcat(dest4, ""),
		ft_strcat(dest5, ""));

	assert_str("ft_strcat(\"12345\", \"67890\")",
		strcat(dest6, "67890"),
		ft_strcat(dest6, "67890"));

	assert_str("ft_strcat(\"abc\", \"def\")",
		strcat(dest7, "def"),
		ft_strcat(dest7, "def"));

	{
		char	std[50] = "42 ";
		char	mine[50] = "42 ";

		assert_str("ft_strcat(\"42 \", \"Piscine\")",
			strcat(std, "Piscine"),
			ft_strcat(mine, "Piscine"));
	}

	{
		char	std[50] = "A";
		char	mine[50] = "A";

		assert_str("ft_strcat(\"A\", \"B\")",
			strcat(std, "B"),
			ft_strcat(mine, "B"));
	}

	{
		char	std[50] = "Long string ";
		char	mine[50] = "Long string ";

		assert_str("ft_strcat(long, long)",
			strcat(std, "with more characters"),
			ft_strcat(mine, "with more characters"));
	}

	{
		char	dest[50] = "hello";
		char	*ret;

		ret = ft_strcat(dest, " world");

		assert_int("return pointer == dest",
			ret == dest,
			1);
	}

	return (0);
}
