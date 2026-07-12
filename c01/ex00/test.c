#include "mini_test.h"

void ft_ft(int *nbr);

int main(void)
{
	int n;

	n = 0;
	ft_ft(&n);
	assert_int("ft_ft: 0 -> 42", 42, n);

	n = -15;
	ft_ft(&n);
	assert_int("ft_ft: -15 -> 42", 42, n);

	n = 123456;
	ft_ft(&n);
	assert_int("ft_ft: 123456 -> 42", 42, n);

	return (0);
}
