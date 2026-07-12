#include "mini_test.h"

int ft_sqrt(int nb);

int main(void)
{
	assert_int("negative", 0, ft_sqrt(-1));
	assert_int("zero", 0, ft_sqrt(0));

	assert_int("1", 1, ft_sqrt(1));
	assert_int("4", 2, ft_sqrt(4));
	assert_int("9", 3, ft_sqrt(9));
	assert_int("16", 4, ft_sqrt(16));
	assert_int("25", 5, ft_sqrt(25));

	assert_int("not sqrt 2", 0, ft_sqrt(2));
	assert_int("not sqrt 3", 0, ft_sqrt(3));
	assert_int("not sqrt 10", 0, ft_sqrt(10));
	assert_int("not sqrt 15", 0, ft_sqrt(15));

	return (0);
}
