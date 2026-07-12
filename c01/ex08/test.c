#include "mini_test.h"

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int tab1[] = {5, 2, 8, 1, 3};
	int exp1[] = {1, 2, 3, 5, 8};

	ft_sort_int_tab(tab1, 5);

	assert_array_int("ft_sort_int_tab({5,2,8,1,3})",
		exp1,
		tab1,
		5);


	int tab2[] = {1, 2, 3, 4, 5};
	int exp2[] = {1, 2, 3, 4, 5};

	ft_sort_int_tab(tab2, 5);

	assert_array_int("ft_sort_int_tab({1,2,3,4,5})",
		exp2,
		tab2,
		5);


	int tab3[] = {5, 4, 3, 2, 1};
	int exp3[] = {1, 2, 3, 4, 5};

	ft_sort_int_tab(tab3, 5);

	assert_array_int("ft_sort_int_tab({5,4,3,2,1})",
		exp3,
		tab3,
		5);


	int tab4[] = {42};
	int exp4[] = {42};

	ft_sort_int_tab(tab4, 1);

	assert_array_int("ft_sort_int_tab({42})",
		exp4,
		tab4,
		1);


	int tab5[] = {-5, 10, -1, 0, 3};
	int exp5[] = {-5, -1, 0, 3, 10};

	ft_sort_int_tab(tab5, 5);

	assert_array_int("ft_sort_int_tab(negative values)",
		exp5,
		tab5,
		5);


	int tab6[] = {3, 1, 3, 2, 1};
	int exp6[] = {1, 1, 2, 3, 3};

	ft_sort_int_tab(tab6, 5);

	assert_array_int("ft_sort_int_tab(duplicates)",
		exp6,
		tab6,
		5);


	return (0);
}
