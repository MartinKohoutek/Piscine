#include "../include/mini_test.h"

void ft_putchar(char c);

int main(void)
{
	assert_stdout_char("ft_putchar('A')", "A", ft_putchar, 'A');
	assert_stdout_char("ft_putchar('Z')", "Z", ft_putchar, 'Z');

	return 0;
}
