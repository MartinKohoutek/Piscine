#include "mini_test.h"

int ft_atoi_base(char *str, char *base);

int main(void)
{
	/* Decimal */
	assert_int("decimal 0",
		0,
		ft_atoi_base("0", "0123456789"));

	assert_int("decimal 42",
		42,
		ft_atoi_base("42", "0123456789"));

	assert_int("decimal -42",
		-42,
		ft_atoi_base("-42", "0123456789"));

	/* Binary */
	assert_int("binary 0",
		0,
		ft_atoi_base("0", "01"));

	assert_int("binary 1",
		1,
		ft_atoi_base("1", "01"));

	assert_int("binary 101010",
		42,
		ft_atoi_base("101010", "01"));

	assert_int("binary negative",
		-42,
		ft_atoi_base("-101010", "01"));

	/* Octal */
	assert_int("octal 52",
		42,
		ft_atoi_base("52", "01234567"));

	/* Hex */
	assert_int("hex lowercase",
		42,
		ft_atoi_base("2a", "0123456789abcdef"));

	assert_int("hex uppercase",
		42,
		ft_atoi_base("2A", "0123456789ABCDEF"));

	assert_int("hex ff",
		255,
		ft_atoi_base("ff", "0123456789abcdef"));

	/* Custom base */
	assert_int("poneyvif",
		42,
		ft_atoi_base("vn", "poneyvif"));

	/* Whitespace */
	assert_int("leading spaces",
		42,
		ft_atoi_base("   42", "0123456789"));

	assert_int("leading tabs",
		42,
		ft_atoi_base("\t\n42", "0123456789"));

	/* Signs */
	assert_int("multiple plus",
		42,
		ft_atoi_base("++++42", "0123456789"));

	assert_int("multiple minus",
		-42,
		ft_atoi_base("--42", "0123456789"));

	assert_int("mixed signs",
		-42,
		ft_atoi_base("+-+42", "0123456789"));

	/* Stop parsing */
	assert_int("letters after",
		42,
		ft_atoi_base("42abc", "0123456789"));

	assert_int("invalid first char",
		0,
		ft_atoi_base("abc42", "0123456789"));

	/* Invalid base */
	assert_int("empty base",
		0,
		ft_atoi_base("42", ""));

	assert_int("one char base",
		0,
		ft_atoi_base("42", "0"));

	assert_int("duplicate chars",
		0,
		ft_atoi_base("42", "00123456789"));

	assert_int("plus in base",
		0,
		ft_atoi_base("42", "01234+6789"));

	assert_int("minus in base",
		0,
		ft_atoi_base("42", "01234-6789"));

	assert_int("space in base",
		0,
		ft_atoi_base("42", "01234 6789"));


	assert_int("binary stop",
		5,
		ft_atoi_base("101xyz", "01"));

	assert_int("custom base stop",
		1,
		ft_atoi_base("oa", "poneyvif"));

	printf("\nAll ft_atoi_base tests passed!\n");
	return (0);
}
