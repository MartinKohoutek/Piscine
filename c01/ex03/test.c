#include "mini_test.h"

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int div;
	int mod;

	div = 0;
	mod = 0;
	ft_div_mod(10, 3, &div, &mod);

	assert_int("ft_div_mod(10,3) div", 3, div);
	assert_int("ft_div_mod(10,3) mod", 1, mod);

	div = 0;
	mod = 0;

	ft_div_mod(-20, -3, &div, &mod);

	assert_int("ft_div_mod(-20,-3) div", 6, div);
	assert_int("ft_div_mod(-20,-3) mod", -2, mod);

	div = 0;
	mod = 0;
	ft_div_mod(-10, 3, &div, &mod);

	assert_int("ft_div_mod(-10,3) div", -3, div);
	assert_int("ft_div_mod(-10,3) mod", -1, mod);

	div = 0;
	mod = 0;
	ft_div_mod(7, -2, &div, &mod);

	assert_int("ft_div_mod(7,-2) div", -3, div);
	assert_int("ft_div_mod(7,-2) mod", 1, mod);

	div = 0;
	mod = 0;
	ft_div_mod(0, 5, &div, &mod);

	assert_int("ft_div_mod(0,5) div", 0, div);
	assert_int("ft_div_mod(0,5) mod", 0, mod);

	return (0);
}
