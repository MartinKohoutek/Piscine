#include "mini_test.h"

int ft_iterative_power(int nb, int power);

int main(void)
{
	assert_int("negative power", 0, ft_iterative_power(2, -1));

	assert_int("power 0", 1, ft_iterative_power(5, 0));
	assert_int("0^0", 1, ft_iterative_power(0, 0));

	assert_int("1^5", 1, ft_iterative_power(1, 5));
	assert_int("2^3", 8, ft_iterative_power(2, 3));
	assert_int("3^4", 81, ft_iterative_power(3, 4));
	assert_int("5^5", 3125, ft_iterative_power(5, 5));

	return (0);
}
