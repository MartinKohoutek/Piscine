#include "mini_test.h"

int ft_fibonacci(int index);

int main(void)
{
	assert_int("negative", -1, ft_fibonacci(-5));

	assert_int("index 0", 0, ft_fibonacci(0));
	assert_int("index 1", 1, ft_fibonacci(1));
	assert_int("index 2", 1, ft_fibonacci(2));
	assert_int("index 3", 2, ft_fibonacci(3));
	assert_int("index 4", 3, ft_fibonacci(4));
	assert_int("index 5", 5, ft_fibonacci(5));
	assert_int("index 6", 8, ft_fibonacci(6));
	assert_int("index 10", 55, ft_fibonacci(10));

	return (0);
}
