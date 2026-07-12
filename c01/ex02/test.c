#include "mini_test.h"

void ft_swap(int *a, int *b);

int main(void)
{
	int a;
	int b;

	a = 1;
	b = 2;

	ft_swap(&a, &b);

	assert_int("ft_swap: a", 2, a);
	assert_int("ft_swap: b", 1, b);

	a = -10;
	b = 50;

	ft_swap(&a, &b);

	assert_int("ft_swap: negative/positive a", 50, a);
	assert_int("ft_swap: negative/positive b", -10, b);

	a = 42;
	b = 42;

	ft_swap(&a, &b);

	assert_int("ft_swap: same values a", 42, a);
	assert_int("ft_swap: same values b", 42, b);

	int *pa;
	int *pb;

	a = 123;
	b = 456;

	pa = &a;
	pb = &b;

	ft_swap(pa, pb);

	assert_int("ft_swap pointer a (pointer sanity)", 456, *pa);
	assert_int("ft_swap pointer b (pointer sanity)", 123, *pb);

	return (0);
	return (0);
}
