#include "mini_test.h"

char *ft_strcapitalize(char *str);

int main(void)
{
	char str1[] = "hello world";
	char str2[] = "HELLO WORLD";
	char str3[] = "hi, how are you? 42words forty-two; fifty+and+one";
	char str4[] = "42hello WORLD";
	char str5[] = "one-two-three";
	char str6[] = "123 abc DEF";
	char str7[] = "";
	char str8[] = "already Correct";
	char str9[] = "a+b+c";
	char str10[] = "hello123world";

	assert_str("Simple lowercase",
			   "Hello World",
			   ft_strcapitalize(str1));

	assert_str("Already uppercase",
			   "Hello World",
			   ft_strcapitalize(str2));

	assert_str("Official example",
			   "Hi, How Are You? 42words Forty-Two; Fifty+And+One",
			   ft_strcapitalize(str3));

	assert_str("Number at start",
			   "42hello World",
			   ft_strcapitalize(str4));

	assert_str("Hyphen separated words",
			   "One-Two-Three",
			   ft_strcapitalize(str5));

	assert_str("Numbers separated",
			   "123 Abc Def",
			   ft_strcapitalize(str6));

	assert_str("Empty string",
			   "",
			   ft_strcapitalize(str7));

	assert_str("Mixed existing case",
			   "Already Correct",
			   ft_strcapitalize(str8));

	assert_str("Plus separated words",
			   "A+B+C",
			   ft_strcapitalize(str9));

	assert_str("Numbers inside word",
			   "Hello123world",
			   ft_strcapitalize(str10));

	char str11[] = "hello\tworld\nTEST";

	assert_str("Whitespace separators",
			   "Hello\tWorld\nTest",
			   ft_strcapitalize(str11));

	return (0);
}
