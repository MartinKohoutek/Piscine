#include "mini_test.h"

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	assert_int("ft_strcmp(\"b\", \"a\")",
		strcmp("b", "a"),
		ft_strcmp("b", "a"));

	assert_int("ft_strcmp(\"hello\", \"hello\")",
		strcmp("hello", "hello"),
		ft_strcmp("hello", "hello"));

	assert_int("ft_strcmp(\"\", \"\")",
		strcmp("", ""),
		ft_strcmp("", ""));

	assert_int("ft_strcmp(\"\", \"abc\")",
		strcmp("", "abc"),
		ft_strcmp("", "abc"));

	assert_int("ft_strcmp(\"abc\", \"\")",
		strcmp("abc", ""),
		ft_strcmp("abc", ""));

	assert_int("ft_strcmp(\"abc\", \"abcd\")",
		strcmp("abc", "abcd"),
		ft_strcmp("abc", "abcd"));

	assert_int("ft_strcmp(\"abcd\", \"abc\")",
		strcmp("abcd", "abc"),
		ft_strcmp("abcd", "abc"));

	assert_int("ft_strcmp(\"abx\", \"aby\")",
		strcmp("abx", "aby"),
		ft_strcmp("abx", "aby"));

	assert_int("ft_strcmp(\"xbc\", \"abc\")",
		strcmp("xbc", "abc"),
		ft_strcmp("xbc", "abc"));

	assert_int("ft_strcmp(\"abcd\", \"abce\")",
		strcmp("abcd", "abce"),
		ft_strcmp("abcd", "abce"));

	assert_int("ft_strcmp(\"ABC\", \"abc\")",
		strcmp("ABC", "abc"),
		ft_strcmp("ABC", "abc"));

	assert_int("ft_strcmp(\"abc\", \"ABC\")",
		strcmp("abc", "ABC"),
		ft_strcmp("abc", "ABC"));

	assert_int("ft_strcmp(\"123\", \"124\")",
		strcmp("123", "124"),
		ft_strcmp("123", "124"));

	assert_int("ft_strcmp(\"abc!\", \"abc?\")",
		strcmp("abc!", "abc?"),
		ft_strcmp("abc!", "abc?"));

	assert_int("ft_strcmp(\"abc \", \"abc\")",
		strcmp("abc ", "abc"),
		ft_strcmp("abc ", "abc"));

	assert_int("ft_strcmp(\"abcdefghijklmnopqrstuvwxyz\", \"abcdefghijklmnopqrstuvwxyz\")",
		strcmp("abcdefghijklmnopqrstuvwxyz",
			"abcdefghijklmnopqrstuvwxyz"),
		ft_strcmp("abcdefghijklmnopqrstuvwxyz",
			"abcdefghijklmnopqrstuvwxyz"));

	assert_int("ft_strcmp(\"abcdefghijklmnopqrstuvwxyz\", \"abcdefghijklmnopqrstuvwxzz\")",
		strcmp("abcdefghijklmnopqrstuvwxyz",
			"abcdefghijklmnopqrstuvwxzz"),
		ft_strcmp("abcdefghijklmnopqrstuvwxyz",
			"abcdefghijklmnopqrstuvwxzz"));

	assert_int("ft_strcmp(\"abc\\0xxx\", \"abc\")",
		strcmp("abc\0xxx", "abc"),
		ft_strcmp("abc\0xxx", "abc"));

	assert_int("ft_strcmp(\"a\", \"b\")",
		strcmp("a", "b"),
		ft_strcmp("a", "b"));

	assert_int("ft_strcmp(\"b\", \"a\")",
		strcmp("b", "a"),
		ft_strcmp("b", "a"));

	assert_int("ft_strcmp(\"\\0\", \"\\0\")",
		strcmp("\0", "\0"),
		ft_strcmp("\0", "\0"));

	return (0);
}
