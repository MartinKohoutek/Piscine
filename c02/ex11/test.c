#include "mini_test.h"

void ft_putstr_non_printable(char *str);

int main(void)
{
	assert_stdout_str("Normal text",
					  "Hello",
					  ft_putstr_non_printable,
					  "Hello");

	assert_stdout_str("Newline",
					  "Hello\\0aWorld",
					  ft_putstr_non_printable,
					  "Hello\nWorld");

	assert_stdout_str("Tab",
					  "Hello\\09World",
					  ft_putstr_non_printable,
					  "Hello\tWorld");

	assert_stdout_str("Control char",
					  "\\01",
					  ft_putstr_non_printable,
					  "\x01");

	assert_stdout_str("Delete",
					  "\\7f",
					  ft_putstr_non_printable,
					  "\x7f");

	assert_stdout_str("Empty",
					  "",
					  ft_putstr_non_printable,
					  "");

	return (0);
}
