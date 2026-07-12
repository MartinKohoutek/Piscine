#include "mini_test.h"

int ft_recursive_factorial(int nb);

int main(void)
{
	assert_int("negative", 0, ft_recursive_factorial(-5));
	assert_int("-1", 0, ft_recursive_factorial(-1));
	assert_int("0!", 1, ft_recursive_factorial(0));
	assert_int("1!", 1, ft_recursive_factorial(1));
	assert_int("2!", 2, ft_recursive_factorial(2));
	assert_int("3!", 6, ft_recursive_factorial(3));
	assert_int("4!", 24, ft_recursive_factorial(4));
	assert_int("5!", 120, ft_recursive_factorial(5));
	assert_int("6!", 720, ft_recursive_factorial(6));

	return (0);
}
