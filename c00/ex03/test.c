#include "../include/mini_test.h"

void ft_print_numbers(void);

int main(void)
{
	assert_stdout(
		"ft_print_numbers",
		"0123456789",
		ft_print_numbers);

	return (0);
}
