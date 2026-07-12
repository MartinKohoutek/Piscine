#include "../include/mini_test.h"

void ft_print_alphabet(void);

int main(void)
{
	assert_stdout(
		"ft_print_alphabet",
		"abcdefghijklmnopqrstuvwxyz",
		ft_print_alphabet);

	return (0);
}
