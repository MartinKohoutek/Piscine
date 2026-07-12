#include "mini_test.h"

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int a;
	int b;


	a = 10;
	b = 3;

	ft_ultimate_div_mod(&a, &b);

	assert_int("ft_ultimate_div_mod(10,3) div", 3, a);
	assert_int("ft_ultimate_div_mod(10,3) mod", 1, b);


	a = 20;
	b = 5;

	ft_ultimate_div_mod(&a, &b);

	assert_int("ft_ultimate_div_mod(20,5) div", 4, a);
	assert_int("ft_ultimate_div_mod(20,5) mod", 0, b);


	a = -10;
	b = 3;

	ft_ultimate_div_mod(&a, &b);

	assert_int("ft_ultimate_div_mod(-10,3) div", -3, a);
	assert_int("ft_ultimate_div_mod(-10,3) mod", -1, b);


	a = 7;
	b = -2;

	ft_ultimate_div_mod(&a, &b);

	assert_int("ft_ultimate_div_mod(7,-2) div", -3, a);
	assert_int("ft_ultimate_div_mod(7,-2) mod", 1, b);


	a = -20;
	b = -3;

	ft_ultimate_div_mod(&a, &b);

	assert_int("ft_ultimate_div_mod(-20,-3) div", 6, a);
	assert_int("ft_ultimate_div_mod(-20,-3) mod", -2, b);


	a = 0;
	b = 5;

	ft_ultimate_div_mod(&a, &b);

	assert_int("ft_ultimate_div_mod(0,5) div", 0, a);
	assert_int("ft_ultimate_div_mod(0,5) mod", 0, b);


	a = 5;
	b = 1;

	ft_ultimate_div_mod(&a, &b);

	assert_int("ft_ultimate_div_mod(5,1) div", 5, a);
	assert_int("ft_ultimate_div_mod(5,1) mod", 0, b);


	return (0);
}
