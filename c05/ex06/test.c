#include "mini_test.h"

int ft_is_prime(int nb);

int main(void)
{
	assert_int("negative", 0, ft_is_prime(-5));
	assert_int("0", 0, ft_is_prime(0));
	assert_int("1", 0, ft_is_prime(1));

	assert_int("2", 1, ft_is_prime(2));
	assert_int("3", 1, ft_is_prime(3));
	assert_int("5", 1, ft_is_prime(5));
	assert_int("7", 1, ft_is_prime(7));

	assert_int("4", 0, ft_is_prime(4));
	assert_int("6", 0, ft_is_prime(6));
	assert_int("9", 0, ft_is_prime(9));
	assert_int("15", 0, ft_is_prime(15));

	assert_int("97", 1, ft_is_prime(97));
	assert_int("100", 0, ft_is_prime(100));

	return (0);
}
