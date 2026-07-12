#include "mini_test.h"

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int tab1[] = {1, 2, 3, 4, 5};
	int exp1[] = {5, 4, 3, 2, 1};

	ft_rev_int_tab(tab1, 5);

	assert_array_int("ft_rev_int_tab({1,2,3,4,5})",
					 exp1,
					 tab1,
					 5);

	int tab2[] = {42};
	int exp2[] = {42};

	ft_rev_int_tab(tab2, 1);

	assert_array_int("ft_rev_int_tab({42})",
					 exp2,
					 tab2,
					 1);

	int tab3[] = {1, 2};
	int exp3[] = {2, 1};

	ft_rev_int_tab(tab3, 2);

	assert_array_int("ft_rev_int_tab({1,2})",
					 exp3,
					 tab3,
					 2);

	int tab4[] = {-1, -2, -3, -4};
	int exp4[] = {-4, -3, -2, -1};

	ft_rev_int_tab(tab4, 4);

	assert_array_int("ft_rev_int_tab({-1,-2,-3,-4})",
					 exp4,
					 tab4,
					 4);

	int tab5[] = {0, 100, -100, 42, 7};
	int exp5[] = {7, 42, -100, 100, 0};

	ft_rev_int_tab(tab5, 5);

	assert_array_int("ft_rev_int_tab({0, 100, -100, 42, 7})",
					 exp5,
					 tab5,
					 5);

	// int *tab;
	// tab = NULL;

	// ft_rev_int_tab(tab, 0);

	// assert_array_int("ft_rev_int_tab({})", tab, tab, 0);

	return (0);
}
