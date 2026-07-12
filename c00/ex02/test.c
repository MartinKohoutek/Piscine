#include "../include/mini_test.h"

void ft_print_reverse_alphabet(void);

int main(void)
{
	assert_stdout(
		"ft_print_reverse_alphabet",
		"zyxwvutsrqponmlkjihgfedcba",
		ft_print_reverse_alphabet);

	return (0);
}
