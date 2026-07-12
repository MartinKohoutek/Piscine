#include "mini_test.h"

int ft_find_next_prime(int nb);

int main(void)
{
	assert_int("0", 2, ft_find_next_prime(0));
	assert_int("1", 2, ft_find_next_prime(1));
	assert_int("2", 2, ft_find_next_prime(2));

	assert_int("3", 3, ft_find_next_prime(3));
	assert_int("4", 5, ft_find_next_prime(4));
	assert_int("5", 5, ft_find_next_prime(5));

	assert_int("6", 7, ft_find_next_prime(6));
	assert_int("10", 11, ft_find_next_prime(10));
	assert_int("20", 23, ft_find_next_prime(20));
	assert_int("100", 101, ft_find_next_prime(100));

	return (0);
}
